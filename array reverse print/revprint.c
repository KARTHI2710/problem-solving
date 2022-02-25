#include<stdio.h>

int main()
{
	int arr[10], n, i;
	printf("enter n value\n");
    scanf("%d", &n);
    printf("enter array elements\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
   
    //Write your code here
    for(i=n-1;i>=0;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
