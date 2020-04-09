#include<stdio.h>
void main()
{
int r,c;
printf("enter the row and colummn");
scanf("%d %d",&r,&c);
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
if(i==0||i==r-1||j==c-1||j==0||j==i)
{
printf("*\t");
}
else
{
printf(" \t");
}
}
printf("\n");
}
}

