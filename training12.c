#include<stdio.h>
int main()
{
char Ch_choice;
switch(Ch_choice=getchar())
{
case 'r':
case 'R':
{
printf("In Case=%c",Ch_choice);
printf("Red");
break;
}
case 'b':
case 'B':
{
printf("In Case=%c",Ch_choice);
printf("Blue");
break;
}
case 'g':
case 'G':
{
printf("In Case=%c",Ch_choice);
printf("Green");
break;
}
default:
{
printf("In Black");
}
}
return 0;
}
