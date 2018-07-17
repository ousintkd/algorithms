#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int l=0,h=n-1;
    while(l<=h)
    {
        int m=(l+h)/2;
        if(arr[m]==target) return m;
        if(arr[m]>target) h=m-1;
        else l=m+1;
    }
    return -1;
}

int main()
{
    int arr[]={1,3,5,10,22,24,33,45,100,101};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<binarySearch(arr,n,101);
    return 0;
}
