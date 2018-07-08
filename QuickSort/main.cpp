//
//  main.cpp
//  QuickSort
//
//  Created by Ousseynou khadim Beye on 08/07/2018.
//  Copyright © 2018 Ousseynou khadim Beye. All rights reserved.
//

#include <iostream>

using namespace std;

int partition(int T[], int start, int end)
{
    int pivot = T[end];
    int pivot_index = start;
    int i = start;
    while(i<end)
    {
        if(T[i] < pivot)
        {
            swap(T[i],T[pivot_index]);
            pivot_index++;
        }
        i++;
    }
    swap(T[end],T[pivot_index]);
    return pivot_index;
}


void quickSort(int T[], int start, int end)
{
    if(start < end)
    {
        int pivot_index = partition(T,start,end);
        quickSort(T,start,pivot_index-1);
        quickSort(T,pivot_index+1,end);
    }
}

int main(int argc, const char * argv[]) {
    int T[] = {4,-1,6,0,11,-6,1,6};
    quickSort(T,0,7);
    for(int i = 0; i <= 7; i++) cout <<T[i]<< "  ";
    return 0;
}
