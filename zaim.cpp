#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(0, "");
    double S, p, n, m, r;
    cout << "Vvedite S(zaim)";
    cin >> S;
    cout << endl;
    cout << "Vvedite n(kol-vo let)";
    cin >> n;
    cout << endl;
    cout << "Vvedite p(procent)";
    cin >> p;
    cout << endl;
    r = p / 100;
    if ((S <= 0) || (n <= 0))
    {
        cout << "���� � ���������� ��� ������ ���� ������ 0";
    }
    else if (p < 0)
    {
        cout << "���������� ������ �� ����� ���� ������ 0";
    }
    else if ((12 * (pow(1 + r, n) - 1)) == 0)
    {
        cout << "������� ������ �������";
    }
    else
    {
        m = S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1));
    }
    return 0;
}
