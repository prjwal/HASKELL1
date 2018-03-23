#include<stdio.h>
void main()
{
int prj[100][100],i,j;
int prj2[100][3];
int a,b,r,w;
printf("\n enter the number of rows u want in matrix");
scanf("%d",&a);
printf("\n enter the number of columns u want in the matrix");
scanf("%d",&b);
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
printf("\n enter the element at %d , %d position of the matrix",i+1,j+1);
scanf("%d",&prj[i][j]);
}
}
int n=0;
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
printf(" %d",prj[i][j]);
}
printf("\n");
}
for(i=0;i<a;i++)
{
    for(j=0;j<b;j++)
    {
        if(prj[i][j]!=0)
            n=n+1;
    }

}
  prj2[0][0]=a;
    prj2[0][1]=b;
    prj2[0][2]=n;

i=1;

            for(r=0;r<a;r++)
            {
                for(w=0;w<b;w++)
                {
                    if(prj[r][w]!=0)
                    {

                        prj2[i][0]=r;
                        prj2[i][1]=w;

                        prj2[i][2]=prj[r][w];
                        i=i+1;

                    }
                }

            }




for(i=0;i<n+1;i++)
{
    for(j=0;j<3;j++)
        {

            printf(" %d",prj2[i][j]);
        }
    printf("\n");
}
}
