#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    long int n, k;
    cin >> n;
    cin >> k;

    // Get number of odd and even numbers
    int a = n % 2;
    long int numEven = n / 2;
    long int numOdd = n / 2 + a;

    if (k > numOdd)
    {
        // Trazimo even broj onda
        k -= numOdd;
        cout << k*2;
    }
    else
    {
        // Trazimo odd broj
        cout << k*2-1;
    }

    return 0;
}
