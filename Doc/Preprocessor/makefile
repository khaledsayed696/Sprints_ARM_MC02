CC      = arm-none-eabi-gcc
MACH    = cortex-m4
CFLAGS  = -c -mcpu=$(MACH) -mthumb -std=gnu11 -Wall 
#-Wall all Warnings
LDFLAGS = -T Stm32_ls.ld -nostdlib -Wl,-Map=final.map

App_main.o: App_main.c
	#$(CC) $(CFLAGS) main.c -o main.o 
	#or
	$(CC) $(CFLAGS) $^ -o $@ 
clean: 
	rm -rf *.o *.elf
	
final.elf: App_main.o Stm32f4_startup.o
	$(CC) $(LDFLAGS) $^ -o $@
	
load:
	openocd -f board/st_nucleo_f4.cfg
	
all: App_main.o Stm32f4_startup.o final.elf