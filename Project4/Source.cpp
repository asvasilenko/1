#include <cmath>

double altitude_to_a(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return 2.0 * sqrt(p * (p - a) * (p - b) * (p - c)) / a;
}

int main()
{
    return 0;
}