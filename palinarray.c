//PROGRAM TO CHECK WHETHER A PROGRAM IS PALIN- ARRAY OR NOT 
#include<stdio.h>

 int reverse(int a)
 {
    int rev=0,r,i;
    while(a>0)
    {
      r=a%10;
      rev=(rev*10)+r;
      a=a/10; 
    }
   return rev;
 
}
void main()
{ 
     int rev,r,n,arr[20],i,j,p,flag;
     printf("\nenter the number:");
     scanf("%d",&n);
     printf("\nenter the elements of array:");
     for(i=0;i<n;i++)
     { 
        scanf("%d",&arr[i]);
     }

     for(i=0;i<n;i++)
     {
       int temp=arr[i];
       int p=reverse(arr[i]);
       if(p==temp)
       {
        flag++;
       }
     }
      if(n==flag)
      {
        printf("palin array:");
      }
      else
      {
        printf("\nnot a palinarray");
      }
  }
