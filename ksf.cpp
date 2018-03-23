#include<iostream>
using namespace std;

void sortarray(double a[], double b[], int n)
{
    int i,j;
    double r1,r2;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]/b[j]<a[j+1]/b[j+1])
            {
                r1=a[j];
                r2=b[j];
                a[j]=a[j+1];
                b[j]=b[j+1];
                a[j+1]=r1;
                b[j+1]=r2;
            }
        }
    }
}
void fknapsack(double W, double wt[], double v[],int n)
{
    int i=0;
    double x[100]={0.0};

    double weight=0;
    while(weight<W && i<n)
    {
        if((weight + wt[i])<=W)
        {
            x[i]=1.0;
            weight+=wt[i];
        }
        else
        {
            x[i]=(W-weight)/wt[i];
            weight=W;
        }
        i++;
    }
    cout<<"Value of x: ";
    double val=0;
    for(i=0;i<n;i++)
        {cout<<x[i]<<" ";
        val+=v[i]*x[i];
        }
    cout<<"\nMaximum value  "<<val;
}
int main()
{
    int i, n;
    double W;
    cout<<"Enter max weight ";
    cin>>W;
    cout<<"Enter no. of items: \n";
    cin>>n;


    cout<<"Enter items"<<endl;
    double v[n], wt[n];

    for(i=0;i<n;i++)
    {
      cout<<"enter the value of "<<i+1<<"item";
      cin>>v[i];
      cout<<"enter the weight of "<<i+1<<"item";
      cin>>wt[i];
    }
    sortarray(v,wt,n);
    fknapsack(W,wt,v,n);
    return 0;
}
