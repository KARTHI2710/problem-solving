#include<stdio.h>

int main()
{
    char str1[10], str2[10];
    scanf("%s%s", str1, str2);

    //Write your code here
    int i,flag=0;
    for(i=0;str1[i]!='\0';i++){
        if(str1[i]!=str2[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("NO");
    }
    else{
        printf("Yes");
    }
    
    return 0;
}
