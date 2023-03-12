#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int MI;
    while (cin >> MI) {
        double KM = MI * 1.6;
        cout << fixed << setprecision(1) << KM << "\n";
    }
    return 0;

}