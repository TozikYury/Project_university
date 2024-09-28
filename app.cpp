#include <iostream>

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
    double x, e, S, b;
    do
    {
        cout << "Введеите числа a" << endl;
        cin >> a;
    } while (abs(a) < pow(10, 6));

    do
    {
        cout << "Введите число х" << endl;
        cin >> x;
        cout << "Введите число e";
        cin >> e;
    } while (x != 0 && e > 0);

    if (e < 1)
    {
        b = 1 / a;
        S = ((pow(-1, k + 1) * pow(x, 2 * k)) / b * fac(2 * k));
    }
    else if (e >= 1)
    {
        b = fac(a);
        S = ((pow(-1, k + 1) * pow(x, 2 * k)) / b * fac(2 * k));
    }
}
