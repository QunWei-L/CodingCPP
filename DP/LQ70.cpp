//
// Created by admin on 2017/6/8.
//
#include <iostream>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1 || n == 2) {
            return n;
        }
        int nums[n];
        nums[0] = 1;
        nums[1] = 2;
        for (int i = 2; i < n; ++i) {
            nums[i] = nums[i - 1] + nums[i - 2];
        }
        return nums[n-1];
    }
};


int main() {

    Solution solution;

    cout << solution.climbStairs(4) << endl;

    return 0;
}
