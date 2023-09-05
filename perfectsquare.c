//c program to count the number of perfect squares in a given array of elements
#include <stdio.h>
#include <math.h>
void main()
{
    int arr[]={4,2,3,5};
    int i,j,count=0,n;
    float v;
    for(i=0;i<4;i++)
    {
        v=sqrt(arr[i]);
        n=v;
        if(n==v)
        {
            count++;
        }
    }
    printf("\ncount of perfect squares is:%d",count);
}
