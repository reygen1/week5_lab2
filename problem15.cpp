#include <iostream>


int main() {

    int n, i;
    float sum = 0.0;


    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    for (i = 1; i <= n; i++) {

        if (i < n) {
            std::cout << "1/" << i << " + ";
            sum += 1 / (float)i;
        }

        if (i == n) {
            std::cout << "1/" << i;
            sum += 1 / (float)i;
        }

    }

    std::cout << "\n The Sum is " << sum << std::endl;

    return 0;
}