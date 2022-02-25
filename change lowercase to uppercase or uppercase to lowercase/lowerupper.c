#include<stdio.h>

int main()
{
	char str[10];
	scanf("%s", str);
    int i;
	//Write your code here
	for(i=0;str[i]!='\0';i++){
	    if((int)str[i]>=97){
	        str[i]=(int)str[i]-32;
	    }
	    else{
	        str[i]=(int)str[i]+32;
	    }
	}
	printf("%s",str);
	return 0;
}
