#include<stdio.h>
int main()
{
int n,x,a[10],i,flag=0;
printf("enter the no of elements inthe array\n");
scanf("%d",&n);
printf("enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the elemnet to be serarched\n");
scanf("%d",&x);
for(i=0;i<n;i++)
{
if(x==a[i])
{
flag=1;
printf("element present at location %d",i+1);
break;
}
}
if(flag==0);
printf("element not found");
return 0;
}
