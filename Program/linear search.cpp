#include<stdio.h>
#include<conio.h>
int main()
{
int a[20],i,item,n;
printf("How many elements?");
scanf("%d",&n);
printf("Enter array elements:n");
for(i=0;i<n;++i)
{
scanf("%d",&a[i]);
}
printf("nEnter element to search:");
scanf("%d",&item);
for(i=0;i<n;i++)
{
if(a[i]==item)
break;
}
if(i<n)
printf("Element found at location %d",i+1);
else
printf("Element not found");
return 0;
}
