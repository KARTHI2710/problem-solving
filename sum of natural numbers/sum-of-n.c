#include<stdio.h>

int main()
{
    int N,i,sum=0;
    printf("enter a N value\n");
    scanf("%d", &N);

    //Write your code here
    for(i=1;i<=N;i++){
        sum=sum+i;
    }
    printf("sum of N number is = %d",sum);

    return 0;
}
