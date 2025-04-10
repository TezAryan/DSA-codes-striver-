#include <iostream>
using namespace std;

int floorSqrt(int n) {
    int low = 1; 
    int high = n; 
    while (low <= high) {
        long long mid = (low + high) / 2;
        long long ans = mid * mid;
        
        if (ans <= n) {
            low = mid + 1;
        } else { 
            high = mid - 1;
        }
    }
    return high;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = floorSqrt(n);
    cout << "Floor square root of " << n << " is " << result << endl;

    return 0;
}
