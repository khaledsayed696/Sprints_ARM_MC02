ENTRY(Reset_Handler)

MEMORY
{
	FLASH(rx): ORIGIN = 0x08000000 ,LENGTH = 64k
	SRAM(rwx): ORIGIN = 0x20000000 , LENGTH = 20k
}

SECTIONS
{
	.text :
	{
		*(.isr_vector)
		
		*(.text)
		
		*(.rodata)
		. = ALIGN(4);

		_etext = . ;
	}>FLASH 
	
	PROVIDE (_intconstarr_base_address = 0x1);
	
	.sprints (0x1000) : {
		KEEP (*(.intconstarr))
	}>FLASH
	.data :
	{
		_sdata = . ;
		*(.data)
		_edata = . ;
	}>SRAM AT> FLASH
	
	.bss :
	{
		_sbss = . ;
		*(.bss)
		_ebss = . ;
	}>SRAM
}