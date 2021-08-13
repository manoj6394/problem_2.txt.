#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int sum=1;
for(i=0;i<n;i++)
{
sum=sum*a[i];
}
printf(" multiple is is=%d",sum);
}
