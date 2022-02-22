#include<stdio.h>

int main()
{
    int num,i,n=0;
    scanf("%d", &num);

    //Write your code here
    while(num>0){
        i=num%10;
        num=num/10;
        n=n*10+i;
    }
    printf("%d",n);
    
    
    return 0;
}
