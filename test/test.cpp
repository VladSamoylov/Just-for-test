// test.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;


int main()
{
    int i= 0, j = 1;
    double d = asin((i - j + 3) / 15) + pow(-0.75, i + 2) * log10(abs((5 * i - j) / (pow(i, 2) - pow(j, 3))) + 2);
    i = 0;
    j = 0;
    double d1 = log(i + 0.5 + j - 1);
    cout << d << endl;
    cout << d1 << endl;
    cout << "0.5: " << log(0.5) << endl;
    cout << "-0.5: " << log(-0.5) << endl;
    cout << log10(3) << endl;
   
}

