#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>

void *ThreadFunction(void *vargp)
{
	sleep(2);
	printf("Hello Threading \n ");
	
	return NULL; 
	
}

int main()
{
	pthread_t thread_id; 
	
	printf("Earlier when we didn't use threading  ");
	pthread_create(&thread_id,NULL,ThreadFunction,NULL);
	
	
	pthread_join(thread_id,NULL);
	
	printf("After when we have use threading ");
	eixt(0);
	
    

}
