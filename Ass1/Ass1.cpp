#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num == 0) {
        cout << "0";
        return 0;
    }

    int binary[32];  //int is 32 bites.
    int i = 0;

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    cout << "The Binary is: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
    return 0;
}
