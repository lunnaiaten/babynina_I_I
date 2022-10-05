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
    double s = 0;
    double b = 1;
    double now = 0;
    int inow = 2;
    double shag = 0.05;
    double epsilone = 0.001;
    //int x = 0;
    std::cout << "   x   |  s(x) |  f(x)" << std::endl;
    for (; x <= b; x += shag)
    {
        now = x * sin(M_PI / 4);
        s = 0;
        for (int i = inow; i < 100; i++)
        {
            if (abs(now) >= epsilone)
            {
                s += now;
                now = pow(x, i) * sin(i * M_PI / 4);
            }
            else
            {
                break;
            }
        }
        std::cout << std::fixed << std::setprecision(3);
        double y = 0;
        y = x * sin(M_PI / 4) / (1 - 2 * x * cos(M_PI / 4));
        std::cout << x << " | " << s << " | " << y << std::endl;
        std::cout << std::endl;
    }
}