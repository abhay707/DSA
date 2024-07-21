#include<iostream>
using namespace std;

void print_array(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selection_sort(int arr[], int size){
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
            
        }
        
    }
    
}

int main(){

    int arr[10] = {22,45,6,77,85,3};
    selection_sort(arr,6);
    print_array(arr,6);
    return 0;
}