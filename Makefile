.PHONY: clean
C_FILES = main.c led/led.c
OBJ_FILES = $(C_FILES:%.c=%.o)
ASM_FILES = $(wildcard *.s)
LINKER_SCRIPT = $(wildcard *.ld)
OBJ_FILES += $(ASM_FILES:%.s=%.o)
INCLUDE = -I. -Iled/

CC = arm-none-eabi-gcc
MCU = -mcpu=cortex-m4 -mthumb
LINKER = -T "$(LINKER_SCRIPT)" $(MCU)
MAPFLAGS = -Wl,-Map=main.map
CC_FLAGS = -nostartfiles

%.o : %.c
	$(CC) $(MCU) $(INCLUDE) -c $^ -o $@
%.o : %.s
	$(CC) $(MCU) -c $^ -o $@
main : $(OBJ_FILES)
	$(CC) $(LINKER) $(MAPFLAGS) $(CC_FLAGS) $^ -o main.elf
all : main

clean :
	del *.o *elf *txt
	

