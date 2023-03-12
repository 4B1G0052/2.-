
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

