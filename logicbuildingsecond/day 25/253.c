#include<stdio.h>
void main()
{
int row,col,k=97,l=1;
printf("enter the row and column");
scanf("%d %d",&row,&col);
for(int i=0;i<row;i++)
{
k=97;
l=1;
for(int j=1;j<=col;j++)
{
if(i%2==0)
{
printf("%c\t",k);
k++;
}
else
{
printf("%d\t",j);
}
}printf("\n");
}
}

