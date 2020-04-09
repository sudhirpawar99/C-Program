#include<stdio.h>
void main()
{
char str[100];
printf("enter the string");
scanf("%[^'\n']s",str);
char ch,*p;
//printf("enter the charcter");
//scanf(" %c",&ch);
p=str;
int c=0,i=0;
while(*p!='\0')
{
p++;
c++;
}
for(int i=c;i>=0;i--)
{
printf("%c",str[i]);
}
}

