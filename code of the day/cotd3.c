void sort012(int a[], int n)
{
    int i;
    int zero=0;
    int one=0;
    int two=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        zero++;
       else if(a[i]==1)
        one++;
       else if(a[i]==2)
        two++;
        
    }
    for(i=0;i<zero;i++)
    {
    a[i]=0;
    
    }
    for(i=zero;i<one+zero;i++)
    {
    a[i]=1;
    
    }
    for(i=one+zero;i<two+zero+one;i++)
    a[i]=2;
    
    return a;
}