英里轉公里
設a為英里
設b為公里
cout << fixed << setprecision(1)=>到小數點第一位


#include<iostream>  
#include <iomanip>  
using namespace std;

int main()
{
    int a;
    while (cin >> a) {
        double b = a * 1.6;
        cout << fixed << setprecision(1) << b << "\n";
    }

    return 0;
}
