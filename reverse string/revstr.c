#include<stdio.h>

int main()
{
	char str[10],str1[10];
	printf("enter a string\n");
	scanf("%s", str);
    int count=0,i;
	//Write your code here
	for(i=0;str[i]!='\0';i++){
	    count=count+1;
	}
	count=count-1;
	for(i=0;str[i]!='\0';i++){
	    str1[i]=str[count];
	    count--;
	}
	str1[i]='\0';
	printf("%s",str1);

	return 0;
}
