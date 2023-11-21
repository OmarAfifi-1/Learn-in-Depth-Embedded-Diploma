#Author: Omar Afifi

#Project Naming
PROJECT_NAME = Collision_Avoidance

#Compiler Variables
CC =
CFLAGS =

#Files Directory
LIBS = 
INCLUDE = -I Inc.
SOURCE = Src
RELEASE = Release

#Files Variables (Dont Change Just Change The Directory Above)
CFILES = $(wildcard $(SOURCE)/*.c)
OFILES = $(addprefix $(RELEASE)/,$(notdir $(CFILES:.c=.o)))

#######################################################################################
$(RELEASE)/$(PROJECT_NAME).exe: $(OFILES)
	$(CC)gcc.exe $(INCLUDE) $(CFLAGS) $^ -o $@

$(RELEASE)/%.o: $(SOURCE)/%.c
	$(CC)gcc.exe -c $(INCLUDE) $(CFLAGS) $< -o $@

clean:
	rm Release/*.elf Release/*.bin
	
clean_all:
	rm Release/*.o Release/*.elf Release/*.bin