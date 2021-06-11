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
    "○:選択  ×:メニュー  □:" FONT_UP_DIRECTORY,

    // MSG_MENU_DATE_FMT_0
    "%4d/%2d/%2d %-4s %2d:%02d",

    // MSG_MENU_DATE_FMT_1
    "%2d/%2d/%4d %-4s %2d:%02d",

    // MSG_MAIN_MENU_TITLE
    "メニュー",

    // MSG_MAIN_MENU_0
    "ロードステート : スロット %d",

    // MSG_MAIN_MENU_1
    "セーブステート : スロット %d",

    // MSG_MAIN_MENU_2
    "ステートセーブ拡張 " FONT_R_TRIGGER,

    // MSG_MAIN_MENU_3
    "スクリーン ショット: %s",

    // MSG_MAIN_MENU_4
    "エミュレータの設定",

    // MSG_MAIN_MENU_5
    "ゲームパッドの設定",

    // MSG_MAIN_MENU_6
    "アナログスティックの設定",

    // MSG_MAIN_MENU_7
    "ゲームのロード " FONT_L_TRIGGER,

    // MSG_MAIN_MENU_8
    "リセット",

    // MSG_MAIN_MENU_9
    "ゲームに戻る",

    // MSG_MAIN_MENU_10
    "スリープ",

    // MSG_MAIN_MENU_11
    "TempGBAの終了",

    // MSG_MAIN_MENU_HELP_0
    "○:ロード  " FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":スロット選択",

    // MSG_MAIN_MENU_HELP_1
    "○:セーブ  " FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":スロット選択",

    // MSG_MAIN_MENU_HELP_2
    "○:サブメニュー  " FONT_R_TRIGGER ":ショートカット",

    // MSG_MAIN_MENU_HELP_3
    "○:イメージ保存  " FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":フォーマット選択",

    // MSG_MAIN_MENU_HELP_4
    "○:サブメニュー",

    // MSG_MAIN_MENU_HELP_5
    "○:サブメニュー",

    // MSG_MAIN_MENU_HELP_6
    "○:サブメニュー",

    // MSG_MAIN_MENU_HELP_7
    "○:ファイルブラウザ  " FONT_L_TRIGGER ":ショートカット",

    // MSG_MAIN_MENU_HELP_8
    "○:ゲームをリセット",

    // MSG_MAIN_MENU_HELP_9
    "○:ゲームに戻る",

    // MSG_MAIN_MENU_HELP_10
    "○:スリープ モード",

    // MSG_MAIN_MENU_HELP_11
    "○:終了",

    // MSG_OPTION_MENU_TITLE
    "エミュレータの設定",

    // MSG_OPTION_MENU_0
    "画面表\示　　　　　: %s",

    // MSG_OPTION_MENU_1
    "画面の拡大率　　　: %d%%",

    // MSG_OPTION_MENU_2
    "画面のフィルタ　　: %s",

    // MSG_OPTION_MENU_3
    "フレームスキップ　: %s",

    // MSG_OPTION_MENU_4
    "スキップの値　　　: %d",

    // MSG_OPTION_MENU_5
    "動作クロック　　　: %s",

    // MSG_OPTION_MENU_6
    "サウンド音量　　　: %s",

    // MSG_OPTION_MENU_7
    "スタックの最適化　: %s",

    // MSG_OPTION_MENU_8
    "BIOSから起動を行う: %s",

    // MSG_OPTION_MENU_9
    "バックアップの更新: %s",

    // MSG_OPTION_MENU_10
    "言語　　　　　　　: %s",

    // MSG_OPTION_MENU_11
    "戻る",

    // MSG_OPTION_MENU_HELP_0
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":選択   全ゲーム共通",

    // MSG_OPTION_MENU_HELP_1
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":選択   全ゲーム共通",

    // MSG_OPTION_MENU_HELP_2
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":選択   全ゲーム共通",

    // MSG_OPTION_MENU_HELP_3
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":選択   ゲーム個別",

    // MSG_OPTION_MENU_HELP_4
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":選択   ゲーム個別",

    // MSG_OPTION_MENU_HELP_5
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":選択   ゲーム個別",

    // MSG_OPTION_MENU_HELP_6
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":選択   全ゲーム共通",

    // MSG_OPTION_MENU_HELP_7
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":選択   全ゲーム共通",

    // MSG_OPTION_MENU_HELP_8
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":選択   全ゲーム共通",

    // MSG_OPTION_MENU_HELP_9
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":選択   全ゲーム共通",

    // MSG_OPTION_MENU_HELP_10
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":選択   全ゲーム共通",

    // MSG_OPTION_MENU_HELP_11
    "○:メインメニュー",

    // MSG_STATE_MENU_DATE_FMT_0
    "%4d/%2d/%2d %-4s %2d:%02d:%02d",

    // MSG_STATE_MENU_DATE_FMT_1
    "%2d/%2d/%4d %-4s %2d:%02d:%02d",

    // MSG_STATE_MENU_DATE_NONE_0
    "----/--/-- ---- --:--:--",

    // MSG_STATE_MENU_DATE_NONE_1
    "--/--/---- ---- --:--:--",

    // MSG_STATE_MENU_STATE_NONE
    "このスロットにデータはありません",

    // MSG_STATE_MENU_TITLE
    "ステートセーブ",

    // MSG_STATE_MENU_0
    "",

    // MSG_STATE_MENU_1
    "ファイルからステートをロード",

    // MSG_STATE_MENU_2
    "戻る",

    // MSG_STATE_MENU_HELP_0
    "○:実行  " FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":選択",

    // MSG_STATE_MENU_HELP_1
    "○:ファイルブラウザ",

    // MSG_STATE_MENU_HELP_2
    "○:メインメニュー",

    // MSG_PAD_MENU_TITLE
    "ゲームパッドの設定",

    // MSG_PAD_MENU_0
    "↑　　 : %s",

    // MSG_PAD_MENU_1
    "↓　　 : %s",

    // MSG_PAD_MENU_2
    "←　　 : %s",

    // MSG_PAD_MENU_3
    "→　　 : %s",

    // MSG_PAD_MENU_4
    "○　　 : %s",

    // MSG_PAD_MENU_5
    "×　　 : %s",

    // MSG_PAD_MENU_6
    "□　　 : %s",

    // MSG_PAD_MENU_7
    "△　　 : %s",

    // MSG_PAD_MENU_8
    FONT_L_TRIGGER "　　 : %s",

    // MSG_PAD_MENU_9
    FONT_R_TRIGGER "　　 : %s",

    // MSG_PAD_MENU_10
    "START  : %s",

    // MSG_PAD_MENU_11
    "SELECT : %s",

    // MSG_PAD_MENU_12
    "戻る",

    // MSG_PAD_MENU_HELP_0
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":選択",

    // MSG_PAD_MENU_HELP_1
    "○:メインメニュー",

    //PADの設定 コンフィグ

    // MSG_PAD_MENU_CFG_0
    "↑",

    // MSG_PAD_MENU_CFG_1
    "↓",

    // MSG_PAD_MENU_CFG_2
    "←",

    // MSG_PAD_MENU_CFG_3
    "→",

    // MSG_PAD_MENU_CFG_4
    "A",

    // MSG_PAD_MENU_CFG_5
    "B",

    // MSG_PAD_MENU_CFG_6
    "L",

    // MSG_PAD_MENU_CFG_7
    "R",

    // MSG_PAD_MENU_CFG_8
    "スタート",

    // MSG_PAD_MENU_CFG_9
    "セレクト",

    // MSG_PAD_MENU_CFG_10
    "メニュー",

    // MSG_PAD_MENU_CFG_11
    "ターボ",

    // MSG_PAD_MENU_CFG_12
    "ステートロード",

    // MSG_PAD_MENU_CFG_13
    "ステートセーブ",

    // MSG_PAD_MENU_CFG_14
    "A連射",

    // MSG_PAD_MENU_CFG_15
    "B連射",

    // MSG_PAD_MENU_CFG_16
    "L連射",

    // MSG_PAD_MENU_CFG_17
    "R連射",

    // MSG_PAD_MENU_CFG_18
    "フレームレート表\示",

    // MSG_PAD_MENU_CFG_19
    "なし",

    // MSG_A_PAD_MENU_TITLE
    "アナログスティックの設定",

    // MSG_A_PAD_MENU_0
    "アナログ ↑ : %s",

    // MSG_A_PAD_MENU_1
    "アナログ ↓ : %s",

    // MSG_A_PAD_MENU_2
    "アナログ ← : %s",

    // MSG_A_PAD_MENU_3
    "アナログ → : %s",

    // MSG_A_PAD_MENU_4
    "アナログ入力を有効: %s",

    // MSG_A_PAD_MENU_5
    "アナログ入力の感度: %d",

    // MSG_A_PAD_MENU_6
    "戻る",

    // MSG_A_PAD_MENU_HELP_0
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":選択",

    // MSG_A_PAD_MENU_HELP_1
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":選択",

    // MSG_A_PAD_MENU_HELP_2
    "○:メインメニュー",

    // MSG_NON_LOAD_GAME
    "ゲームはロードされていません",

    // MSG_DAYW_0
    "(日)",

    // MSG_DAYW_1
    "(月)",

    // MSG_DAYW_2
    "(火)",

    // MSG_DAYW_3
    "(水)",

    // MSG_DAYW_4
    "(木)",

    // MSG_DAYW_5
    "(金)",

    // MSG_DAYW_6
    "(土)",

    // MSG_YES
    "はい",

    // MSG_NO
    "いいえ",

    // MSG_ON
    "オン",

    // MSG_OFF
    "オフ",

    // MSG_ENABLED
    "有効",

    // MSG_DISABLED
    "無効",

    // MSG_AUTO
    "自動",

    // MSG_MANUAL
    "手動",

    // MSG_EXITONLY
    "終了時のみ",

    // MSG_LOAD
    "ロード",

    // MSG_SAVE
    "セーブ",

    // MSG_SCN_SCALED_NONE
    "100% GU",

    // MSG_SCN_SCALED_X15_GU
    "150% GU",

    // MSG_SCN_SCALED_X15_SW
    "150% SW",

    // MSG_SCN_SCALED_USER
    "指定 GU",

    // MSG_LANG_JAPANESE
    "日本語",

    // MSG_LANG_ENGLISH
    "英語",

    // MSG_SS_DATE_FMT_0
    "%04d_%02d_%02d_%s%02d_%02d_%02d_%03d",

    // MSG_SS_DATE_FMT_1
    "%02d_%02d_%04d_%s%02d_%02d_%02d_%03d",

    // MSG_ERR_SET_DIR_0
    "エラー [%s] 指定されたディレクトリは無効です。",

    // MSG_ERR_SET_DIR_1
    "エラー [%s] 指定がありません。",

    // MSG_ERR_SET_DIR_2
    "エラーの発生した項目は、以下のディレクトリに設定します。\n%s",

    // png.c
    // MSG_ERR_SS_PNG_0
    "メモリの確保が出来ませんでした。",

    // MSG_ERR_SS_PNG_1
    "PNGイメージの作成が出来ませんでした。",

    // memory.c
    // MSG_LOADING_ROM
    "ロード中...",

    // MSG_SEARCHING_BACKUP_ID
    "BACKUP ID を検索中",

    // main.c
    // MSG_GBA_SLEEP_MODE
    "スリープ モード",

    // MSG_ERR_LOAD_DIR_INI
    "dir.iniがロード出来ません。すべてを以下のディレクトリに設定します。\n%s",

    // MSG_ERR_BIOS_NONE
    "BIOSファイルがロード出来ません。",

    // MSG_ERR_LOAD_GAMEPACK
    "ゲームファイルがロード出来ません。",

    // MSG_ERR_OPEN_GAMEPACK
    "ゲームファイルが読めません。",

    // MSG_ERR_START_CALLBACK_THEREAD
    "コールバックスレッドを開始出来ません。",

    // sound.c
    // MSG_ERR_RESERVE_AUDIO_CHANNEL
    "オーディオチャンネルを確保出来ません。",

    // MSG_ERR_START_SOUND_THEREAD
    "サウンドスレッドを開始出来ません。",

    // MSG_ERR_MALLOC
    "メモリの確保が出来ません。",

    // MSG_ERR_CONT
    "何かボタンを押してください。",

    // MSG_ERR_QUIT
    "何かボタンを押すと終了します。",

    // MSG_BLANK
    ""
  },

  {
    // MSG_BROWSER_HELP
    "○:Select  ×:Menu  □:" FONT_UP_DIRECTORY,

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
    "○:Load  " FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select slot",

    // MSG_MAIN_MENU_HELP_1
    "○:Save  " FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select slot",

    // MSG_MAIN_MENU_HELP_2
    "○:Sub menu  " FONT_R_TRIGGER ":Shortcut key",

    // MSG_MAIN_MENU_HELP_3
    "○:Save Image  " FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select image format",

    // MSG_MAIN_MENU_HELP_4
    "○:Sub menu",

    // MSG_MAIN_MENU_HELP_5
    "○:Sub menu",

    // MSG_MAIN_MENU_HELP_6
    "○:Sub menu",

    // MSG_MAIN_MENU_HELP_7
    "○:File browser  " FONT_L_TRIGGER ":Shortcut key",

    // MSG_MAIN_MENU_HELP_8
    "○:Reset game",

    // MSG_MAIN_MENU_HELP_9
    "○:Return to game",

    // MSG_MAIN_MENU_HELP_10
    "○:Sleep mode",

    // MSG_MAIN_MENU_HELP_11
    "○:Exit",

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
    "○:Main menu",

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
    "○:Execute  " FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select",

    // MSG_STATE_MENU_HELP_1
    "○:File browser",

    // MSG_STATE_MENU_HELP_2
    "○:Main menu",

    // MSG_PAD_MENU_TITLE
    "Gamepad config",

    // MSG_PAD_MENU_0
    "↑　　 : %s",

    // MSG_PAD_MENU_1
    "↓　　 : %s",

    // MSG_PAD_MENU_2
    "←　　 : %s",

    // MSG_PAD_MENU_3
    "→　　 : %s",

    // MSG_PAD_MENU_4
    "○　　 : %s",

    // MSG_PAD_MENU_5
    "×　　 : %s",

    // MSG_PAD_MENU_6
    "□　　 : %s",

    // MSG_PAD_MENU_7
    "△　　 : %s",

    // MSG_PAD_MENU_8
    FONT_L_TRIGGER "　　 : %s",

    // MSG_PAD_MENU_9
    FONT_R_TRIGGER "　　 : %s",

    // MSG_PAD_MENU_10
    "START  : %s",

    // MSG_PAD_MENU_11
    "SELECT : %s",

    // MSG_PAD_MENU_12
    "Back",

    // MSG_PAD_MENU_HELP_0
    FONT_CURSOR_LEFT FONT_CURSOR_RIGHT ":Select",

    // MSG_PAD_MENU_HELP_1
    "○:Main menu",

    //PADの設定 コンフィグ

    // MSG_PAD_MENU_CFG_0
    "↑",

    // MSG_PAD_MENU_CFG_1
    "↓",

    // MSG_PAD_MENU_CFG_2
    "←",

    // MSG_PAD_MENU_CFG_3
    "→",

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
    "Analog ↑ : %s",

    // MSG_A_PAD_MENU_1
    "Analog ↓ : %s",

    // MSG_A_PAD_MENU_2
    "Analog ← : %s",

    // MSG_A_PAD_MENU_3
    "Analog → : %s",

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
    "○:Main menu",

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

