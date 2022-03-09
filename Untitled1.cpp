#include<stdio.h>

int main()
{
	int num, n;

	scanf("%d%d", &num, &n);

	//Write your code here
	//if(((num&(1<<(n-1))==num){
	if((num&(1<<(n-1)))==num)
	{
	    printf("ON");
	} 
	else{
	    printf("OFF");
	}
	
	

	return 0;
}
