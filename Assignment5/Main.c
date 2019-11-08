#define STACKSIZE 4

int StackStorage[StackSIZE];
int stack[4] = {0 , 1, 2, 3};
int top = -1;

int emptystack()
{
	if(top == -1)
		return 1;
	else
		return 0;
}

int fullstack() {
	if(top == STACKSIZE)
		return 1;
	else
		return 0;
}

int check() {
	return stack[top];
}

int pop() {
	int popdata;
	
	if(!emptystack())
	{
		data = stack[top];
		top = top - 1;
		return data;
	} 
	
int push(int data){
	if(!fullstack()) {
		top = top + 1;
		stack[top] = data;
	}
}

	