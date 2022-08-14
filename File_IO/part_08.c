#include<stdio.h>
#include<time.h>

void func_name()
{
	
	printf("function start \n ");
	printf("press any key to stop function ");
	for(;;)
	{
		if(getchar())
		break;
		
	}
  printf("function end \n ");
}


int main()
{
	clock_t t;
	t=clock();
	func_name();
	t=clock()_t;
	
	double time_taken_by_func=((double )t)/CLOCK_PER_SEC;


  printf("The processing time of function is : %f ", time_taken_by_func);
  
  
	
}
