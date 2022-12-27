#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int input;
    double a, b, c, d, temp;
    cout << "1 - ABS\n2 - MAX\n3 - AB\n4 - ABC\n5 - ABCD\n6 - HIT\n7 - MENU\n";
    cin >> input;

    switch (input)
    {
    case 1:
        cout << "X = ";
        cin >> a;
        b = a;
        if (a < 0)
            b *= -1;
        cout << "|" << a << "| = " << b << endl;
        break;

    case 2:
        cout << "A = ";
        cin >> a;
        cout << "B = ";
        cin >> b;
        if (a > b)
            c = a;
        else c = b;
        cout << "Max(" << a << ", " << b << ") = " << c << endl;
        break;

    case 3:
        cout << "A = ";
        cin >> a;
        cout << "B = ";
        cin >> b;
        cout << "A = " << a << "; B = " << b << endl;
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        cout << "After swap:\nA = " << a << "; B = " << b << endl;
        break;

    case 4:
        cout << "A = ";
        cin >> a;
        cout << "B = ";
        cin >> b;
        cout << "C = ";
        cin >> c;
        cout << "A = " << a << "; B = " << b << "; C = " << c << endl;
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (a > c)
        {
            temp = a;
            a = c;
            c = temp;
        }
        if (b > c)
        {
            temp = b;
            b = c;
            c = temp;
        }
        cout << "After swap:\nA = " << a << "; B = " << b << "; C = " << c << endl;
        break;

    case 5:
        cout << "A = ";
        cin >> a;
        cout << "B = ";
        cin >> b;
        cout << "C = ";
        cin >> c;
        cout << "D = ";
        cin >> d;
        cout << "A = " << a << "; B = " << b << "; C = " << c << "; D = " << d << endl;
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (a > c)
        {
            temp = a;
            a = c;
            c = temp;
        }
        if (a > d)
        {
            temp = a;
            a = d;
            d = temp;
        }
        if (b > c)
        {
            temp = b;
            b = c;
            c = temp;
        }
        if (b > d)
        {
            temp = b;
            b = d;
            d = temp;
        }
        if (c > d)
        {
            temp = c;
            c = d;
            d = temp;
        }
        cout << "After swap:\nA = " << a << "; B = " << b << "; C = " << c << "; D = " << d << endl;
        break;

    case 6:
        double x0 = 4, y0 = 3;
        double r = 4;
        cout << "X = ";
        cin >> a;
        cout << "Y = ";
        cin >> b;
        cout << "Точка (" << a << ", " << b << ") ";
        if ((x0 - a) * (x0 - a) + (y0 - b) * (y0 - b) > r * r)
        {
            cout << "HE ";
        }
        cout << "потрапляє в коло з центром в точцi (" << x0 << ", " << y0 << ") радiуса " << r << endl;
        break;

    case 7:
        int in2;
        cout << "Працює інформаційна система факультету прикладної математики:\n1. Новини дня\n2. Анекдот тижня\n3. Автора !!!\n";
        cout << "Введіть відповідний номер і натисніть ENTER.\n";
        cin >> in2;
        switch (in2)
        {
        case 1:
            cout << "Цiкава новина\n";
            break;
        case 2:
            cout << "Веселий анекдот\n";
            break;
        case 3:
            cout << "Iнформацiя про авторів\n";
            break;
        }
        break;
    }
}