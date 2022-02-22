#include<stdio.h>

int main()
{
    int arr[10], n, i,temp=0;
    printf("enter no of number\n");
    scanf("%d", &n);
    printf("enter numbers\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    //Write your code here
    for(i=0;i<n;i++){
        if(arr[i]>temp){
            temp=arr[i];
        }
    }
    printf("Max = %d",temp);
  
    return 0;
}
