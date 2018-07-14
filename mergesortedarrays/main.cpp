//
//  main.cpp
//  Algorithms and Data Structures in C++
//
//  Created by Ousseynou Khadim BEYE on 14/07/2018.
//  Copyright © 2018 Ousseynou Khadim BEYE. All rights reserved.
//

#include <iostream>

using namespace std;

void mergeSorted(int A1[],int n1, int A2[], int n2, int A3[])
{
    int i=0, j=0, k=0;
    
    while(i<n1 && j<n2)
    {
        if(A1[i]<A2[j]) A3[k++]=A1[i++];
        else A3[k++]=A2[j++];
    }
    while(i<n1) A3[k++]=A1[i++];
    while(j<n2) A3[k++]=A1[j++];
}

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++) cout<<arr[i]<<"  ";
    cout<<endl;
}

int main()
{
    int A1[]={1,4,6,10,23,45};
    int A2[]={0,3,5,14,33,40};
    int A3[12];
    
    mergeSorted(A1,6,A2,6,A3);
    
    printArray(A1, 6);
    printArray(A2, 6);
    printArray(A3, 12);
    
    return 0;
}
