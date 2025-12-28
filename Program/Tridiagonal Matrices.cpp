#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k;

int mat[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
printf("Entered matrix is:\n\n");
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
	printf("%d\t",mat[i][j]);
}
printf("\n");
}
printf("\nTridiagnal matrix:\n\n");
printf("%d\t%d\n",mat[0][0],mat[0][1]);
for(i=1;i<5;i++)
{
for(k=1;k<i;k++)
{
printf("\t");
}
if(i==4)
printf("%d\t%d\n",mat[4][3],mat[4][4]);
else
{
for(j=i;j<5;j++)
{
if(i==j)
printf("%d\t%d\t%d",mat[i][j-1],mat[i][j],mat[i][j+1]);
}
printf("\n");
}
}
}
