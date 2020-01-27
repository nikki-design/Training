#include<stdio.h>
int main()
{
int x,y,z;
z=2;
x=3;
y=4;
if(x-y)
{
z=z++;
}
z=z--;
printf("z = %d",z);
return 0;
}
