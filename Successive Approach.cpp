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
    return (cos(x) + 1)/3;
}

int main()
{
    double a = 3.2;
    int count = 0;
    while(1)
    {
        cout << count++ << endl;
        if(fabs(f(a)) < eps)
        {
            cout << "Root is: " << a << endl;
            return 0;
        }

        a = g(a);
    }

    return 0;
}
