#include <stdio.h>

int main()
{
    int num;
    printf("enter a numbers\n");
    scanf("%d", &num);

    //Write your code here
    if(num==0){
        printf("Neither positive nor negative\n");
    }
    else if(num<0){
        printf("Negative\n");
    }
    else{
        printf("Positive\n");
    }
    

    return 0;
}
