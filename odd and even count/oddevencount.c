#include<stdio.h>

int main()
{
    int arr[10], size, i,ec=0,oc=0;
    printf("enter no of number\n");
    scanf("%d", &size);
    printf("enter numbers\n");
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    
    //Write your code here
    for(i=0;i<size;i++){
        if(arr[i]%2==0){
            ec++;
        }
        else{
            oc++;
        }
    }
    printf("Even Number Count = %d\n",ec);
    printf("Odd Number Count = %d\n",oc);
    return 0;
}
