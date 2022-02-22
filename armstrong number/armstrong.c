#include<stdio.h>
#include<math.h>
int main()
{
    int num,num1,i,sum=0;
    printf("enter a number\n");
    scanf("%d", &num);
    num1=num;
    //Write your code here
    while(num>0){
        i=num%10;
        num=num/10;
        sum=sum+pow(i,3);
    }
    if(sum==num1){
        printf("%d is a Armstrong number\n",num1);
    }
    else{
        printf("%d is not a Not Armstrong number\n",num1);
    }
    

    return 0;
}
