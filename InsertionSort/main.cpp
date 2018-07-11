#include <iostream>

using namespace std; 

void insertionSort(int T[], int n)
{
    for(int i=1;i<n;i++)
    {
        int key = T[i];
        int j=i-1;
        while( j>= 0 && key < T[j])
        {
            T[j+1] = T[j];
            j--;
        }
        T[j+1] = key;
    }
}


void printArray(int T[], int n)
{
    for(int i=0;i<n;i++) cout<<T[i]<<"  ";
}

int main()
{
    int T[] = {3,9,-1,0,11,2,5,7};
    insertionSort(T,8);
    printArray(T,8);
    return 0;
}
