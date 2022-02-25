#include<stdio.h>
int main()
{
	char str[10];
	int count=0,i=0;
	printf("enter a string\n");
	scanf("%s", str);

	//Write your code here
	while(str[i]!='\0'){
	    count=count+1;
	    i++;
	}
	printf("%d",count);
	return 0;
}
