#include<stdio.h>

int main()
{
	char str[10];
	printf("enter a string\n");
	scanf("%s", str);

	//Write your code here
	int i=0,count=0;
	while(str[i]!='\0'){
	    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
	        count=count+1;
	    }
	    i++;
	}
	printf("%d",count);

	return 0;
}
