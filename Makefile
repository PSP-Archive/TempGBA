# -x assembler-with-cpp
# gpSP makefile
# Gilead Kutnick - Exophase


# Global definitions

PSPSDK = ${shell psp-config --pspsdk-path}
PREFIX = ${shell psp-config --psp-prefix}

BUILD_PRX = 1

PSP_FW_VERSION = 371
PSP_LARGE_MEMORY = 1

PSP_EBOOT_ICON = res/ICON0.png
PSP_EBOOT_TITLE = TempGBA

EXTRA_TARGETS = EBOOT.PBP

COMMON_FILE = \
 common.h \
 cpu.h memory.h video.h input.h sound.h main.h message.h mh_print.h gui.h zip.h png.h \
 ku_bridge.h exception.h

MAINOBJS = \
 cpu.o memory.o video.o input.o sound.o main.o message.o mh_print.o gui.o zip.o png.o \
 mips_stub.o \
 ku_bridge.o exception.o

OBJZ = adler32.o crc32.o deflate.o infback.o inffast.o inflate.o inftrees.o trees.o zutil.o
OBJG = compress.o uncompr.o gzclose.o gzlib.o gzread.o gzwrite.o

OBJS = $(MAINOBJS) $(OBJZ) $(OBJG)

TARGET = TempGBA

VPATH = src src/zlib

CFLAGS = \
 -O2 -G0 \
 -march=allegrex -mfp32 -mgp32 -mlong32 -mabi=eabi \
 -fomit-frame-pointer -fstrict-aliasing \
 -falign-functions=32 -falign-loops -falign-labels -falign-jumps \
 -Wall -Wundef -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Wmissing-prototypes -Wsign-compare -Werror \
 -DZLIB_CONST

ASFLAGS = ${CFLAGS}

INCDIR = SDK/include src src/zlib src/libpower
LIBDIR = SDK/lib

LIBS = src/libpower/libpsppower.a -lpspgu -lpsprtc -lpspaudio -lpspkubridge

include ${PSPSDK}/lib/build.mak

main.o         : ${COMMON_FILE} main.c
cpu.o          : ${COMMON_FILE} cpu.c mips_emit.h
video.o        : ${COMMON_FILE} video.c volume_icon.c
memory.o       : ${COMMON_FILE} memory.c
sound.o        : ${COMMON_FILE} sound.c
input.o        : ${COMMON_FILE} input.c
gui.o          : ${COMMON_FILE} gui.c
zip.o          : ${COMMON_FILE} zip.c
png.o          : ${COMMON_FILE} png.c
mh_print.o     : ${COMMON_FILE} mh_print.c shinonomefont.c
message.o      : ${COMMON_FILE} message.c
exception.o    : ${COMMON_FILE} exception.c
mips_stub.o    : mips_stub.S
ku_bridge.o    : ku_bridge.S

