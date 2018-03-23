#include<stdio.h>
int main()
{
int prj[100],a,b,i;
printf("the program is to delete an element in the array");
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
int c;
printf("\n enter the element to be deleted");
scanf("%d",&c);
for(a=0;a<b;a++)
{

if (c==prj[a])
{
for(i=a;i<=b;i++)
{
prj[i]=prj[i+1];
}
b=b-1;
}
}
for(a=0;a<b;a++)
{
printf("\n %d",prj[a]);
}

}
