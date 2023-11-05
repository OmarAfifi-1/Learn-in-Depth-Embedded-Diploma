#Author: Omar Afifi

#Project Naming
PROJECT_NAME = Lab1_With_Make

#Compiler Variables
CC = arm-none-eabi-
CFLAGS = -mcpu=arm926ej-s -g

#Files Directory
LIBS = 
INCLUDE = -I Inc.
SOURCE = Src
RELEASE = Release

#Files Variables (Dont Change Just Change The Directory Above)
CFILES = $(wildcard $(SOURCE)/*.c)
OFILES = $(addprefix $(RELEASE)/,$(notdir $(CFILES:.c=.o)))

#######################################################################################

$(RELEASE)/$(PROJECT_NAME).bin: $(RELEASE)/$(PROJECT_NAME).elf
	$(CC)objcopy.exe -O binary $< $@

$(RELEASE)/$(PROJECT_NAME).elf: $(OFILES) $(RELEASE)/startup.o
	$(CC)ld.exe -T linkerscript.ld $(LIBS) $^ -o $@

$(RELEASE)/%.o: $(SOURCE)/%.c
	$(CC)gcc.exe -c $(INCLUDE) $(CFLAGS) $< -o $@

$(RELEASE)/startup.o: $(SOURCE)/startup.s
	$(CC)as.exe -c $(CFLAGS) $< -o $@

clean:
	rm Release/*.elf Release/*.bin
	
clean_all:
	rm Release/*.o Release/*.elf Release/*.bin