#include<stdio.h>
void main()
{
int r,c;
printf("enter the row and column");
scanf("%d %d",&r,&c);
for(int i=0;i<r;i++)
{
 int ch=65,ch1=97;
for(int j=0;j<c;j++)
{
if(i%2==0)
{
printf("%c\t",ch);
ch++;
}
else
{
printf("%c\t",ch1);
ch1++;
}
}
printf("\n");
}

}

