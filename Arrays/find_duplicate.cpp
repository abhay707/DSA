#include <iostream>
using namespace std;

void print_array(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void unique_no(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];
    }
    
    for (int i = 1; i < size; i++)
    {
        ans = ans^i;
    }
    cout<<"Duplicate in array is: "<<ans;

}

int main()
{ 

    int arr[100] = {1,3,5,2,5,6,4};

    print_array(arr, 7);
    unique_no(arr, 7);

    return 0;
}