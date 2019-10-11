Why use two’s complement to represent negative numbers?

The reason why we want to use two’s complement to represent negative numbers that we can perform the signed integer arithmetic.

Keeping this in binary, we should be able to create a proof to show that a positive and negative integer (say 2 for example) are added together. 
The result would be 0 between -2 and 2. 

The answer is an overflow so we can ignore the 1 on the left hand most side which still gives us the value of zero below.
0010 (2) + 1110(-2) = 10000

This can only happen if we apply 2’s complement to the -2 binary number. 

If we did ignore using 2’s complement process and added the two integers together (2 + -2), then the sum would not equal zero.
