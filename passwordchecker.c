
#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
   char str[100];
   int count=0,c=0,n,val[100];
   printf("\nenter password:");
   scanf("%s",str);
   int l=strlen(str);                  //getting string length
   if(l>=8 &(str[0]>=65 &str[0]<=90))    //condition 1 and 2 :minimum length of 8 and first letter should be CAPITAL
   {  
           for(int i=1;i<l;i++)
           {
              if(str[i]>=48 && str[i]<=57)      //condition 3: number of digits in the password be alteast 1
               {
                  count++;
                  
               }
               
               if(str[i]=='@' || str[i]=='$' || str[i]=='%' || str[i]=='&')    //condition 4: number of special characters in the password be alteast 1
               {
                   c++;
                  
               }
                
           }

     
          // printf("\nc:%d",c);
           //printf("\ncount:%d",count);
     
           if(count>=1 && c>=1)     condition  3 & 4 checking
           {
               printf("\nvalid password");
           }
           else
           {
               printf("\nINVALID");
           }
           
        
       }
   else
   {
       printf("\nplease enter a valid password ");
   }
}
