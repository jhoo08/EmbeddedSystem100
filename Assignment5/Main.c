#define STACKSIZE 4

int StackStorage[Stack_SIZE];

int* putPointer;
int* getPointer;

void stack_init(void)
{
	putPointer = 0;
	getPointer = 0;
	for(int i = 0; i <STACKSIZE; i++)
	{
		StackStorage[i] = '\0';
	}
}

int stack_put(int data)
{
	if( getPointer == &StackStorage[0] && putPointer == &StackStorage[Stack_SIZE-1])
	{
		return -1'
	}
	
	if(getPointer == 0)
	{
		getPointer = &StackStorage[0];
	}
	
	if(putPointer == 0 || putPointer == &StackStorage[Stack_SIZE -1])
	{
		putPointer = &StackStorage[0];
	}
	else
	{
		putPointer++;
	}
	
	*putPointer = data;
	return =0;
}

	