#include <iostream>
using namespace std;

int square_root(int number)
{
    int start = 0;
    int end = number;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (mid * mid == number)
        {
            return mid;
        }
        else if (mid * mid < number)
        {
            start = mid + 1;
            ans = mid;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

double more_accurate(int sol, int precision, int num)
{

    double factor = 1;
    double ans = sol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < num; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{

    int num,sol;
    cout << "Enter the number: ";
    cin>>num;

    sol = square_root(num);

    cout<<"Answer is: "<<more_accurate(sol,3,num);


    return 0;
}