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
    int result = 1;

    for (int i = 1; i <= number; i++)
        result *= i;

    return result;
}

void summa(float x, float eps, int a)
{
    double S;
    int k = 0;
    double func;
    int count = 0;

    double b;

    if (abs(a) < pow(10, 6))
    {
        if (eps >= 1)
            b = fac(a);
        else if (eps<1)
            b = 1 / a;
    }

    while (true)
    {
        func = (pow(-1, k + 1) * pow(x, 2 * k)) / b * fac(2 * k);
        if (abs(func) < eps) // вот сюда!!!!!!
        {
            cout << "Fatall" << endl;
            break;
        }

        S += func;
        count += 1;
        k += 1;

        if (count == 0)
            cout << "Ни одно из слагаемых не было учтено." << endl;
        else
        {
            cout << "Сумма S = " << S << endl;
            cout << "Количество слагаемых" << count << endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    float x, eps;
    int a;
    double result;

    cout << "Введите значение x (x ≠ 0):" << endl;
    cin >> x;
    cout << "Введите значение ε (ε > 0):" << endl;
    cin >> eps;
    cout << "Введите значение а" << endl;
    cin >> a;
    summa(x, eps, a);
}
