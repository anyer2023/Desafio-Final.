#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int sumPos = 0, sumNeg = 0, countPos = 0, countNeg = 0;

    // Read 10 numbers from user
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> numbers[i];
    }

    // Calculate sum and count of positive and negative numbers
    for (int i = 0; i < 10; i++) {
        if (numbers[i] > 0) {
            sumPos += numbers[i];
            countPos++;
        } else if (numbers[i] < 0) {
            sumNeg += numbers[i];
            countNeg++;
        }
    }

    // Calculate and display average of positive and negative numbers
    if (countPos > 0) {
        cout << "Average of positive numbers: " << sumPos/double(countPos) << endl;
    } else {
        cout << "No positive numbers" << endl;
    }

    if (countNeg > 0) {
        cout << "Average of negative numbers: " << sumNeg/double(countNeg) << endl;
    } else {
        cout << "No negative numbers" << endl;
    }

    return 0;
}
