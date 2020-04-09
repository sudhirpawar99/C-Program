#include<stdio.h>
int main()
{
char str[100];
char *s;
char ch;
int f=0;
printf("enter the string");
scanf("%[^'\n']s",str);
//printf("\n");
s=str;
printf("enter the charcter");
scanf(" %c",&ch);
while(*s!='\0')
{
if(*s==ch)
{
f=1;
}
s++;
}
if(f==1)
{
printf("present");
}
else
{
printf("not present");
}
}
