#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Введите число: ";
    cin >> n;

    for (int i = n + 1; i < 0; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    cout << "Сумма отрицательных нечетных чисел больше " << n << ": " << sum << endl;

    return 0;
}
