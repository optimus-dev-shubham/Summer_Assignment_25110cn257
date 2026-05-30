#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    if (n == 0)
    {
        cout << "infinite factors";
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}