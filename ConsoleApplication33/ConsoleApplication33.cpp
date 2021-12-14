#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, n;
    cout << "Введите значение: " << endl;
    cout << "n= ";
    cin >> n;


    cout << "an= " << ((1/pow(2,n))+(1/pow(3,n)));

    system("pause");
    return 0;
}