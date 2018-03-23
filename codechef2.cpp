#include<iostream>
using namespace std;
int main()
{
  long int  n,l;
  int i,j,h,k,m=0;
  float t,price[100],quantity[100],discount[100],diff[10],ac[10],inc[10],prj[100];
cin>>t;
for(k=0;k<t;k++)
{
  cin>>n;
  for(l=0;l<n;l++)
  {

    cin>>price[l];
    cin>>quantity[l];
    cin>>discount[l];

  }
  for(j=0;j<=l;j++)
  {
     inc[j]=price[j]+(price[j]*(discount[j]/100.0));
     ac[j]=inc[j]-(inc[j]*(discount[j]/100.0));
     diff[j]=price[j]-ac[j];
     prj[k]=prj[k]+(quantity[j]*diff[j]);

  }

}
for(h=0;h<t;h++)
{
  cout<<prj[h]<<endl;
}

}
