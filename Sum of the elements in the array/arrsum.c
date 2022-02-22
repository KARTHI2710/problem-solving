#include<stdio.h>

int main()
{
    int arr[10], n, i,sum=0;
    printf("enter no of number\n");
    scanf("%d", &n);
    printf("enter numbers\n");
    for(i = 0; i < n ; i++){
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
    }

    //Write your code here
    printf("sum of the array is = %d",sum);
    return 0;
}
