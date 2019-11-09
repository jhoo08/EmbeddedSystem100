Using the bit-band region for peripherals:

a) please reference the main_BitBand.C code

b) ![image](https://user-images.githubusercontent.com/56284484/68453941-dd2d7280-01ab-11ea-88a1-d4dd1b280106.png)

c) Turn on:
	0x800 0062: 0x600c  STR R4, [R1]
	
	Turn off:
	0x800 0082: 0x600d  STR R5, [R1]