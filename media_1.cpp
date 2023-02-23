#include <iostream>

int main()
{
    double a, b;
    std::cin >> a;
    std::cin >> b;

    a = a * 3.5;
    b = b * 7.5;

    double mediaAluno = (a + b) / (7.5 + 3.5);

    std::printf("MEDIA = %.5f\n", mediaAluno);

    return 0;
}
