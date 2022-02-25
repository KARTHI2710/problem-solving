#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[10], n, i, key;
    printf("enter n value\n");
    scanf("%d", &n);
    printf("enter array elements\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("enter search key\n");
    scanf("%d", &key);

    //Write your code here
    for(i=0;i<n;i++){
        if(key==arr[i]){
            printf("Key found\n");
            exit(0);
        }
    }
    printf("Key not found\n");

    return 0;
}
