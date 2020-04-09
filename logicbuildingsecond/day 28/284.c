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
if(j==c-i-1||j==0||j==c-1||i==0||i==r-1)
{
printf("*\t");
}
else if(j<r-i)
{
printf("#\t");
}
else
{
printf("$\t");
}
}
printf("\n");
}
}

