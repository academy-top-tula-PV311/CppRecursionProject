#include <iostream>

double Power(double x, int n)
{
    double result{ 1 };
    for (int i{}; i < n; i++)
        result *= x;
    return result;
}

double PowerRec(double x, int n)
{
    if (n == 0) return 1;
    return PowerRec(x, n - 1) * x;
}

double PowerRecBin(double x, int n)
{
    if (n == 0) return 1;
    if (n & 1)
        return PowerRecBin(x, n - 1) * x;
    else
    {
        int temp = PowerRecBin(x, n / 2);
        return temp * temp;
    }
}

void BinNumber(int n)
{
    if (n >= 2)
        BinNumber(n / 2);
    std::cout << n % 2;
}

unsigned long long Fact(int n)
{
    if (n == 0) return 1;
    return Fact(n - 1) * n;
}

double CircleArea(double radius)
{
    return 3.14 * Power(radius, 2);
}

unsigned long long FibLoop(int n)
{
    unsigned long long f1{ 0 };
    unsigned long long f2{ 1 };
    unsigned long long temp;

    for (int i{}; i < n; i++)
    {
        temp = f1 + f2;
        f1 = f2;
        f2 = temp;
    }
    return f1;
}

unsigned long long FibRec(int n)
{
    static unsigned long long fibArr[1000]{};

    if (n == 0 || n == 1) return n;

    if (!fibArr[n]) // fibArr[n] == 0
        fibArr[n] = FibRec(n - 1) + FibRec(n - 2);

    return fibArr[n];
    
}

unsigned long long Hanoy(int n)
{
    if (n == 1) return 1;
    return Hanoy(n - 1) * 2 + 1;
}

int main()
{
    /*std::cout << Power(5, 3) << "\n";
    std::cout << PowerRec(5, 3) << "\n";

    BinNumber(37);*/

    /*std::cout << FibLoop(70) << "\n";
    std::cout << FibRec(70) << "\n";*/

    std::cout << Hanoy(64) / 3600 / 24 / 365 << "\n";
}
