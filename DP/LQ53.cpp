//
// Created by admin on 2017/6/6.
//
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int length = nums.size();

		if (length == 0)
		{
			return 0;
		}



		int max = nums[0];
		int temp = nums[0];

		for (int i = 1; i < length; i++)
		{
			int t = temp + nums[i];
			temp = t > nums[i] ? t : nums[i];
			if (temp>max)
			{
				max = temp;
			}
		}

		return max;
	}
};
/*
int main() {
	Solution solution;
	vector<int> v;
	//-2,1,-3,4,-1,2,1,-5,4
	v.push_back(-2);
	v.push_back(1);
	v.push_back(-3);
	v.push_back(4);
	v.push_back(-1);
	v.push_back(2);
	v.push_back(1);
	v.push_back(-5);
	v.push_back(4);
	int res = solution.maxSubArray(v);
	cout <<"Result is : "<< res<<endl;
	return 0;
}
*/
