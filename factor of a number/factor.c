#include<stdio.h>

int main()
{
    int N,X;
    printf("enter n and x value \n");
    scanf("%d%d", &N, &X);

    //Write your code here
    if(N%X==0){
        printf("Yes, it is a factor\n");
    }
    else{
        printf("No, it is not a factor\n");
    }
    

    return 0;
}
