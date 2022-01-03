#include<iostream>
 using namespace std;
 int main()
 {
      int n;
      cout<<"Enter the array size";
      cin>>n;
      int a[n],i,d,j,temp;
        cout<<"Enter the element:";
        for(i=0;i<n;i++)
        cin>>a[i];
        cout<<"Enter the array rotate the array size";
        cin>>d;
        for(j=1;j<=d;j++)
        {
             a[0]=temp;
             for(i=0;i<n;i++)
             a[i]=a[i+1];
             a[i]=temp;

        }
        for(i=0;i<n;i++)
        cout<<a[i];
        return 0;
 }