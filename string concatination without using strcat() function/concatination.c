#include<stdio.h>

int main()
{
    char str1[10], str2[10], str3[20];
    printf("enter two strings\n");
    scanf("%s%s", str1, str2);
    
    int length = 0, i;
    
    for(i = 0; str1[i] != '\0'; i++)
        str3[length++] = str1[i];
        
    for(i = 0; str2[i] != '\0'; i++)
        str3[length++] = str2[i];
        
    str3[length] = '\0';
    
    printf("%s", str3);
    
    return 0;
}
    
