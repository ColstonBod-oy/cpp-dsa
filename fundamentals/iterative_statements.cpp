#include <iostream>
using namespace std;
int main() {
    int number, positiveCount = 0, negativeCount = 0;
    cout << "Enter numbers (0 to stop): ";
    while (cin >> number && number != 0) {
        if (number > 0) {
            positiveCount++;
        } else {
            negativeCount++;
        }
    }
    cout << "Positive numbers: " << positiveCount << endl;
    cout << "Negative numbers: " << negativeCount << endl;
    return 0;
}