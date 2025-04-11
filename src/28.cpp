#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer n: ";
    cin >> n;
    if (n % 2 == 0) {
        for (int i = 1; i <= n / 2; i++) {
            cout << i * (i + 1) / 2 << endl;
        }
    } else {
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                cout << i * (i - 1) / 2 << endl;
                break;
            }
        }
    }

    return 0;
}
