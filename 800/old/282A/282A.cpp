#include <iostream>
#include <string>

using namespace std;

int main()
{
    int value = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        //Check wheter it is a + or -, it must be in first 2 spots
        for (int i = 0; i < 2; i++)
        {
            if (str[i] != 'X')
            {
                if (str[i] == '+')
                {
                    value++;
                }
                else
                {
                    value--;
                }
                break;
            }
        }
    }

    cout << value;

    return 0;
}
