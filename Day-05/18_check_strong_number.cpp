#include <iostream>
using namespace std;

int find_factorial(int x)
{
    int factorial = 1;
    for (int i = 2; i <= x; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    if (n == 0)
    {
        cout << "NO it is not a strong number";
        return 0;
    }

    int temp_num = n;
    int new_num = 0;
    while (temp_num != 0)
    {
        new_num += find_factorial(temp_num % 10);
        temp_num /= 10;
    }
    new_num == n ? cout << "YES it is a strong number" : cout << " NO it is not a strong number";
    return 0;
}