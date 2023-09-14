//find the hcf and lcm of given two numbers
#include<stdio.h>
 int gcd(int p,int q)
{
    if(p==0)
    {
        return q;
    }
    if(q==0)
    {
        return p;
    }
    if(p>q)
    {
        return gcd(p-q,q);
    }
    if(p<q)
    {
        return gcd(p,q-p);
    }
}
void main()
{
    int p,q;
    scanf("%d",&p); //input first number
    scanf("%d",&q);//input second number
    int h=gcd(p,q);
    printf("gcd of %d and %d is:%d",p,q,h);         //hcf
    printf("\nlcm of %d and %d:%d",p,q,(p*q)/h);    //lcm
}
