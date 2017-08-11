#include<stdio.h>
main()
{
int n;
printf("the year is");
scanf("%d",&n);
if(n%4==0||n%100==0)
printf("the year is leap");
else
printf("the year is not leap year");
}
