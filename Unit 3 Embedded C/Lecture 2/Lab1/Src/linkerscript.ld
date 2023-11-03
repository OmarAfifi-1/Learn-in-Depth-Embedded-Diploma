ENTRY(reset)

MEMORY
{
	memory (rwx) : ORIGIN = 0x00000000 , LENGTH = 64M
}

SECTIONS
{
	. = 0x10000;
	.startup . :
	{
		startup.o(.text)
	}> memory
	.text :
	{
		*(.text)
	}> memory
	.data :
	{
		*(.data)
	}> memory
	.bss :
	{
		*(.bss)
	}> memory
	. = . + 0x1000;
	stack_top = .;
}