#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  long int  n,l;
  int i,j,h,k,m=0;
   double t,price[100001],quantity[100001],discount[100001];
  double diff[100001],ac[100001],inc[100001];
double sum=0;
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
     sum=sum+(quantity[j]*diff[j]);
  }
cout<<std::setprecision(18)<<sum<<endl;
sum=0;
}

}
