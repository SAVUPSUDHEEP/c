// program to rotate array elements after every kth element
/*a=[]={1,2,3,4,5,6,7,8}
k=3
op:a[]={3,2,1,6,5,4,,8,7}

*/
#include<stdio.h>
void main()
{
    int s,arr[20],i,j,l,temp,k,p,s1;
    printf("enter the size(<20)::");
	scanf("%d",&s);
	
	printf("enter the elements::");
	 for(i=0;i<s;i++)
   	  {
       		 printf("\na[%d]::",i);
       		 scanf("%d",&arr[i]);
      }
    printf("enter the k valuse::");
	scanf("%d",&k);
        l=k/2;
     for(p=0;p<s;)   
     {
              for(i=p,j=p+k-1;i<p+l;i++,j--)
              {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
              }
         if(p+k<(s))     
         p=p+k;
         else
          break;
       }
       printf("\n%d\n%d",p,a[p]);
         if((s-p==2))
         {
                temp=arr[p+1];
                arr[p+1]=arr[p];
                arr[p]=temp;
         }      
        printf("the reversed elements::");
        for(i=0;i<s;i++)
   	     {
       		 printf("\na[%d]::",i);
       		 printf("%d",arr[i]);
        }
}
