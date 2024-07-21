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

int binary_search(int arr[],int key,int size){
    
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;

    }
    return -1;

}

int main(){

    int even[7] = {2,3,5,7,8,10};

    print_array(even,7);

    int key;
    cout<<"Enter the value to search: "<<endl;
    cin>>key;

    cout<<"The index of key is : "<<binary_search(even,key,6)<<endl;
    
    return 0;
}