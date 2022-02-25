#include<stdio.h>

int main()
{
    int n, i, j,sum=0;
    printf("enter n value\n");
    scanf("%d", &n);

    int arr[n][n];
    printf("enter array elements\n");

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
            sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
  
    return 0;
}
