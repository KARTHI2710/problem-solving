#include<stdio.h>

int main()
{
    int num,i;
    printf("enter a number\n");
    scanf("%d", &num);

    //Write your code here
    while(num>0){
        i=num%10;
        num=num/10;
        printf("%d ",i);
    }
    

    return 0;
}
