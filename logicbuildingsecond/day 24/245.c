#include<stdio.h>
void main()
{
int r,c,ct=1;
printf("enter the row and column");
scanf("%d %d",&r,&c);
for(int i=r;i>0;i--)
{
for(int j=0;j<c;j++)
{
printf("%d\t",ct);
ct++;
}
printf("\n");
}
}

