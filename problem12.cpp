#include <iostream>
using namespace std;
int main () {
  int n ;
  cin >> n;
  int count = 0;

  for (int i = 1; i <= n*n; i++) {

    cout << "*" << "";
    count ++;

    if (count % n == 0) {
      cout << endl;
    }

  }
}