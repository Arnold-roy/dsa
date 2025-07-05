#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int reversedarr[n]; // Correctly declaring the array
    k = k % n; // To handle cases where k >= n

    for (int i = 0; i < n; i++) {
        int newindex = i - k; // Calculate the new index
        if (newindex < 0) {
            newindex += n; // Wrap negative indices
        }
        reversedarr[newindex] = arr[i]; // Assign value to the correct position
    }

    for (int i = 0; i < n; i++) {
        cout << reversedarr[i] << " "; // Add space for readability
    }
    cout << endl; // Newline for output clarity
    return 0;
}
