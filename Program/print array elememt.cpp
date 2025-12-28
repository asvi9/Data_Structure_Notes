#include <stdio.h>
#include<conio.h>
int main()
{
int arr[10], i;

printf("Enter array elements :\n");
for(i=0; i<10; i++)
{
printf("element - %d : ",i);
scanf("%d", &arr[i]);
}
printf("\nElements in array are: ");
for(i=0; i<10; i++)
{
printf("%d ", arr[i]);
}
printf("\n");
}
