#include<iostream>
using namespace std;

void swap_alternate(int arr[], int n){

    for (int i = 0; i < n; i+=2)
    {
        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main(){

    int arr[100] = {1,43,66,3,4,92};
    swap_alternate(arr,6);

    return 0;
}