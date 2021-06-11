/* unofficial gameplaySP kai
 *
 * Copyright (C) 2006 Exophase <exophase@gmail.com>
 * Copyright (C) 2007 takka <takka@tfact.net>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#include "common.h"


const char *message[2][MSG_END] =
{
  {
    // MSG_BROWSER_HELP
    "��:�I��  �~:���j���[  ��:" FONT_UP_DIRECTORY,

    // MSG_MENU_DATE_FMT_0
    "%4d/%2d/%2d %-4s %2d:%02d",

    // MSG_MENU_DATE_FMT_1
    "%2d/%2d/%4d %-4s %2d:%02d",

    // MSG_MAIN_MENU_TITLE
    "���j���[",

    // MSG_MAIN_MENU_0
    "���[�h�X�e�[�g : �X���b�g %d",

    // MSG_MAIN_MENU_1
    "�Z�[�u�X�e�[�g : �X���b�g %d",

    // MSG_MAIN_MENU_2
    "�X�e�[�g�Z�[�u�g�� " FONT_R_TRIGGER,

    // MSG_MAIN_MENU_3
    "�X�N���[�� �V���b�g: %s",

    // MSG_MAIN_MENU_4
    "�G�~�����[�^�̐ݒ�",

    // MSG_MAIN_MENU_5
    "�Q�[���p�b�h�̐ݒ�",

    // MSG_MAIN_MENU_6
    "�A�i���O�X�e�B�b�N�̐ݒ�",

    // MSG_MAIN_MENU_7
    "�Q�[���̃��[�h " FONT_L_TRIGGER,

    // MSG_MAIN_MENU_8
    "���Z�b�g",

    // MSG_MAIN_MENU_9
    "�Q�[���ɖ߂�",

    // MSG_MAIN_MENU_10
    "�X���[�v",

    // MSG_MAIN_MENU_11
    "TempGBA�̏I��",

    // MSG_MAIN_MENU_HELP_0
    "��:���[�h  " FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":�X���b�g�I��",

    // MSG_MAIN_MENU_HELP_1
    "��:�Z�[�u  " FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":�X���b�g�I��",

    // MSG_MAIN_MENU_HELP_2
    "��:�T�u���j���[  " FONT_R_TRIGGER ":�V���[�g�J�b�g",

    // MSG_MAIN_MENU_HELP_3
    "��:�C���[�W�ۑ�  " FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":�t�H�[�}�b�g�I��",

    // MSG_MAIN_MENU_HELP_4
    "��:�T�u���j���[",

    // MSG_MAIN_MENU_HELP_5
    "��:�T�u���j���[",

    // MSG_MAIN_MENU_HELP_6
    "��:�T�u���j���[",

    // MSG_MAIN_MENU_HELP_7
    "��:�t�@�C���u���E�U  " FONT_L_TRIGGER ":�V���[�g�J�b�g",

    // MSG_MAIN_MENU_HELP_8
    "��:�Q�[�������Z�b�g",

    // MSG_MAIN_MENU_HELP_9
    "��:�Q�[���ɖ߂�",

    // MSG_MAIN_MENU_HELP_10
    "��:�X���[�v ���[�h",

    // MSG_MAIN_MENU_HELP_11
    "��:�I��",

    // MSG_OPTION_MENU_TITLE
    "�G�~�����[�^�̐ݒ�",

    // MSG_OPTION_MENU_0
    "��ʕ\\���@�@�@�@�@: %s",

    // MSG_OPTION_MENU_1
    "��ʂ̊g�嗦�@�@�@: %d%%",

    // MSG_OPTION_MENU_2
    "��ʂ̃t�B���^�@�@: %s",

    // MSG_OPTION_MENU_3
    "�t���[���X�L�b�v�@: %s",

    // MSG_OPTION_MENU_4
    "�X�L�b�v�̒l�@�@�@: %d",

    // MSG_OPTION_MENU_5
    "����N���b�N�@�@�@: %s",

    // MSG_OPTION_MENU_6
    "�T�E���h���ʁ@�@�@: %s",

    // MSG_OPTION_MENU_7
    "�X�^�b�N�̍œK���@: %s",

    // MSG_OPTION_MENU_8
    "BIOS����N�����s��: %s",

    // MSG_OPTION_MENU_9
    "�o�b�N�A�b�v�̍X�V: %s",

    // MSG_OPTION_MENU_10
    "����@�@�@�@�@�@�@: %s",

    // MSG_OPTION_MENU_11
    "�߂�",

    // MSG_OPTION_MENU_HELP_0
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":�I��   �S�Q�[������",

    // MSG_OPTION_MENU_HELP_1
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":�I��   �S�Q�[������",

    // MSG_OPTION_MENU_HELP_2
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":�I��   �S�Q�[������",

    // MSG_OPTION_MENU_HELP_3
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":�I��   �Q�[����",

    // MSG_OPTION_MENU_HELP_4
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":�I��   �Q�[����",

    // MSG_OPTION_MENU_HELP_5
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":�I��   �Q�[����",

    // MSG_OPTION_MENU_HELP_6
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":�I��   �S�Q�[������",

    // MSG_OPTION_MENU_HELP_7
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":�I��   �S�Q�[������",

    // MSG_OPTION_MENU_HELP_8
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":�I��   �S�Q�[������",

    // MSG_OPTION_MENU_HELP_9
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":�I��   �S�Q�[������",

    // MSG_OPTION_MENU_HELP_10
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":�I��   �S�Q�[������",

    // MSG_OPTION_MENU_HELP_11
    "��:���C�����j���[",

    // MSG_STATE_MENU_DATE_FMT_0
    "%4d/%2d/%2d %-4s %2d:%02d:%02d",

    // MSG_STATE_MENU_DATE_FMT_1
    "%2d/%2d/%4d %-4s %2d:%02d:%02d",

    // MSG_STATE_MENU_DATE_NONE_0
    "----/--/-- ---- --:--:--",

    // MSG_STATE_MENU_DATE_NONE_1
    "--/--/---- ---- --:--:--",

    // MSG_STATE_MENU_STATE_NONE
    "���̃X���b�g�Ƀf�[�^�͂���܂���",

    // MSG_STATE_MENU_TITLE
    "�X�e�[�g�Z�[�u",

    // MSG_STATE_MENU_0
    "",

    // MSG_STATE_MENU_1
    "�t�@�C������X�e�[�g�����[�h",

    // MSG_STATE_MENU_2
    "�߂�",

    // MSG_STATE_MENU_HELP_0
    "��:���s  " FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":�I��",

    // MSG_STATE_MENU_HELP_1
    "��:�t�@�C���u���E�U",

    // MSG_STATE_MENU_HELP_2
    "��:���C�����j���[",

    // MSG_PAD_MENU_TITLE
    "�Q�[���p�b�h�̐ݒ�",

    // MSG_PAD_MENU_0
    "���@�@ : %s",

    // MSG_PAD_MENU_1
    "���@�@ : %s",

    // MSG_PAD_MENU_2
    "���@�@ : %s",

    // MSG_PAD_MENU_3
    "���@�@ : %s",

    // MSG_PAD_MENU_4
    "���@�@ : %s",

    // MSG_PAD_MENU_5
    "�~�@�@ : %s",

    // MSG_PAD_MENU_6
    "���@�@ : %s",

    // MSG_PAD_MENU_7
    "���@�@ : %s",

    // MSG_PAD_MENU_8
    FONT_L_TRIGGER "�@�@ : %s",

    // MSG_PAD_MENU_9
    FONT_R_TRIGGER "�@�@ : %s",

    // MSG_PAD_MENU_10
    "START  : %s",

    // MSG_PAD_MENU_11
    "SELECT : %s",

    // MSG_PAD_MENU_12
    "�߂�",

    // MSG_PAD_MENU_HELP_0
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":�I��",

    // MSG_PAD_MENU_HELP_1
    "��:���C�����j���[",

    //PAD�̐ݒ� �R���t�B�O

    // MSG_PAD_MENU_CFG_0
    "��",

    // MSG_PAD_MENU_CFG_1
    "��",

    // MSG_PAD_MENU_CFG_2
    "��",

    // MSG_PAD_MENU_CFG_3
    "��",

    // MSG_PAD_MENU_CFG_4
    "A",

    // MSG_PAD_MENU_CFG_5
    "B",

    // MSG_PAD_MENU_CFG_6
    "L",

    // MSG_PAD_MENU_CFG_7
    "R",

    // MSG_PAD_MENU_CFG_8
    "�X�^�[�g",

    // MSG_PAD_MENU_CFG_9
    "�Z���N�g",

    // MSG_PAD_MENU_CFG_10
    "���j���[",

    // MSG_PAD_MENU_CFG_11
    "�^�[�{",

    // MSG_PAD_MENU_CFG_12
    "�X�e�[�g���[�h",

    // MSG_PAD_MENU_CFG_13
    "�X�e�[�g�Z�[�u",

    // MSG_PAD_MENU_CFG_14
    "A�A��",

    // MSG_PAD_MENU_CFG_15
    "B�A��",

    // MSG_PAD_MENU_CFG_16
    "L�A��",

    // MSG_PAD_MENU_CFG_17
    "R�A��",

    // MSG_PAD_MENU_CFG_18
    "�t���[�����[�g�\\��",

    // MSG_PAD_MENU_CFG_19
    "�Ȃ�",

    // MSG_A_PAD_MENU_TITLE
    "�A�i���O�X�e�B�b�N�̐ݒ�",

    // MSG_A_PAD_MENU_0
    "�A�i���O �� : %s",

    // MSG_A_PAD_MENU_1
    "�A�i���O �� : %s",

    // MSG_A_PAD_MENU_2
    "�A�i���O �� : %s",

    // MSG_A_PAD_MENU_3
    "�A�i���O �� : %s",

    // MSG_A_PAD_MENU_4
    "�A�i���O���͂�L��: %s",

    // MSG_A_PAD_MENU_5
    "�A�i���O���͂̊��x: %d",

    // MSG_A_PAD_MENU_6
    "�߂�",

    // MSG_A_PAD_MENU_HELP_0
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":�I��",

    // MSG_A_PAD_MENU_HELP_1
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":�I��",

    // MSG_A_PAD_MENU_HELP_2
    "��:���C�����j���[",

    // MSG_NON_LOAD_GAME
    "�Q�[���̓��[�h����Ă��܂���",

    // MSG_DAYW_0
    "(��)",

    // MSG_DAYW_1
    "(��)",

    // MSG_DAYW_2
    "(��)",

    // MSG_DAYW_3
    "(��)",

    // MSG_DAYW_4
    "(��)",

    // MSG_DAYW_5
    "(��)",

    // MSG_DAYW_6
    "(�y)",

    // MSG_YES
    "�͂�",

    // MSG_NO
    "������",

    // MSG_ON
    "�I��",

    // MSG_OFF
    "�I�t",

    // MSG_ENABLED
    "�L��",

    // MSG_DISABLED
    "����",

    // MSG_AUTO
    "����",

    // MSG_MANUAL
    "�蓮",

    // MSG_EXITONLY
    "�I�����̂�",

    // MSG_LOAD
    "���[�h",

    // MSG_SAVE
    "�Z�[�u",

    // MSG_SCN_SCALED_NONE
    "100% GU",

    // MSG_SCN_SCALED_X15_GU
    "150% GU",

    // MSG_SCN_SCALED_X15_SW
    "150% SW",

    // MSG_SCN_SCALED_USER
    "�w�� GU",

    // MSG_LANG_JAPANESE
    "���{��",

    // MSG_LANG_ENGLISH
    "�p��",

    // MSG_SS_DATE_FMT_0
    "%04d_%02d_%02d_%s%02d_%02d_%02d_%03d",

    // MSG_SS_DATE_FMT_1
    "%02d_%02d_%04d_%s%02d_%02d_%02d_%03d",

    // MSG_ERR_SET_DIR_0
    "�G���[ [%s] �w�肳�ꂽ�f�B���N�g���͖����ł��B",

    // MSG_ERR_SET_DIR_1
    "�G���[ [%s] �w�肪����܂���B",

    // MSG_ERR_SET_DIR_2
    "�G���[�̔����������ڂ́A�ȉ��̃f�B���N�g���ɐݒ肵�܂��B\n%s",

    // png.c
    // MSG_ERR_SS_PNG_0
    "�������̊m�ۂ��o���܂���ł����B",

    // MSG_ERR_SS_PNG_1
    "PNG�C���[�W�̍쐬���o���܂���ł����B",

    // memory.c
    // MSG_LOADING_ROM
    "���[�h��...",

    // MSG_SEARCHING_BACKUP_ID
    "BACKUP ID ��������",

    // main.c
    // MSG_GBA_SLEEP_MODE
    "�X���[�v ���[�h",

    // MSG_ERR_LOAD_DIR_INI
    "dir.ini�����[�h�o���܂���B���ׂĂ��ȉ��̃f�B���N�g���ɐݒ肵�܂��B\n%s",

    // MSG_ERR_BIOS_NONE
    "BIOS�t�@�C�������[�h�o���܂���B",

    // MSG_ERR_LOAD_GAMEPACK
    "�Q�[���t�@�C�������[�h�o���܂���B",

    // MSG_ERR_OPEN_GAMEPACK
    "�Q�[���t�@�C�����ǂ߂܂���B",

    // MSG_ERR_START_CALLBACK_THEREAD
    "�R�[���o�b�N�X���b�h���J�n�o���܂���B",

    // sound.c
    // MSG_ERR_RESERVE_AUDIO_CHANNEL
    "�I�[�f�B�I�`�����l�����m�ۏo���܂���B",

    // MSG_ERR_START_SOUND_THEREAD
    "�T�E���h�X���b�h���J�n�o���܂���B",

    // MSG_ERR_MALLOC
    "�������̊m�ۂ��o���܂���B",

    // MSG_ERR_CONT
    "�����{�^���������Ă��������B",

    // MSG_ERR_QUIT
    "�����{�^���������ƏI�����܂��B",

    // MSG_BLANK
    ""
  },

  {
    // MSG_BROWSER_HELP
    "��:Select  �~:Menu  ��:" FONT_UP_DIRECTORY,

    // MSG_MENU_DATE_FMT_0
    "%4d/%2d/%2d %-3s %2d:%02d",

    // MSG_MENU_DATE_FMT_1
    "%2d/%2d/%4d %-3s %2d:%02d",

    // MSG_MAIN_MENU_TITLE
    "Menu",

    // MSG_MAIN_MENU_0
    "Load state : SLOT %d",

    // MSG_MAIN_MENU_1
    "Save state : SLOT %d",

    // MSG_MAIN_MENU_2
    "Savestate details " FONT_R_TRIGGER,

    // MSG_MAIN_MENU_3
    "Screen capture : %s",

    // MSG_MAIN_MENU_4
    "Emulator options",

    // MSG_MAIN_MENU_5
    "Gamepad config",

    // MSG_MAIN_MENU_6
    "Analog stick config",

    // MSG_MAIN_MENU_7
    "Load game " FONT_L_TRIGGER,

    // MSG_MAIN_MENU_8
    "Reset",

    // MSG_MAIN_MENU_9
    "Return to game",

    // MSG_MAIN_MENU_10
    "Sleep",

    // MSG_MAIN_MENU_11
    "Exit TempGBA",

    // MSG_MAIN_MENU_HELP_0
    "��:Load  " FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select slot",

    // MSG_MAIN_MENU_HELP_1
    "��:Save  " FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select slot",

    // MSG_MAIN_MENU_HELP_2
    "��:Sub menu  " FONT_R_TRIGGER ":Shortcut key",

    // MSG_MAIN_MENU_HELP_3
    "��:Save Image  " FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select image format",

    // MSG_MAIN_MENU_HELP_4
    "��:Sub menu",

    // MSG_MAIN_MENU_HELP_5
    "��:Sub menu",

    // MSG_MAIN_MENU_HELP_6
    "��:Sub menu",

    // MSG_MAIN_MENU_HELP_7
    "��:File browser  " FONT_L_TRIGGER ":Shortcut key",

    // MSG_MAIN_MENU_HELP_8
    "��:Reset game",

    // MSG_MAIN_MENU_HELP_9
    "��:Return to game",

    // MSG_MAIN_MENU_HELP_10
    "��:Sleep mode",

    // MSG_MAIN_MENU_HELP_11
    "��:Exit",

    // MSG_OPTION_MENU_TITLE
    "Emulator options",

    // MSG_OPTION_MENU_0
    "Display mode    : %s",

    // MSG_OPTION_MENU_1
    "Magnification   : %d%%",

    // MSG_OPTION_MENU_2
    "Bilinear filter : %s",

    // MSG_OPTION_MENU_3
    "Frameskip type  : %s",

    // MSG_OPTION_MENU_4
    "Frameskip value : %d",

    // MSG_OPTION_MENU_5
    "CPU clock freq  : %s",

    // MSG_OPTION_MENU_6
    "Sound volume    : %s",

    // MSG_OPTION_MENU_7
    "Stack optimize  : %s",

    // MSG_OPTION_MENU_8
    "Boot from BIOS  : %s",

    // MSG_OPTION_MENU_9
    "Update backup   : %s",

    // MSG_OPTION_MENU_10
    "Language        : %s",

    // MSG_OPTION_MENU_11
    "Back",

    // MSG_OPTION_MENU_HELP_0
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select   all games",

    // MSG_OPTION_MENU_HELP_1
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select   all games",

    // MSG_OPTION_MENU_HELP_2
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select   all games",

    // MSG_OPTION_MENU_HELP_3
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select   each games",

    // MSG_OPTION_MENU_HELP_4
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select   each games",

    // MSG_OPTION_MENU_HELP_5
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select   each games",

    // MSG_OPTION_MENU_HELP_6
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select   all games",

    // MSG_OPTION_MENU_HELP_7
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select   all games",

    // MSG_OPTION_MENU_HELP_8
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select   all games",

    // MSG_OPTION_MENU_HELP_9
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select   all games",

    // MSG_OPTION_MENU_HELP_10
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select   all games",

    // MSG_OPTION_MENU_HELP_11
    "��:Main menu",

    // MSG_STATE_MENU_DATE_FMT_0
    "%4d/%2d/%2d %-3s %2d:%02d:%02d",

    // MSG_STATE_MENU_DATE_FMT_1
    "%2d/%2d/%4d %-3s %2d:%02d:%02d",

    // MSG_STATE_MENU_DATE_NONE_0
    "----/--/-- --- --:--:--",

    // MSG_STATE_MENU_DATE_NONE_1
    "--/--/---- --- --:--:--",

    // MSG_STATE_MENU_STATE_NONE
    "No data in this slot",

    // MSG_STATE_MENU_TITLE
    "Savestate",

    // MSG_STATE_MENU_0
    "",

    // MSG_STATE_MENU_1
    "Load state from file",

    // MSG_STATE_MENU_2
    "Back",

    // MSG_STATE_MENU_HELP_0
    "��:Execute  " FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select",

    // MSG_STATE_MENU_HELP_1
    "��:File browser",

    // MSG_STATE_MENU_HELP_2
    "��:Main menu",

    // MSG_PAD_MENU_TITLE
    "Gamepad config",

    // MSG_PAD_MENU_0
    "���@�@ : %s",

    // MSG_PAD_MENU_1
    "���@�@ : %s",

    // MSG_PAD_MENU_2
    "���@�@ : %s",

    // MSG_PAD_MENU_3
    "���@�@ : %s",

    // MSG_PAD_MENU_4
    "���@�@ : %s",

    // MSG_PAD_MENU_5
    "�~�@�@ : %s",

    // MSG_PAD_MENU_6
    "���@�@ : %s",

    // MSG_PAD_MENU_7
    "���@�@ : %s",

    // MSG_PAD_MENU_8
    FONT_L_TRIGGER "�@�@ : %s",

    // MSG_PAD_MENU_9
    FONT_R_TRIGGER "�@�@ : %s",

    // MSG_PAD_MENU_10
    "START  : %s",

    // MSG_PAD_MENU_11
    "SELECT : %s",

    // MSG_PAD_MENU_12
    "Back",

    // MSG_PAD_MENU_HELP_0
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select",

    // MSG_PAD_MENU_HELP_1
    "��:Main menu",

    //PAD�̐ݒ� �R���t�B�O

    // MSG_PAD_MENU_CFG_0
    "��",

    // MSG_PAD_MENU_CFG_1
    "��",

    // MSG_PAD_MENU_CFG_2
    "��",

    // MSG_PAD_MENU_CFG_3
    "��",

    // MSG_PAD_MENU_CFG_4
    "A",

    // MSG_PAD_MENU_CFG_5
    "B",

    // MSG_PAD_MENU_CFG_6
    "L",

    // MSG_PAD_MENU_CFG_7
    "R",

    // MSG_PAD_MENU_CFG_8
    "START",

    // MSG_PAD_MENU_CFG_9
    "SELECT",

    // MSG_PAD_MENU_CFG_10
    "menu",

    // MSG_PAD_MENU_CFG_11
    "fast forward",

    // MSG_PAD_MENU_CFG_12
    "load state",

    // MSG_PAD_MENU_CFG_13
    "save state",

    // MSG_PAD_MENU_CFG_14
    "RAPID FIRE A",

    // MSG_PAD_MENU_CFG_15
    "RAPID FIRE B",

    // MSG_PAD_MENU_CFG_16
    "RAPID FIRE L",

    // MSG_PAD_MENU_CFG_17
    "RAPID FIRE R",

    // MSG_PAD_MENU_CFG_18
    "show fps",

    // MSG_PAD_MENU_CFG_19
    "none",

    // MSG_A_PAD_MENU_TITLE
    "Analog stick config",

    // MSG_A_PAD_MENU_0
    "Analog �� : %s",

    // MSG_A_PAD_MENU_1
    "Analog �� : %s",

    // MSG_A_PAD_MENU_2
    "Analog �� : %s",

    // MSG_A_PAD_MENU_3
    "Analog �� : %s",

    // MSG_A_PAD_MENU_4
    "Enable analog input : %s",

    // MSG_A_PAD_MENU_5
    "Analog sensitivity  : %d",

    // MSG_A_PAD_MENU_6
    "Back",

    // MSG_A_PAD_MENU_HELP_0
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select",

    // MSG_A_PAD_MENU_HELP_1
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select",

    // MSG_A_PAD_MENU_HELP_2
    "��:Main menu",

    // MSG_NON_LOAD_GAME
    "Game is not loaded",

    // MSG_DAYW_0
    "SUN",

    // MSG_DAYW_1
    "MON",

    // MSG_DAYW_2
    "TUE",

    // MSG_DAYW_3
    "WED",

    // MSG_DAYW_4
    "THU",

    // MSG_DAYW_5
    "FRI",

    // MSG_DAYW_6
    "SAT",

    // MSG_YES
    "YES",

    // MSG_NO
    "NO",

    // MSG_ON
    "ON",

    // MSG_OFF
    "OFF",

    // MSG_ENABLED
    "ENABLE",

    // MSG_DISABLED
    "DISABLED",

    // MSG_AUTO
    "AUTO",

    // MSG_MANUAL
    "MANUAL",

    // MSG_EXITONLY
    "Exit Only",

    // MSG_LOAD
    "LOAD",

    // MSG_SAVE
    "SAVE",

    // MSG_SCN_SCALED_NONE
    "100% GU",

    // MSG_SCN_SCALED_X15_GU
    "150% GU",

    // MSG_SCN_SCALED_X15_SW
    "150% SW",

    // MSG_SCN_SCALED_USER
    "USER GU",

    // MSG_LANG_JAPANESE
    "Japanese",

    // MSG_LANG_ENGLISH
    "English",

    // MSG_SS_DATE_FMT_0
    "%04d_%02d_%02d_%s%02d_%02d_%02d_%03d",

    // MSG_SS_DATE_FMT_1
    "%02d_%02d_%04d_%s%02d_%02d_%02d_%03d",

    // MSG_ERR_SET_DIR_0
    "ERROR [%s] Specified directory is invalid.",

    // MSG_ERR_SET_DIR_1
    "ERROR [%s] Not specified.",

    // MSG_ERR_SET_DIR_2
    "The error occurred. It's set as the following directories.\n%s",

    // png.c
    // MSG_ERR_SS_PNG_0
    "Could not allocate memory for PNG.",

    // MSG_ERR_SS_PNG_1
    "Could not enecode PNG image.",

    // memory.c
    // MSG_LOADING_ROM
    "Now Loading...",

    // MSG_SEARCHING_BACKUP_ID
    "Searching BACKUP ID",

    // main.c
    // MSG_GBA_SLEEP_MODE
    "SLEEP MODE",

    // MSG_ERR_LOAD_DIR_INI
    "Could not load dir.ini file.\nEverything is set as the following directory.\n%s",

    // MSG_ERR_BIOS_NONE
    "Could not load BIOS image file.",

    // MSG_ERR_LOAD_GAMEPACK
    "Could not load the game file.",

    // MSG_ERR_OPEN_GAMEPACK
    "Could not open the game file.",

    // MSG_ERR_START_CALLBACK_THREAD
    "Could not start the callback thread.",

    // sound.c
    // MSG_ERR_RESERVE_AUDIO_CHANNEL
    "Could not reserve audio channel.",

    // MSG_ERR_START_SOUND_THREAD
    "Could not start the sound thread.",

    // MSG_ERR_MALLOC
    "Could not allocate memory.",

    // MSG_ERR_CONT
    "Press any button to continue.",

    // MSG_ERR_QUIT
    "Press any button to exit.",

    // MSG_BLANK
    ""
  }
};

