#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Printing the array "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nArray is printed"<<endl;
    
}

int main(){

    int number[15] = {1,4,5,21,67,43,4};

    //to find the size of an array
    cout<<"The size of third: "<<sizeof(number)/sizeof(int)<<endl;
    
    //Print array using function
    printArray(number ,15);

    return 0;
}
