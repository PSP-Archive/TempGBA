/*****************************************************************************
 * �S�p������\�����C�u����     mediumgauge
 *****************************************************************************/

#include "common.h"

#include "shinonomefont.c"

/*****************************************************************************
* prots
*****************************************************************************/
static void draw_char(s32 chr, u16 x, u16 y, u16 col, s16 bg_col, u16 *base_vram, u16 bufferwidth);

static s32 idx_hankaku(u8 ch);
static s32 idx_zenkaku(u8 hi, u8 lo);

static u8 iskanji_hi(u8 c);
static u8 iskanji_lo(u8 c);

/*****************************************************************************
* ������VRAM�ɓ]��
*****************************************************************************/
static void draw_char(s32 chr, u16 x, u16 y, u16 col, s16 bg_col, u16 *base_vram, u16 bufferwidth)
{
  u32 dx, dy;
  u16 *vptr0, *vptr;
  u8 bit, bitcnt;

  bitcnt = 0;
  bit = 0;
  chr *= 9;

  vptr0 = base_vram + (x + (y * bufferwidth));

  for (dy = 0 ; dy < FONTHEIGHT ; dy++)
  {
    vptr = vptr0;

    for (dx = 0 ; dx < FONTWIDTH ; dx++)
    {
      bitcnt >>= 1;

      if (bitcnt == 0)
      {
        bit = shinonomefont[chr++];
        bitcnt = 0x80;
      }

      if ((bit & bitcnt) != 0)
      {
        *vptr = col;
      }
      else if (bg_col >= 0)
      {
        *vptr = bg_col;
      }

      vptr++;
    }

    vptr0 += bufferwidth;
  }
}

/*****************************************************************************
* ���p�����̃C���f�b�N�X���擾
*****************************************************************************/
static s32 idx_hankaku(u8 ch)
{
  // 0x20 - 0x7e (ASCII����)
  if ((ch >= 0x20) && (ch <= 0x7e))
  {
    return (ch - 0x20);
  }

  // 0xA1 - 0xDF (���p�J�^�J�i)
  if ((ch >= 0xA1) && (ch <= 0xDF))
  {
    return (ch - 0x40);
  }

  // 0xF0 - 0xF7 (Battery ICON), 0xF8 - 0xFA (GBA ICON)
  if ((ch >= 0xF0) && (ch <= 0xFA))
  {
    return (ch - 0x50);
  }

  return 0;
}

/*****************************************************************************
* �S�p�����̃C���f�b�N�X���擾
*****************************************************************************/
static s32 idx_zenkaku(u8 hi, u8 lo)
{
  s32 idx;
  static const s32 codetbl[] =
  {
    -1,  0,  1,  2,  3, -1, -1,  4,  5,  6,  7,  8,  9, 10, 11, 12,  /* 0x80 */
    13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28,  /* 0x90 */
    29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, -1, -1, 40, 41, -1   /* 0xe0 */
  };

  /* ��ʃo�C�g����C���f�b�N�X�𓾂� */
  idx = codetbl[hi & 0x3F];

  /* �\�ɂȂ������̓X�y�[�X�ɕϊ� */
  if (idx == -1)
  {
    return (16 * 11);
  }

  idx = (16 * 11)           /* ���p�������X�L�b�v */
      + (idx * 2 * 192)     /* codetbl�P������192���� */
      + ((lo - 0x40) << 1);

  return idx;
}

/*****************************************************************************
* ������̕`��
*****************************************************************************/
void mh_print(const char *str, u16 x, u16 y, u16 col, s16 bg_col, u16 *base_vram, u16 bufferwidth)
{
  u16 dx, dy;
  u8 ch1, ch2;
  u8 bef = 0;
  s32 idx;

  dx = x;
  dy = y;

  while (*str != 0)
  {
    ch1 = *str++;
    ch2 = *str;

    if (ch1 == '\n')
    {
      dx = x;
      dy += FONTHEIGHT;
      bef = 0;
      continue;
    }

    if (bef != 0)
    {
      if (dx > (PSP_SCREEN_WIDTH - (FONTWIDTH * 2)))
        goto draw_end;

      idx = idx_zenkaku(bef, ch1);
      draw_char(idx,     dx,             dy, col, bg_col, base_vram, bufferwidth);
      draw_char(idx + 1, dx + FONTWIDTH, dy, col, bg_col, base_vram, bufferwidth);

      dx += (FONTWIDTH * 2);
      bef = 0;
    }
    else
    {
      if ((iskanji_hi(ch1) != 0) && (iskanji_lo(ch2) != 0))
      {
        bef = ch1;
      }
      else
      {
        if (dx > (PSP_SCREEN_WIDTH - FONTWIDTH))
          goto draw_end;

        idx = idx_hankaku(ch1);
        draw_char(idx, dx, dy, col, bg_col, base_vram, bufferwidth);

        dx += FONTWIDTH;
      }
    }
  } /* while */

  draw_end:;
}

/*****************************************************************************
* �S�p�����̏��1�o�C�g���ǂ����𔻒�  0x81�`0x9F�A0xe0�`0xeF
*****************************************************************************/
static u8 iskanji_hi(u8 c)
{
  return (((c >= 0x81) && (c <= 0x9F)) || ((c >= 0xe0) && (c <= 0xeF)));
}

/*****************************************************************************
* �S�p�����̉���1�o�C�g���ǂ����𔻒�  0x40�`0x7e�A 0x80�`0xFC
*****************************************************************************/
static u8 iskanji_lo(u8 c)
{
  return (((c >= 0x40) && (c <= 0x7e)) || ((c >= 0x80) && (c <= 0xFC)));
}

