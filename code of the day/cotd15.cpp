bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
    int i=0,j=1;
    while(i<size&&j<size)
    {
        int diff=abs(arr[i]-arr[j]);
        if(diff==n)
        return true;
        else if(diff>n)
        i++;
        else
        j++;
    }
    return false;
}