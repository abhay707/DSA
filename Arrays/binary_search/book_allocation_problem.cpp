#include <iostream>
using namespace std;

bool isPossibleSol(int mid, int arr[], int books, int student)
{

    int student_no = 1;
    int pagesum = 0;

    for (int i = 0; i < books; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            student_no++;
            if (student_no > student || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int bap(int arr[], int books, int student)
{

    int sum = 0;

    for (int i = 0; i < books; i++)
    {
        sum += arr[i];
    }

    int start = 0;
    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossibleSol(mid, arr, books, student))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{

    int arr[100] = {10, 20, 30, 40};
    cout << "Answer is: " << bap(arr, 4, 2);

    return 0;
}