#include <iostream>
#include <cmath>

int main()
{
    double a, b, c, x, F;
    std::cout << "Enter four numbers: ";
    std::cin >> a >> b >> c >> x;
    // First way
    if ((x + c < 0) && (a != 0))
      F = (-a * (x * x) - b);
    if (x + c > 0 && a != 0)
      F = ((x - a) / (x - c));
    if (!((x + c < 0) && (a != 0)) && !((x + c > 0 && a != 0)))
      F = (x / c) + (c / x);
    std::cout << F;
    
    // Second way
    if ((x + c < 0) && (a != 0))
        F = (-a * (x * x) - b);
    else if (x + c > 0 && a != 0)
        F = ((x - a) / (x - c));
    else
        F = (x / c) + (c / x);
    std::cout << F;
    return 0;
}