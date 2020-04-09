#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
int c=0,i=0;
char str[40];
printf("enter the string");
scanf("%[^'\n']s",str);
while(str[i]!='\0')
{
c++;
i++;
}
c--;
for(i=c;i>=0;i--)
printf("%c",str[i]);
}

