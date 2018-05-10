#include <iostream>

int main() {
    int term1 = 1;
    int term2 = 2;
    int sum = 0;

    while (term2 < 4000000) {
        if (term2 % 2 == 0) {
            sum += term2;
        }

        int tmp = term2;
        term2 += term1;
        term1 = tmp;
    }

    std::cout << sum << std::endl;
}