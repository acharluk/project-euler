#include <iostream>
#include <cmath>

int main() {
    long number = 600851475143;
    long factor = 0;

    while (number > factor) {
        factor = [number]() {
            for (long i = 2; i < sqrtl(number); ++i) {
                if (number % i == 0) {
                    return i;
                }
            }
            return number;
        }();

        number /= factor;
    }

    std::cout << factor << std::endl;
}