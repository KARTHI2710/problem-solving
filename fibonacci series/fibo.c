#include<stdio.h>
int main()
{
    int n,fibo1=0,fibo2=1,fibo,i;
    printf("enter n value\n");
    scanf("%d", &n);

    //Write your code here
        for(i=1;i<=n;i++){
            if(i==1){
                printf("%d ",fibo1);
            }
            else if(i==2){
                printf("%d ",fibo2);
            }    
            else{
                fibo=fibo1+fibo2;
                printf("%d ",fibo);
                fibo1=fibo2;
                fibo2=fibo;
            }
        }
    

    return 0;
}
