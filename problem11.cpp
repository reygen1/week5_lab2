#include<iostream>
using namespace std;

int main() {
    int neg = 0;
    int pos = 0;
    int sum = 0;
    int total = 0;

    while (true) {
        int n;
        cin >> n;

        if (n == 0) {
            break;
        }

        if (n < 0) {
            neg++;
        } else {
            pos++;
        }

        sum += n;
        total++;
    }

    float av = 0.0f;
    if (total > 0) {

        av = static_cast<float>(sum) / total;
    }

    cout << "The number of positive is " << pos << endl;
    cout << "The number of negative is " << neg << endl;
    cout << "The total is " << total << endl;
    cout << "The avarage is  " << av << endl;

    return 0;
}