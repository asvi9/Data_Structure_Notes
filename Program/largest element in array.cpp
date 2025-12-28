#include <stdio.h>
#include<conio.h>
int main()
{
int array[100], maximum, n, i, location= -1;
printf("Enter the number of elements in array\n");
scanf("%d", &n);
printf("Enter array elements");
for (i = 0; i < n; i++)
scanf("%d", &array[i]);
maximum = array[0];
for (i= 1; i< n; i++)
{
if (array[i] > maximum)
{
maximum = array[i];
location = i+1;
}
}
printf("Maximum element is present at location %d and its value is %d.\n", location, maximum);
}
