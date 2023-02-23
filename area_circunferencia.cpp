#include <iostream>

int main()
{
    // area = n * (raio * raio)
    double n = 3.14159;
    double raio;
    std::cin >> raio;

    double area = n * (raio * raio);

    std::printf("A=%.4f\n", area);

    return 0;
}
