//лабораторна 5.5
//Клімашевського Максима
//Варіант 3
#include <iostream>
#include <cmath>
using namespace std;

int binomialCoeff(int n, int k)
{
    if (k > n)
        return 0;
    if (k == 0 || k == n)
        return 1;

    return binomialCoeff(n - 1, k - 1)
        + binomialCoeff(n - 1, k);
}

int main()
{
    double n, k;
    cout << "n = "; cin >> n;
    cout << "k = "; cin >> k;
    cout << "Value of C(" << n << ", " << k << ") is "
        << binomialCoeff(n, k);
    return 0;
}
