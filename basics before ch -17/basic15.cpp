#include <iostream>
using namespace std;

// Function to calculate the sum of digits of a number
int SumOfDigit(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10; // Add the last digit to sum
        num /= 10;       // Remove the last digit from num
    }
    return sum;
}

int main() {
    int n, k;
    cout << "Enter the number of results you want (n) and the target digit sum (k): ";
    cin >> n >> k;

    int num = 1; // Start checking from the number 1
    while (true) {
        int sod = SumOfDigit(num); // Get the sum of digits for current number
        if (sod == k) {            // Check if it matches the target digit sum
            cout << num << endl;   // Print the number
            n--;                   // Decrease the count of results needed
        }
        if (n == 0) break;         // Stop once we've found enough numbers
        num++;                     // Move to the next number
    }

    return 0;
}
