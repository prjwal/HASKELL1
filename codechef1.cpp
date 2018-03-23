#include<iostream>
using namespace std;
int main()
{
int n,q=0,a[10],h;
cin>>n;
long long int y,i,j,o=0,w=0;

long long int prj[100000],prj1[100000],count[100000],count1[100000];
for(j=0;j<n;j++)
{
  cin>>y;
for(i=0;i<y;i++)
{
cin>>prj[i];
}
for(i=0;i<y;i++)
{
cin>>prj1[i];
}
for(i=0;i<y;i++)
{

count[i]=prj1[i]-prj[i];
count1[i]=prj1[y-i-1]-prj[i];
if(count [i]>=0)
{
o=o+1;
}
if (count1[i]>=0)
{
w=w+1;
}
}
if(o==n&&w!=n)
{

cout<<"front";
}
else if(w==n&&o!=n)
{

cout<<"back";
}
else
if(w==n&&o==n)
{

cout<<"both";
}
}

return 0;
}
