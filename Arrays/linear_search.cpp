#include<iostream>
using namespace std;

bool search(int arr[], int n, int key){
    for(int i = 0; i < n; i++)
    {
        if (arr[i] == key){
            return 1;
        }
        
    }return 0;
    
}

int main(){

    int key;
    int arr[100] = {5, 7, -2, 4, 65, 5, 7, 34, 1, 76};
    
    cout<<"Enter the element to search: ";
    cin>>key;

    bool founnd =  search(arr,10,key);

    if(founnd){
        cout<<"Key is present";
    }
    else{
        cout<<"Key is not present";
    }
    
    return 0;
}