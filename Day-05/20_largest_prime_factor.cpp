#include <iostream>
using namespace std;

bool isprime(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i*i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;

    if (isprime(n))
    {
        cout << n;
        return 0;
    }
    
    int answer =-1;
    for (int i = 2; n!=1; i++)
    {
        if(isprime(i)){
            while(n%i==0){
                n/=i;
                answer=i;
            }
        }
    }
    cout << answer;
    return 0;
}