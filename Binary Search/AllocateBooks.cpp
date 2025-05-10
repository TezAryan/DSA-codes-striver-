#include <bits/stdc++.h>
using namespace std;

// Helper function: count how many students are required if max pages is 'pages'
int countStudents(vector<int>& nums, int pages) {
    int students = 1;
    int currentPages = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (currentPages + nums[i] <= pages) {
            currentPages += nums[i];
        } else {
            students++;
            currentPages = nums[i];
        }
    }
    return students;
}

// Main function to find the minimum possible max pages
int findPages(vector<int>& nums, int m) {
    int n = nums.size();
    if (m > n) return -1; // Not enough books

    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int requiredStudents = countStudents(nums, mid);

        if (requiredStudents > m) {
            low = mid + 1; // Too few pages per student, need to allow more
        } else {
            result = mid;  // Possible solution, try to minimize further
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int n, m;
    cout << "Enter number of books: ";
    cin >> n;

    vector<int> pages(n);
    cout << "Enter number of pages in each book: ";
    for (int i = 0; i < n; i++) {
        cin >> pages[i];
    }

    cout << "Enter number of students: ";
    cin >> m;

    int result = findPages(pages, m);

    if (result == -1) {
        cout << "Allocation not possible." << endl;
    } else {
        cout << "Minimum number of pages a student has to read is: " << result << endl;
    }

    return 0;
}
