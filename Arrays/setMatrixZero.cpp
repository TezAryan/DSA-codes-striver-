#include <bits/stdc++.h>
using namespace std;

// Function to mark an entire row with -1 (except elements already 0)
void markRow(int arr[][100], int n, int m, int row) {
    for (int j = 0; j < m; j++) {
        if (arr[row][j] != 0) {
            arr[row][j] = -1;
        }
    }
}

// Function to mark an entire column with -1 (except elements already 0)
void markColumn(int arr[][100], int n, int m, int col) {
    for (int i = 0; i < n; i++) {
        if (arr[i][col] != 0) {
            arr[i][col] = -1;
        }
    }
}

// Function to set matrix rows and columns to zero where an element is zero
void setMatrixZero(int arr[][100], int n, int m) {
    // Traverse the matrix and mark rows and columns
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                markRow(arr, n, m, i);
                markColumn(arr, n, m, j);
            }
        }
    }

    // Replace all -1 with 0 to finalize the result
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == -1) {
                arr[i][j] = 0;
            }
        }
    }
}

int main() {
    int n, m;
    cout << "Enter the dimensions of the matrix (n m): ";
    cin >> n >> m;

    int arr[100][100]; // Assuming a maximum size of 100x100 for simplicity
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    // Set rows and columns to zero based on the condition
    setMatrixZero(arr, n, m);

    // Print the modified matrix
    cout << "Modified matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}



//better soln 

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix , int n , int m) {
    int row[n] = {0};
    int col[m] = {0};

    for(int i =0;i<n;i++) {
        for(int j =0;j<m;j++) {
            if(arr[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i =0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(row[i] || col[j]) {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

// optimal soln 




    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();        // Number of rows
        int m = matrix[0].size();     // Number of columns
        int col0 = 1;                 // To track if the first column needs to be zeroed

        // Step 1: Mark rows and columns that need to be set to zero
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0; // Mark the row
                    if (j != 0)
                        matrix[0][j] = 0; // Mark the column
                    else
                        col0 = 0; // Mark the first column
                }
            }
        }

        // Step 2: Use markers to set matrix elements to zero (excluding the first row and column)
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 3: Handle the first row
        if (matrix[0][0] == 0) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }

        // Step 4: Handle the first column
        if (col0 == 0) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }


int main() {
    Solution sol;
    
    // Example input
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    sol.setZeroes(matrix);

    cout << "\nModified Matrix:" << endl;
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
