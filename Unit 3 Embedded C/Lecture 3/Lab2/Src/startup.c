//C Startup for Cortex-M3
//Author: Omar Afifi

void Reset_Handler();
void Default_Handler()
{
	Reset_Handler();
}

extern int main(void);

void NMI_Handler() __attribute__ ((weak,alias("Default_Handler")));
void Hard_Fault_Handler() __attribute__ ((weak,alias("Default_Handler")));
void Mem_Manage_Handler() __attribute__ ((weak,alias("Default_Handler")));
void Bus_Fault_Handler() __attribute__ ((weak,alias("Default_Handler")));
void Usage_Fault_Handler() __attribute__ ((weak,alias("Default_Handler")));

extern unsigned int Stack_Top;
unsigned int Vec_Table[] __attribute__ ((section(".vectors")))=
{
	(unsigned int) &Stack_Top,
	(unsigned int) &Reset_Handler,
	(unsigned int) &NMI_Handler,
	(unsigned int) &Hard_Fault_Handler,
	(unsigned int) &Mem_Manage_Handler,
	(unsigned int) &Bus_Fault_Handler,
	(unsigned int) &Usage_Fault_Handler
};

extern unsigned int _E_text ;
extern unsigned int _S_DATA ;
extern unsigned int _E_DATA ;
extern unsigned int _S_bss ;
extern unsigned int _E_bss ;

void Reset_Handler ()
{
    unsigned int DATA_size =  (unsigned char*)&_E_DATA - (unsigned char*)&_S_DATA ;
    unsigned char* P_src = (unsigned char*)&_E_text ;
    unsigned char* P_dst = (unsigned char*)&_S_DATA ;
    for(int i=0; i<DATA_size; i++)
    {
    	*((unsigned char*)P_dst++) = *((unsigned char*)P_src++);
    }
    unsigned int bss_size = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss ;
    P_dst = (unsigned char*)&_S_bss;
    for(int i=0; i< bss_size; i++)
    {
    	*((unsigned char*)P_dst++) = (unsigned char)0 ;
    }
	main();
}