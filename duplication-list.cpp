#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
class Solution {
public:
		bool containsDuplicate(vector<int>& nums) {
				sort(nums.begin(),nums.end());
				for (int i = 1; i< nums.size(); i++){
						if (nums[i-1] == nums[i])
						return true;
				}
				return false;
		}
};