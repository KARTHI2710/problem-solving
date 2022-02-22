#include<stdio.h>

int main()
{
    int N,sum;
    printf("enter N value\n");
    scanf("%d", &N);

    //Write your code here
    sum=N*(N+1)/2;
    printf("sum of n natural number is = %d",sum);

    return 0;
}
