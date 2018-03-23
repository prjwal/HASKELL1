#include<stdio.h>
int main()
{
int prj[100],a,b;
printf("the program is to add an element in the array");
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
printf("enter the element to be enter in the array");
int l,m;
scanf("%d",&l);
printf("\n enter the position at which it is to be entered");
scanf("%d",&m);
for(a=b-1;a>=m-1;a--)
{
prj[a+1]=prj[a];
}
prj[m-1]=l;
b=b+1;
for(a=0;a<b;a++)
{
printf("\n %d",prj[a]);
}
}
