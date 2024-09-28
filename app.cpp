#include <iostream>

using namespace std;

int summ(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{

    int numberOne, numberTwo;

    cout << "Enter number";
    cin >> numberOne;
    cout << "Enter number Two";
    cin >> numberTwo;
    cout << summ(numberOne,numberTwo)<< endl;

    return 0;
}
