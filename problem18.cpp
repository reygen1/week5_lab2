#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int decimal_result = 0;
    int base = 1;

    int temp = n;


    while (temp > 0) {

        int last_digit = temp % 10;


        temp = temp / 10;


        decimal_result += last_digit * base;


        base = base * 2;
    }


    cout << "Binary: " << n << " is Decimal: " << decimal_result << endl;

    return 0;
}