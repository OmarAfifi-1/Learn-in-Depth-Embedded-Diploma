#Author: Omar Afifi

#Project Naming
PROJECT_NAME = FinalProject1

#Compiler Variables
CC = arm-none-eabi-
CFLAGS = -mcpu=cortex-m3 -g -gdwarf-2

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

$(RELEASE)/$(PROJECT_NAME).elf: $(OFILES)
	$(CC)ld.exe -T linkerscript.ld $(LIBS) $(OFILES) -o $@ -Map=Map_File.map
	cp $(RELEASE)/$(PROJECT_NAME).elf $(RELEASE)/$(PROJECT_NAME).axf

$(RELEASE)/%.o: $(SOURCE)/%.c
	$(CC)gcc.exe -c $(INCLUDE) $(CFLAGS) $< -o $@

clean:
	rm Release/*.elf Release/*.bin
	
clean_all:
	rm Release/*.o Release/*.elf Release/*.bin