#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include<iomanip>
double factorial(int a)
{
    if (a < 0)
        return 0;
    if (a == 0)
        return 1;
    else
        return a * factorial(a - 1);
}
int main()
{
    double x = 0;
    double A = -1;
    double b = 1;
    double shag = 0.1;
    double epsilone = 0.001;
    double s = 0;
    double now = 0;
    int inow = 2;
    std::cout << "   x   |  s(x) |  f(x)" << std::endl;
    for (x = A; x <= b; x += shag)
    {
        now = (-1) * (pow(x, 2) / factorial(2));
        s = 0;
        for (int i = inow; i < 100; i++)
        {
            if (abs(now) >= epsilone)
            {
                s += now;
                now = pow(-1, i) * (pow(x, i) / factorial(2 * i));
            }
            else
            {
                break;
            }
        }
        std::cout << std::fixed << std::setprecision(3);
        double y = 0;
        y = cos(x);
        std::cout << x << " | " << s << " | " << y << std::endl;
        std::cout << std::endl;
    }
}