#include<stdio.h>
void main()
{
int arr[2][2];
int i,j,k;
printf("Enter array element");
for(i=0;i<2;i++)
{
for(j=0; j < 2; j++)
{
scanf("%d",&arr[i][j]);
}
}
for(i=0; i < 2; i++)
{
for(j=0; j < 2; j++)
{
printf("%d \n",arr[i][j]);
}
}

}

