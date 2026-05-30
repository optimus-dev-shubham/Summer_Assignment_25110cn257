#include <iostream>
using namespace std;

int main(){
    int n ;
     cout << "enter the number: ";
     cin >> n;

    int sum = 0;
     int i = 1;
     while(i<n){
        if(n%i==0){
            sum+=i;
        }
        i++;
     }
    sum==n?cout << "YES it is a perfect number":cout << "NO it is not a perfect number";
    return 0;
}