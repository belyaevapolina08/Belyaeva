#include <iostream>
using namespace std;
int main () {
    int L;
    int M;
    cout << "Введите L (см): " << endl;
    cin >> L;
    M = L / 100;
    cout << L << " см = " << M << " м" << endl;
    return 0;
}