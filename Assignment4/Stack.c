#include "stack.h"
#define Size 4

int array[size];
int* arraypoint;
//initialize the array address
void init(void){
	arraypoint = &array[0];	
}
//push function
int push(int val){
	if(arraypoint == &array[Size]
	{
		return -1;
	}
	else
	{
		*arraypointer = val;
		arraypoint++;
	}
	return 0;
}
//pop function
int pop(int *val){
	if(arraypoint == &array[0])
	{
		return -1;
	}
	else
	{
		arraypoint--;
		*val = *arraypoint;
		*arraypoint = 0;
	}
	return 0;
}



	