#include <iostream>
#include <cmath>

using namespace std;

int pow(int number, int pow)
{
    int result = 1;

    for (int i = 1; i <= pow; i++)
        result *= number;

    return result;
}

int fac(int number)
{
    long long unsigned result = 1;

    for (int i = 1; i <= number; i++)
        result *= i;

    return result;
}

int main(int argc, char const *argv[])
{
    int a;
    const int k = 0;
    double hec, znam;
    double x, e, S, b, result;
    do
    {
        cout << "Введеите числа a" << endl;
        cin >> a;
    } while (abs(a) >= pow(10, 6));

    do
    {
        cout << "Введите число х" << endl;
        cin >> x;
        cout << "Введите число e";
        cin >> e;
    } while (x == 0 && e < 0);

    if (e < 1)
    {
        b = 1 / a;
        {
            hec = (pow(-1, k + 1) * pow(x, 2 * k));
            znam = b * fac(2 * k);
            result = hec / znam;
            S += result;
        }

        cout << "При e<1 \nS= " << S << endl;
    }
    else if (e >= 1)
    {
        b = fac(a);
        hec = (pow(-1, k + 1) * pow(x, 2 * k));
        znam = b * fac(2 * k);
        result = hec / znam;
        S += result;
    }

    cout << "При e>=1 \nS=" << S << endl;
}
// остаётся о круглить до 8 знаков.
