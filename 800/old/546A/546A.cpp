#include <iostream>

using namespace std;

int main()
{
    int k,n,w;
    cin >> k;
    cin >> n;
    cin >> w;

    for (int i = 0; i < w; i++)
    {
        n -= k*i;
    }

    cout << n;

    return 0;
}
