#include <iostream>

// Используем std:: перед cout, cin, endl, так как "using namespace std;" не видно на скриншоте
// Если вы хотите избежать этого, добавьте "using namespace std;" после #include

int main() {

    int n, i;
    float sum = 0.0;
    float l = 0.0;


    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    for (i = 1; i <= n; i++) {



            l =  (i % 2 == 0)? -1 / (float)(2*i -1) : 1 / (float)(2*i -1);




            sum +=  l;


    }

    std::cout << "\n Pis " << 4*sum << std::endl;

    // Добавим return 0; для корректного завершения программы
    return 0;
}