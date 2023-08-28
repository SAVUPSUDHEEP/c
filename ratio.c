//c program to print the rations of positive and negative numbers in and array
#include<stdio.h>
#include<math.h>
int main()
{   
    int i,j,n,arr[20];
    float p=0,N=0,z=0,x,y,w;
    scanf("%d",&n);
     for(i=0;i<n;i++)               //taking array elements
      {
        scanf("%d",&arr[i]);
       }
    for(i=0;i<n;i++)
     {
        if(arr[i]>0)
        {
            p++;
        
        }
        else if(arr[i]<0)
        {
            N++;
            
        }
        else{
            z++;
            
        }
      x=p/n;
      y=N/n;
      w=z/n;
   
    
    }
    printf("%.6f\n",x);
    printf("%.6f\n",y);
    printf("%.6f\n",w);
}
