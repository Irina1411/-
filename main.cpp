/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
float a;
float b;
float c;
float D;
float x;
float x1;
float x2;
    cout<<"Введите значение a: ";
    cin >> a;
    cout<<"ВВедите значение b: ";
    cin >> b;
    cout<<"ВВедите значение c: ";
    cin >> c;
    D=b*b - 4*a*c;
    if (D>0)
    {
        x1 = (-1*b + sqrt(D)) / (2*a);
        cout<<"Первый корень равен  " << x1 ;
        x2 = (-1*b - sqrt(D)) / (2*a);
        cout<<"Второй корень равен  " << x2 ;
    }
    if (D=0)
    {x1 = (-1*b + sqrt(D)) / (2*a);
    cout<<"корень равен  " << x1 ;}
    else
    {
        cout << "Дискриминант меньше 0";
    }
    
    return 0;
}
