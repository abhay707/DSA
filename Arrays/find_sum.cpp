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

void sum_of(int arr[], int size, int n)
{

    cout << "Sum " << n << " of numbers in array are: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == n)
            {

                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}

int main()
{

    int sum;
    cout << "Enter the sum: " << endl;
    cin >> sum;

    int arr[100] = {1, 2, 3, 4, 5, 6, 7};

    print_array(arr, 7);
    sum_of(arr, 7, sum);

    return 0;
}