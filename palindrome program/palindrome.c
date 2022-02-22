#include<stdio.h>

int main()
{
    int num,num1,i,sum=0;
    printf("enter a number\n");
    scanf("%d", &num);
    num1=num;
    //Write your code here
    while(num>0){
        i=num%10;
        num=num/10;
        sum=sum*10+i;
    }
    if(sum==num1){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    

    return 0;
}
