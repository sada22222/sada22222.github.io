ENTRY(_start)

MEMORY
{
  rom (wxa!ri) : ORIGIN = 0x80000000, LENGTH = 16K
  ram (wxa!ri) : ORIGIN = 0x800ff000, LENGTH = 16K
}

SECTIONS {
  
  . = 0x80000000;
  .text : {
    *(entry)
    *(.text*)
  } > rom
  etext = .;
  _etext = .;

  .rodata : {
    *(.rodata*)
  } > ram

  .htif : {
    PROVIDE(__htif_base = . );
    *(.htif)
  } > ram

  .data : {
    *(.data)
  } > ram
  edata = .;
  _data = .;

  .bss : {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } > ram


  _stack_top = ALIGN(0x1000);  
  . = _stack_top + 0x8000;  
  _stack_pointer = .;


  _heap_start = ALIGN(0x1000); 
  . = _heap_start + 0x8000;  

  end = .;
  _end = .;
}
