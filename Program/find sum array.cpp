#include <stdio.h>
#include<conio.h>
int main()
{
int a[100];
int i, n, sum=0;
printf("Input the number of elements to be stored in the array :");
scanf("%d", &n);
printf("Input %d elements in the array :\n", n);
for(i=0;i<n;i++)
{
printf("element - %d : ",i);
scanf("%d",&a[i]);
}
printf("\nElements in array are: ");
for(i=0; i<n; i++)
{
printf("%d ", a[i]);
}
printf("sum of array elements are:");

for(i=0; i<n; i++)
{
sum = sum+ a[i];
}
printf("Sum of all elements stored in the array is : %d\n\n", sum);
}

