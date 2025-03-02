#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPerfect(n)) {
        cout << n << " is a perfect number.\n";
    } else {
        cout << n << " is not a perfect number.\n";
    }

    cout << "\nPerfect numbers between 1 and 10000 are: ";
    for (int i = 1; i <= 10000; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
