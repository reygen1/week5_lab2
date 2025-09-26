
#include<iostream>
using namespace std;
int main() {

    float  rent = 1000;
    int sum = 0;

for (int i = 1; i <= 5; i++) {
    rent *= 1.03;
    sum += rent;
    cout << rent << endl;


}
    cout << sum << endl;

}
