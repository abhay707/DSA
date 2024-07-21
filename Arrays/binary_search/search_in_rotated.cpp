#include <iostream>
using namespace std;

int pivot(int arr[], int size)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {

        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int binary_search(int arr[], int s,int e, int target)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {

            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[100] = {7, 8, 1, 3, 5};

    int pivot_no = pivot(arr,6);

    int target = 3 ;

    int k = 5;

    if(target >= arr[pivot_no] && target <= arr[k - 1]){
        cout<<binary_search(arr,pivot_no,k-1,target);
    }else{
        cout<<binary_search(arr,0,pivot_no - 1,target);
    }

    return 0;

}