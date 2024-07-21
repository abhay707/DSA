#include<iostream>
#include<limits>
using namespace std;

void print_Array(int arr[],int n){
    cout<<"Printing array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int get_min(int arr[],int size){
    int minv = INT8_MAX;
    for (int i = 0; i < size; i++)
    {
        //use predefined max and min funtion
        minv = min(minv,arr[i]);
        
        // if(arr[i] < min){
        //     min = arr[i];
        // }
    }
    return minv;
}

int get_max(int arr[],int size){
    int max = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}



int main(){

    int size;
    cout<<"Enter the size of array: ";
    cin>>size;

    int arr[100];

    cout<<"Enter the elements: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    //When we give arr in a function we are NOT GIVING THE WHOLE ARRAY but only the ADDRESS OF FIRST ELEMENT because arr point at 0th place
    print_Array(arr,size);

    cout<<"Maximum value in array: "<<get_max(arr,size)<<endl;
    cout<<"Minimum value in array: "<<get_min(arr,size)<<endl;    

    return 0;
}