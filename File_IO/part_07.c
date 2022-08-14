#include<stdio.h>
#include<stdlib.h>
int main()

{
	
	int* ptr; 
	int num, sum=0;
	
	num=8;
	printf("we have %d elements to allocate memory to \n ",num);
	
	// ptr = (cast-type*) malloc(byte-size)
	 ptr=(int*)malloc(num*sizeof(int ))
	 
	  if(ptr==NULL)
	  {
        printf("Memory Allocation failed ");
        exit(0);
        
	  }else
	  {
	  	printf("Memory has been successful ");
	  }
	  
	  for(int i=0; i<num; ++i
	  {
	  	ptr[i]= i+1;
	  	
	  }
	  
	  printf("Inserted 8 elements in the block are as follow \n ");
	  
	  for(int i=0; i<num; ++i
	  {
	   printf("%d",ptr[i]);	
	  }
	  
	  
	  
	  
	  
}
