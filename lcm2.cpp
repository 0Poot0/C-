#include <iostream>

int lcm(int a, int b)
{
    // Base case: if either a or b is 0, LCM is 0
    if (a == 0 || b == 0)
        return 0;

    // LCM of two numbers is the product of the two numbers divided by
    // their GCD (greatest common divisor).
    return (a * b) / gcd(a, b);
}

// Recursive function to find the GCD of two numbers
int gcd(int a, int b)
{
    // Base case: if either a or b is 0, GCD is the other number
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // GCD of two numbers is the GCD of the smaller number and the remainder
    // of the larger number divided by the smaller number.
    if (a > b)
        return gcd(a % b, b);
    else
        return gcd(a, b % a);
}

int main()
{
    int a, b;

    std::cout << "Enter the first number: ";
    std::cin >> a;

    std::cout << "Enter the second number: ";
    std::cin >> b;

    std::cout << "The LCM of " << a << " and " << b << " is: " << lcm(a, b) << std::endl;

    return 0;
}
