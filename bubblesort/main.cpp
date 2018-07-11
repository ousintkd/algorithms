#include <iostream>

using namespace std; 

void bubbleSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++) if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
    }
}
void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++) cout<<arr[i]<<"  ";
}

int main()
{
    int arr[] = {3,9,-1,0,11,2,5,7};
    bubbleSort(arr,8);
    printArray(arr,8);
    return 0;
}
