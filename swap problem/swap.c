#include<stdio.h>

int main()
{
    int a, b,temp;
    printf("enter two numbers\n");
    scanf("%d%d", &a, &b);
    //Write your code here
    printf("before swapping the numbers a = %d b = %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping the numbers a = %d b = %d\n", a, b);
    return 0;
}
