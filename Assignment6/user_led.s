/*******************************************************************************
File name       : user_led.s
Description     : Assembly language function for controlling the user LED
*******************************************************************************/   

    EXTERN delay  // delay() is defined outside this file.

    PUBLIC control_user_led         // Exports symbols to other modules

// Code is split into logical sections using the SECTION directive.
// Source: http://ftp.iar.se/WWWfiles/arm/webic/doc/EWARM_AssemblerReference.ENU.pdf
// SECTION  section  :type [:flag] [(align)]
//      The data section is used for declaring initialized data or constants. This data does not change at runtime
//      The bss section is used for declaring variables. The syntax for declaring bss section is -
//      The text section is used for keeping the actual code.

// CODE: Interprets subsequent instructions as Arm or Thumb instructions, 
// depending on the setting of related assembler options.

// NOREORDER (the default mode) starts a new fragment in the section
// with the given name, or a new section if no such section exists.
// REORDER starts a new section with the given name.

// NOROOT means that the section fragment is discarded by the linker if
// no symbols in this section fragment are referred to. Normally, all
// section fragments except startup code and interrupt vectors should
// set this flag.

// The (2) is for the (align)
// The power of two to which the address should be aligned.
// The permitted range is 0 to 8. 
// Code aligned at 4 Bytes.

    SECTION .text:CODE:REORDER:NOROOT(2)
    
    THUMB               // Indicates THUMB code is used
                        // Subsequent instructions are assembled as THUMB instructions
    
/*******************************************************************************
Function Name   : control_user_led
Description     : - Uses Peripheral registers at base 0x4000.0000
                    to set GPIOA Output Data Register.
                  - Calls another assembly function delay to insert
                    delay loop

C Prototype     : void control_user_led(uint8_t state, uint32_t duration)
                : Where state indicates if LED should be on or off.
Parameters      : R0: uint8_t state
                : R1: uint32_t duration
Return value    : None
*******************************************************************************/  

control_user_led
  	
        //RCC_AHB1ENR |= 0x1;
	LDR R2,  =0x40023830 //loads this RCC address with the offset
	MOV R3, #0x1    //Sets the starting bit
	STR R3, [R2]    //Store RCC to R3
	
	//GPIOA_MODER |= 0x400
	LDR R2,	=0x40020000 //loads R2 with the RCC base address with offset
	MOV R3, #0x400    // moves R3 to the Set bit for GPIOA
	STR R3, [R2]      //stores R2 into R3
	
	CMP R0, #0        //compares the value of R0, sees if this is equal to zero
	BEQ OFF            //breaks out of the compare statement

ON:
	LDR R2,	=0x40020014     //Enables R2 with the base address 
	MOV R3, #0x20           //Moves the value of R3 to the following
	STR R3, [R2]            //Stores R2 values to R3
        MOV R0, R1              //moves value from R1 to R0
	PUSH {LR}       // Save the input arguments as needed and LR
        BL delay        //calls the delay function
        POP {LR}        // Restore Risgters and LR
        BX LR           // Return
	

OFF:
	LDR R2,	=0x40020014     //Enables R2 with the base address
	MOV R3, #0x00          //Moves the value of R3 to the following
	STR R3, [R2]           //Stores R2 into R3
        MOV R0, R1             //moves value from R1 to R0
        PUSH {LR}       // Save the input arguments as needed and LR
        BL delay        //calls the delay function
        POP {LR}        // Restore Risgters and LR
        BX LR           // Return
   END
