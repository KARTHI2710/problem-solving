#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[10],str1[10];
	scanf("%s", str);
	int len,flag=0,i;
	len=strlen(str);
	//Write your code here
	printf("%d",len);
	len=len-1;
	for(i=0;str[i]!='\0';i++){
	    str1[i]==str[len];
	    len--;
	}
	str1[i]='\0';
		printf("%s",str1);
	for(i=0;str[i]!='\0';i++){
	    if(str[i]!=str1[i]){
	        flag=1;
	        break;
	    }
	}
	printf("%s",str);

	if(flag==1){
	    printf("Not Palindrome");
	}
	else{
	    printf("Palindrome");
	}
	return 0;
}
