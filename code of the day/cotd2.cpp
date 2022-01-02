class Solution{
    public:
    long long minTime(long long a[], long long b[], long long n)
    {
        long long asum=0,bsum=0,i;
        for(i=0;i<n;i=i+2)
        asum=asum+a[i];
        for(i=1;i<n;i=i+2)
        asum=asum+b[i];
        for(i=0;i<n;i=i+2)
        bsum=bsum+b[i];
        for(i=1;i<n;i=i+2)
        bsum=bsum+a[i];
        if(asum>bsum)
        return bsum;
        else
        return asum;
        
    }
};