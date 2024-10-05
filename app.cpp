#include <iostream>
#include <cmath>

using namespace std;

double power(double base, int exponent);
int factorial(int num);
double calc_b(int a, double e);

int main() {
    double x, e;
    int a;

    cout << "Введите x: ";
    cin >> x;
    cout << "Введите e: ";
    cin >> e;
    cout << "Введите a: ";
    cin >> a;

    if (x == 0 || e <= 0 || a == 0 || abs(a) >= 1000000) {
        cout << "Входные данные не соответствуют ограничениям!!!" << endl;
        return 0;
    }

    int k = 0;
    double b = calc_b(a, e);
    double calc = 0;
    double sum = 0;
    int sum_counter = 0;

    while(true) {
        if (b == 0) {
            cout << "Ни одно из слагаемы не было учтено!!!" << endl;
            return 0;
        }
        double denumenator = (b * factorial(2 * k));
        if (denumenator == 0) {
            cout << "При b = " << b << " и k = " << k << " функция неопределена!" << endl;
            k++;
            continue;
        }

        double numentar = (power(-1, k + 1) * power(x, 2 * k));
        calc = numentar / denumenator;
        if(abs(calc) >= e) {
            if(sum_counter == 0) {
                cout << "Ни одно из слагаемы не было учтено!!!" << endl;
            }
            break;
        }
        sum += calc;
        k++;
        sum_counter++;
    }

    cout.precision(8);
    cout << "Сумма слагаемых: " << sum << endl;
    cout << "Количество слагаемых: " << sum_counter << endl;

    return 0;
}

double calc_b(int a, double e) {
    if (e < 1) {
        return 1 / a;
    }
    return factorial(a);
}


int factorial(int num) {
    int res = 1;
    for(int i = 1; i <= num; i++) {
        res *= i;
    }
    return res;
}

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1.0;
    }

    double result = 1.0;
    bool isNegativeExponent = false;

    if (exponent < 0) {
        isNegativeExponent = true;
        exponent = -exponent;
    }

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    if (isNegativeExponent) {
        result = 1.0 / result;
    }

    return result;
}