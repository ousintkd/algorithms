#include <iostream>

using namespace std; 

void selectionSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIdx = i;
        for(int j=i+1;j<n;j++) if(arr[j]<arr[minIdx]) minIdx=j;
        swap(arr[i],arr[minIdx]);
    }
}

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++) cout<<arr[i]<<"  ";
}

int main()
{
    int arr[] = {3,9,-1,0,11,2,5,7};
    selectionSort(arr,8);
    printArray(arr,8);
    return 0;
}
