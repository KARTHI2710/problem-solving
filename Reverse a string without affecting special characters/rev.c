#include<stdio.h>
int isalphabet(char ch){
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
        return 0;
    }
    else{
        return 1;
    }
}
void reverse(char str[])
{
    int i,len=0;
    for(i=0;str[i]!='\0';i++){
        len=len+1;
    }
    i=0;
    len=len-1;
    while(i<=len){
        char temp;
        if(isalphabet(str[i])){
            i++;
        }
        else if(isalphabet(str[len])){
            len--;
        }
        else{
            temp=str[i];
            str[i]=str[len];
            str[len]=temp;
        }
    }
    printf("%s",str);
}
int main()
{
	char str[50];
	printf("enter a string\n");
	scanf("%s",str);
	reverse(str);
	return 0;
}
