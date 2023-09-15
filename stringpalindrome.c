#include <stdio.h>
#include<string.h>
void main()
{
    char str[100],rev[100],str2[100];
    scanf("%s",str);
    int i;
    int l1=strlen(str);
    //printf("%d",l1);
    strcpy(str2,str);
    for(int i=0;i<=l1/2;i++,l1--)       //reversing
    {
        
        char temp=str[i];
        str[i]=str[l1-1];
        str[l1-1]=temp;
        
    }
    strcpy(rev,str) ;
    printf("reverse of the string is:%s",rev);
     if(strcmp(str2,rev)==0)                    //palindrome checking
    {
        printf("\nstring is palindrome");
    }
    else
    {
        printf("\n not palindrome");
    }
}
