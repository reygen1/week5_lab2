
#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int n;
    //ask from user to input the number
    cout << "Enter the number: ";
    cin >> n;

    //print the digits in reverse order

    while (n > 0) {

      sum += n % 10;
 n /= 10;


    }
    cout << sum << endl;
    cout << endl;

    return 0;
}