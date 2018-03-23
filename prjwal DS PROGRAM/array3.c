#include<stdio.h>
int main()
{
int prj[100],a,b;
printf("the program is to reverse elements of the array");
printf("\n enter the number of elements initially in the array");
scanf("%d",&b);
for(a=0;a<b;a++)
{
printf("enter the value at %d position",a+1);
scanf("%d",&prj[a]);
}
for(a=0;a<b;a++)
{
printf("\n %d",prj[a]);
}
printf("\n the reversed array is");
for(a=b-1;a>=0;a--)
{
printf("\n %d",prj[a]);
}
}
