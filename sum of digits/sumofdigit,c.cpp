#include<stdio.h>

int main()
{
    int num,i,sum=0;
    printf("enter a number\n");
    scanf("%d", &num);

    //Write your code here
    while(num>0){
        i=num%10;
        num=num/10;
        sum=sum+i;
    }
    printf("sum of digits is = %d",sum);

    return 0;
}
