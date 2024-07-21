#include<iostream>
using namespace std;

void print_array(int arr[], int size){
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

}

void unique_no(int arr[],int size){

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    
    cout<<"\nUnique number in array: "<<ans;
}

int main(){

    int arr[100] = {1,1,5,6,3,5,6};

    print_array(arr,7);
    unique_no(arr,7);
    
    
    return 0;
}