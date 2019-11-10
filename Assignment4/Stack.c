#include "stack.h"
#define Size 4

int array[size];
int* arraypoint;

void init(void){
	arraypoint = &array[0];	
}

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



	