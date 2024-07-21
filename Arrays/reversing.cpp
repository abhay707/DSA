#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;

    while (start < end)
    {
    
        // int temp[n];
        // temp[n] = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp[n];

        swap(arr[start],arr[end]);

        start++;
        end--;
    
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[100] = {2,5,4,6,3};
    reverse(arr,5);

    return 0;

}