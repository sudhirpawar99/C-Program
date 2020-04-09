#include<stdio.h>
void main()
{
int row,col,k=2,l=1;
printf("enter the row and column");
scanf("%d %d",&row,&col);
for(int i=0;i<row;i++)
{
for(int j=i+1;j<=col+i;j++)
{
printf("%d\t",j);
}
printf("\n");
}
}

