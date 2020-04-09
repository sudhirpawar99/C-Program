#include<stdio.h>
void main()
{
int row,col,k=2,l=1;
printf("enter the row and column");
scanf("%d %d",&row,&col);
for(int i=0;i<row;i++)
{
k=2;
l=1;
for(int j=0;j<col;j++)
{
if(i%2==0)
{
printf("%d\t",k);
k=k+2;
}
else
{
printf("%d\t",l);
l=l+2;
}
}printf("\n");
}
}
