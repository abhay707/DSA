#include<iostream>
using namespace std;

int sum(int arr[],int n){
    
    int sum_n = 0;
    if (n < 1){
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        sum_n = arr[i] + sum(arr,n-1);
    }
    return sum_n;
    
}

int main(){
    int arr[100] = {2,34,65,3};
    cout<<sum(arr,4);
    
    return 0;
}