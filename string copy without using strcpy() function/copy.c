#include<stdio.h>

int main()
{
	char str[10], copy_str[10];
	printf("enter a stirng\n");
	scanf("%s", str);
    int i;
	//Write your code here
	for(i=0;str[i]!='\0';i++){
	    copy_str[i]=str[i];
	}
	
	printf("Copied string = %s",copy_str);
	return 0;
}
