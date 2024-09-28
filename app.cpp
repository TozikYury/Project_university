#include <iostream>

using namespace std;

int pow(int number, int pow)
{
    int result = 1;

    for (int i = 1; i <= pow; i++)
        result *= number;

    return result;
}

int factorial(int number)
{
    int result = 1;

    for (int i = 1; i <= number; i++)
        result *= i;

    return result;
}

int main(int argc, char const *argv[])
{
    int number;

    cout << "Введите число" << endl;
    cin >> number;
    cout << "Число в степени 3 =" << pow(number, 3) << endl;
    cout << "Fac = " << factorial(240) << endl;
    
    return 0;
}
