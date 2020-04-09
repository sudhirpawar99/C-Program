#include<stdio.h>
void main()
{
char str[100];
char ch,*p;
printf("enter the string");
scanf("%[^'\n']s",str);
printf("enter the charcter");
scanf(" %c",&ch);
p=str;
int c;
while(*p!='\0')
{
if(*p==ch)
{
c++;
}
p++;
}
printf("\ncount of%c in %s is %d ",ch,str,c);
}
