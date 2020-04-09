#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
int d,c=0,c1=0,i=0;
char str[40];
printf("enter the string");
scanf("%[^'\n']s",str);
while(str[i]!='\0')
{
if(isupper(str[i]))
{
c++;
}
else if(islower(str[i]))
{
c1++;
}
i++;
}
d=c-c1;
printf("%d",d);
}

