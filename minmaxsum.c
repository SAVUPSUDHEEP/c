/*c program to pprint the minimym sum and maximum sum in an array
 eg: arr=[1,3,5,6,7]
min sum=1+3+5+6
max sum=7+6+5+3*/

#include<stdio.h>
#include<math.h>
void main()
{
    int arr[5],i,j,temp,smin=0,smax=0;
    for(i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]);
       
    }
    for(i=0;i<=4;i++)
    {
        printf("\n%d\n",arr[i]);
    }
   
    for(i=0;i<=4;i++)
    {
        for(j=i+1;j<=4;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
      for(i=0;i<=4;i++)
       {
        printf("\n%d\n",arr[i]);
       }
         for(i=0;i<4;i++)
        {
         smin=smin+arr[i];
        }
        for(i=4;i>0;i--)
        {
         smax=smax+arr[i];
        }
        printf("\n%d  %d",smin,smax);
   
}
