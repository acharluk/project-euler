#include <iostream>

bool checkPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}

int main() {
    int largest = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            int result = i * j;
            if (checkPalindrome(result)) {
                if (result > largest) {
                    largest = result;
                }
            }
        }
    }

    std::cout << largest << std::endl;
}