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
if(j==r-i-1)
{
printf("*\t");
}
else
{
printf("#\t");
}
}
printf("\n");
}
}

