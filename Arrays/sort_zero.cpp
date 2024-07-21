#include<iostream>
using namespace std;



void sort0_1(int arr[], int size){
    
    int i = 0, j = size - 1;
    
    while(i < j){

        while(arr[i] == 0){
            i++;
        }

        while(arr[j] == 1){
            j--;
        }

        
        swap(arr[i],arr[j]);
        i++;
        j--;

    } 

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }   
}

int main(){

    int arr[100] = {0,1,0,1,0,1,1,0};

    sort0_1(arr, 8);
    
    return 0;
}