#include<stdio.h>
void main()
{
int r,c;
printf("enter the row and column");
scanf("%d %d",&r,&c);
for(int i=0;i<r;i++)
{
 int ch=65;
for(int j=0;j<c;j++)
{
printf("%c\t",ch);
ch++;
}
printf("\n");
}
}

