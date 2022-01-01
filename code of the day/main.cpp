#include<iostream>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n,d;
          cin>>n>>d;
          int j,a[n],i;
          for(i=0;i<n;i++)
          cin>>a[i];
          int temp[d];
          for(i=0;i<d;i++)
          temp[i]=a[i];
          int d1=d;
          for(i=0;d1<n;)
          a[i++]=a[d1++];
          for(j=0;j<d;j++)
          a[i++]=temp[j];
          for(i=0;i<n;i++)
          cout<<a[i]<<" ";
          cout<<endl;
     }
     return 0;
}