//2614. Prime In Diagonal

// You are given a 0-indexed two-dimensional integer array nums.

// Return the largest prime number that lies on at least one of the diagonals of nums. In case, no prime is present on any of the diagonals, return 0.

// Note that:

// An integer is prime if it is greater than 1 and has no positive integer divisors other than 1 and itself.
// An integer val is on one of the diagonals of nums if there exists an integer i for which nums[i][i] = val or an i for which nums[i][nums.length - i - 1] = val.
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int maxNum = 0;
        for (const auto& row : nums) {
            maxNum = max(maxNum, *max_element(row.begin(), row.end()));
        }
        vector<bool> prime(maxNum + 1, true);
        for (int p = 2; p * p <= maxNum; p++) {
            if (prime[p] == true) {
                for (int i = p * p; i <= maxNum; i += p)
                    prime[i] = false;
            }
        }
        int ex = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j || i + j == n - 1){
                    if(prime[nums[i][j]]){
                        ex = max(ex, nums[i][j]);
                    }
                }
            }
        }
        return ex;
    }
};
int main() {
    vector<vector<int>> nums = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Solution solution;
    int result = solution.diagonalPrime(nums);

    cout << "Largest prime number on diagonals: " << result << endl;

    return 0;
}
