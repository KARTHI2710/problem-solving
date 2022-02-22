#include<stdio.h>

int main()
{
    int num;
    printf("enter a number\n");
    scanf("%d", &num);

    //Write your code here
    if(num>0){
        printf("The absolute value is  = %d",num);
    }
    else{
       // printf("%d",num-(2*num));
       printf("The absolute value is  = %d",-num);
    }
    

    return 0;
}
