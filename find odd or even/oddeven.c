#include<stdio.h>

int main()
{
    int num;
    printf("enter a number\n");
    scanf("%d", &num);

    //Write your code here
    /*if(num%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }*/
    num%2==0?printf("%d is Even",num):printf("%d is Odd",num);
    

    return 0;
}
