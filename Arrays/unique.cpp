#include<iostream>
using namespace std;

void unique(int arr[],int n){
    int data = 0;
    for (int i = 0; i < n; i++)
    {
        data = data^arr[i]; 
    }
    cout<<data;
    
}

int main(){

    int arr[100] = {1,3,5,3,1,5};
    unique(arr,7);
    return 0;
}