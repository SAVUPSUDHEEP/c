// cprogram to convert 12 hour time to 24 hour time
#include<stdio.h>
#include<string.h>
void main()
{
    int h,m,s;
    char a[3];
    printf("\nhour:");
    scanf("%d",&h);
    printf("\nminute:");
    scanf("%d",&m);
    printf("\nsecond:");
    scanf("%d",&s);
    printf("\nam or pm:");
    scanf("%s",a);

if(h<=12&&m<=59&&s<=59)
{
      if(strcmp(a,"PM")==0||strcmp(a,"pm")==0&&h!=12&&h!=0)
      {
          h=h+12;
      }
      if(strcmp(a,"AM")==0||strcmp(a,"am")==0&&h==12)
      {
          h=0;
      }
}
printf("%02d:%02d:%02d",h,m,s);
}
