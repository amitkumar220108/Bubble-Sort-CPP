#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }   
        }

        if (isSwap == false)
        {
            cout<<"Array is Already Sorted";
            return;
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int arr[] = {5, 3, 1, 4, 2};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
    return 0;
}
