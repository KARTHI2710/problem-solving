#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    printf("enter a number\n");
    scanf("%d", &n);

    //Write your code here
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum==n){
        printf("%d is a perfect number\n",n);
    }
    else{
        printf("%d is not a perfect number\n",n);
    }

    return 0;
}
