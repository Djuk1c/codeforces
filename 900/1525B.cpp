#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>

using namespace std;

int check(int *arr, int size)
{
    // Check if it is sorted
    if (is_sorted(arr, arr + size))
        return 0;
    // If first element is 1, only one operation is needed
    else if(arr[0] == 1)
    {
        return 1;
    }
    // If the last element is in proper pos, also only one operation is needed
    else if (arr[size-1] == size)
    {
        return 1;
    }
    else if (arr[0] == size && arr[size-1] == 1)
    {
        return 3;
    }
    // If it is sorted descending, 3 operations needed, if not 2
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1])
            return 2;
    }
    return 3;
}

int main()
{
    int t;
    cin >> t;
    for (int cases = 0; cases < t; cases++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        // 2 1 4 5 3
        int result = check(arr, n);
        cout << result << " ";
    }

    return 0;
}
