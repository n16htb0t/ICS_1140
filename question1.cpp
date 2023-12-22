// Input: mat = [[1,2,3],
//               [4,5,6],
//               [7,8,9]]
// Output: 25
// Explanation: Diagonals sum: 1 + 5 + 9 + 3 + 7 = 25
// Notice that element mat[1][1] = 5 is counted only once.

// Example 2:

// Input: mat = [[1,1,1,1],
//               [1,1,1,1],
//               [1,1,1,1],
//               [1,1,1,1]]
// Output: 8

// Example 3:

// Input: mat = [[5]]
// Output: 5


#include <bits\stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int n = mat.size();
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += mat[i][i];
    }

   

    
    if (n % 2 == 1) {
        sum -= mat[n / 2][n / 2];
    }

    return sum;
}

int main() {
    vector<vector<int>> mat1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << diagonalSum(mat1) << endl; 

    vector<vector<int>> mat2 = {{1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    cout << diagonalSum(mat2) << endl; 
    vector<vector<int>> mat3 = {{5}};
    cout << diagonalSum(mat3) << endl; 
    return 0;
}
 