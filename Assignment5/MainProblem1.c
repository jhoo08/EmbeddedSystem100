void swap(int **x, int **y)
{
	int tempvalue = **x;
	**x = **y;
	**y = tempvalue;

	int *temp = *x;
	*x = *y;
	*y = temp;

	}
	
	void main(void)
	{
	int x = 10;
	int y = 20;
	
	int *deltaX = &x;
	int *deltaY = &y;
	
	swap(&deltaX, &deltaY);
	
	}