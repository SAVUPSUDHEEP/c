//program to return the no of elements containing the digit 9
#include<stdio.h>
void main()
{
    int arr[]={6,49,8,3};
    int i,j,count=0,r;
    for(i=0;i<4;i++)
    {
        while(arr[i]!=0)
        {
            r=arr[i]%10;
            if(r==9)
            {
                count++;
                break;
            }
        
            arr[i]=arr[i]/10;
        }
    }
    printf("no of elelemts containig 9 is:%d",count);
}
