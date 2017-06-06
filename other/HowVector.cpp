//
// Created by admin on 2017/6/6.
//
#include<iostream>
#include<map>
#include<vector>
using namespace std;
vector<int> twoSum(const vector<int> &nums, int target)
{
	vector<int> res;
	map<int, int> M;
	for (int i = 0; i < nums.size(); i++)
	{
		M[nums[i]] = i;
	}
	for (int i = 0; i < nums.size(); i++)
	{
		int tmp = target - nums[i];
		if ((M.find(tmp) != M.end()) && (M[tmp] != i))
		{
			res.push_back(i);
			res.push_back(M[tmp]);
			break;
		}
	}
	return res;
}
/*
int main()
{
	for (auto i : twoSum(vector<int>{2, 7, 11, 15}, 9)) cout << i << '\t';
	cout << endl;
	for (auto i : twoSum(vector<int>{3, 2, 4}, 6))	cout << i << '\t';
	cout << endl;
	return 0;
}

*/

