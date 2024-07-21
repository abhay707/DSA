#include<iostream>
using namespace std;

int first_occurance(int arr[],int size, int key){

    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while (start<=end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        if (arr[mid]>key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }

        mid = start + (end - start)/2;
        
    }return ans;
    
}

int last_occurance(int arr[],int size, int key){

    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while (start<=end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        if (arr[mid]>key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }

        mid = start + (end - start)/2;
        
    }return ans;
    
}

int main(){

    int even[100] = {1,2,3,3,3,4};
    cout<<"First occurancing idex is: "<<first_occurance(even,6,3)<<endl;;
    cout<<"Last occurancing idex is: "<<last_occurance(even,6,3)<<endl;


    return 0;
}
