#include<iostream>
#include<math.h>
#define eps 10e-6

using namespace std;

double f(double x)
{
    return (3*x) - cos(x) - 1;
}

double g(double x)
{
    return (3 + sin(x));
}

int main()
{
    double a,b;

    a = 0, b = 1;

    if((f(a) * f(b))>0)
    {
        cout << "No root found!" << endl;
        return 0;
    }

    int count = 0;

    while(1)
    {

        //double x = (a+b)/2; //v.1 Bisection
        //double x = ((a*f(b)) - (b*f(a)))/(f(b) - f(a)); //v.2 False position
        double x = a - (((a-b)*f(a)) / (f(a) - f(b))); //v.3 Secant method
        //double x = a - (f(a)/g(a)); // v.4 Newton Repson

        cout << "X = " << x << endl;

        if(fabs(f(x))<=eps)
        {
            cout << "Root is: " << x << endl;
            return 0;
        }

        else if((f(x)*f(a)) < 0) // v.1,v.2,v3
            b = x; // v.1,v.2,v3
        else
            a = x;
    }

    return 0;
}
