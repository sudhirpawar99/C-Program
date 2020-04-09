#include<stdio.h>
void main()
{
int row,col,k=1;
printf("enter the row and column");
scanf("%d %d",&row,&col);
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
printf("%d\t",k);
k>8?k=1:k++;
}
printf("\n");
}

}

