#include<stdio.h>
int main()
{
    int num,i,flag=0;
    printf("enter a number\n");

    scanf("%d", &num);

    //Write your code here
    if(num==1||num==0){
        printf("neither prime nor composite\n");
    }
    else{
        for(i=2;i<num;i++){
            if(num%i==0){
                flag=1;
                break;
            }
        }
        if(flag==1){
        printf("Not a Prime number\n");
        }
        else{
        printf("Prime number\n");
        }
    }
    

    return 0;
}
