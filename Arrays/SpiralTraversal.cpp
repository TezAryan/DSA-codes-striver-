  // here n is the total element in a single row
   // here m is the totol row but it is also the size of matrix


 #include<bits/stdc++.h>
using namespace std;

// Function to return the elements of the matrix in spiral order
vector<int> spiralMatrix(vector<vector<int>> &mat) {
    if (mat.empty() || mat[0].empty()) {
        return {}; // Handle the case for an empty matrix
    }
    
    int n = mat.size();         // Number of rows
    int m = mat[0].size();      // Number of columns

    int left = 0, right = m - 1;   // Column boundaries
    int top = 0, bottom = n - 1;   // Row boundaries
    vector<int> ans;

    while (top <= bottom && left <= right) {
        // Traverse from left to right
        for (int i = left; i <= right; i++) {
            ans.push_back(mat[top][i]);
        }
        top++; // Move top boundary down

        // Traverse from top to bottom
        for (int i = top; i <= bottom; i++) {
            ans.push_back(mat[i][right]);
        }
        right--; // Move right boundary left

        if (top <= bottom) {
            // Traverse from right to left
            for (int i = right; i >= left; i--) {
                ans.push_back(mat[bottom][i]);
            }
            bottom--; // Move bottom boundary up
        }

        if (left <= right) {
            // Traverse from bottom to top
            for (int i = bottom; i >= top; i--) {
                ans.push_back(mat[i][left]);
            }
            left++; // Move left boundary right
        }
    }

    return ans;
}

int main() {
    // Input matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Get the spiral order
    vector<int> result = spiralMatrix(matrix);

    // Print the result
    cout << "Spiral Order: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
