#include<iostream>
using namespace std;
int minimum1 (int x,int y)
{
  if(x<y)
  return x;
  else
  return y;
}
int minimum2(int x, int y, int z)
{
  if(x<y&&x<z)
  {
    return x;
  }
  else
  if (y<z&&y<x)
  return y;
  else
  return z;
}

int main()
{

int prj[50000];
prj[1]=0;
prj[2]=1;
prj[3]=1;
int x;
cout<<"enter the positive number";
cin>>x;
if (x==0)
cout<<"not possible";
int i;
for(i=4;i<=x;i++)
{
  if(i%2==0&&i%3==0)
  {
    prj[i]=minimum2(prj[i/2],prj[i/3],prj[i-1])+1;
  }
  else if (i%2==0&&i%3!=0) {
    prj[i]=minimum1(prj[i/2],prj[i-1])+1;
}
    else if (i%2!=0&&i%3==0) {
      prj[i]=minimum1(prj[i/3],prj[i-1])+1;
}
      else
      prj[i]=prj[i-1]+1;
  }
  cout<<"answer is"<<prj[x];
}
