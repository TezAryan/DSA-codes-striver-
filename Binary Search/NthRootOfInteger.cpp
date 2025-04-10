#include <iostream>
using namespace std;

// Helper function to check if mid^n == m, < m or > m
int func(int mid, int n, int m) {
    long long ans = 1; 
    for(int i = 0; i < n; i++) {
        ans = ans * mid;
        if(ans > m) return 2; // mid^n > m
    }
    if(ans == m) return 1;     // mid^n == m
    return 0;                  // mid^n < m
}

// Function to find the nth root of m
int nthRoot(int n, int m) {
    int low = 1, high = m;

    while(low <= high) {
        int mid = (low + high) / 2;
        int midN = func(mid, n, m);

        if(midN == 1)
            return mid;          // found exact root
        else if(midN == 2)
            high = mid - 1;      // mid too big
        else
            low = mid + 1;       // mid too small
    }

    return -1; // No integer nth root exists
}

// Main function to test
int main() {
    int n, m;
    cout << "Enter n (root): ";
    cin >> n;
    cout << "Enter m (number): ";
    cin >> m;

    int result = nthRoot(n, m);
    if(result == -1)
        cout << "No integer " << n << "th root for " << m << endl;
    else
        cout << "The " << n << "th root of " << m << " is " << result << endl;

    return 0;
}
