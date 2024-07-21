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

void intersection(int arr1[], int arr2[], int size)
{
    int i = 0; 
    int j = 0;

    cout<<"Common in first and second array is: "<<endl;

    while (i < size && j < size)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
}

int main()
{

    int arr1[100] = {1, 2, 3, 4, 5, 6};
    int arr2[100] = {1, 2, 3, 5, 8, 9};

    cout<<"Array 1: "<<endl;
    print_array(arr1,6);
    cout<<"Array 2: "<<endl;
    print_array(arr2,6);

    intersection(arr1, arr2, 6);

    return 0;
}