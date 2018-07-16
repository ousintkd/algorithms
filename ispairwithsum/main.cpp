#include <iostream>
#include <unordered_set>

using namespace std;

bool isPairSum(int arr[], int n, int sum)
{
    unordered_set<int> comp;
    
    for(int i=0;i<n;i++)
    {
        if(comp.find(arr[i])!=comp.end()) return true;
        comp.insert(sum-arr[i]);
    }
    
    return false;
}

int main()
{
    int arr[]={1,3,4,4,-1};
    int sum = 2;
    
    cout<<isPairSum(arr,5,sum);
    
	return 0;
}
