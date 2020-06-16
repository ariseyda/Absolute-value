#include<stdio.h>


// A computer program receives a real valued number from user and displays its absolute value.

int main(){
	
	float n;
	
	
	printf("Please enter an integer:");
	scanf("%f",&n);
	
	if(n==0 || n>0)
	  printf("%.2f",n);
    else
      printf("%.2f",(-n));

return 0;
	
}
