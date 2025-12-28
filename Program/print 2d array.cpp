#include<stdio.h>
#include<conio.h>
int main()
{
int i=0,j=0;
int Arrry[3][3];
printf("enter 2-D array elements");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
	printf("array[%d] [%d] = %d \n",i,j,Arrry[i][j]);
scanf("%d" ,&Arrry[i][j]);
}
}
printf("Array elements are");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%2D",Arrry [i][j]);
}
printf("\n");
}

}

