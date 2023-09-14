//anagaram
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100],str2[100];
    int i,c;
    int temp;
    printf("\nenter 1st string:");
    scanf("%s",str1);
    printf("\nenter 2nd string:");
    scanf("%s",str2);
    int l1=strlen(str1);
    int l2=strlen(str2);
  
    for(int i=0;i<l1;i++)               //sort string1
    {
        for(int j=i+1;j<l1;j++)
        {
            if(str1[i]>str1[j])
            {
                temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
        }
    }


     
    for(int i=0;i<l2;i++)           //sort string 2
    {
        for(int j=i+1;j<l2;j++)
        {
            if(str2[i]>str2[j])
            {
                temp=str2[i];
                str2[i]=str2[j];
                str2[j]=temp;
            }
        }
    }



    /*if(strcmp(str1,str2)==0)        //comparing 2 strings
    {
        printf("\nangram");
    
    }
        else
        {
            printf("\nnot angram"); 
        }
    }*/
                //OR



                
    for(int i=0;i<l1;i++)
    {
        for(int j=0;j<l2;j++)
        {
            if(str1[i]==str2[j])
            {
            c++;
            }
       }
    }
        if(c==l1&c==l2)
        {
            printf("\nangram");
        }
        else
        {
            printf("\nnot angram");
            
        }
    
}
