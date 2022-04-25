#include  <iostream>

int main()
{

    int cents {};

    std::cout << "Enter an amount in cents: ";
    std::cin >> cents;

    int dollars {};
    dollars = cents/100;
    cents %= 100;

    int quaters {};
    quaters = cents/25;
    cents %= 25;

    int dimes {};
    dimes = cents/10;
    cents %= 10;

    int nickels {};
    nickels = cents/5;
    cents %= 5;

    std::cout << "You can provide change for this as follows:\n" << std::endl;

    std::cout << "dollars: " << dollars << std::endl;
    std::cout << "quaters: " << quaters << std::endl;
    std::cout << "dimes: " << dimes << std::endl;
    std::cout << "nickels: " << nickels << std::endl;
    std::cout << "pennies: " << cents << std::endl;

    return 0;
}