//
//  main.cpp
//  Algorithms and Data Structures in C++
//
//  Created by Ousseynou Khadim BEYE on 14/07/2018.
//  Copyright © 2018 Ousseynou Khadim BEYE. All rights reserved.
//

#include <iostream>

using namespace std;

void merge(int arr[],int start, int m, int end)
{
    int n1 = m-start+1;
    int n2 = end-m;
    
    int A1[n1],A2[n2];
    for(int i=0;i<n1;i++) A1[i] = arr[start+i];
    for(int j=0;j<n2;j++) A2[j] = arr[m+j+1];
    
    
    int i=0, j=0, k=start;
    
    while(i<n1 && j<n2)
    {
        if(A1[i]<A2[j]) arr[k++]=A1[i++];
        else arr[k++]=A2[j++];
    }
    while(i<n1) arr[k++]=A1[i++];
    while(j<n2) arr[k++]=A2[j++];
}

void mergeSort(int arr[],int start, int end){
    int m = start + (end-start)/2;
    if(start<end)
    {
        mergeSort(arr, start, m);
        mergeSort(arr, m+1, end);
    }
    merge(arr,start,m,end);
}

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++) cout<<arr[i]<<"  ";
    cout<<endl;
}

int main()
{
    int arr[]={7,10,100,-4,2,-15,110,-60,5,3};
    
    mergeSort(arr, 0, 10);
    printArray(arr,10);
    
    return 0;
}
