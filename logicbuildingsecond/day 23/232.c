#include<stdio.h>
void main()
{
int r,c;
printf("enter the row and column");
scanf("%d %d",&r,&c);
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
printf("%d\t",j);
}
printf("\n");
}
}


