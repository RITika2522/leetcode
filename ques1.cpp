#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> d;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int complement = target - num;

            if (d.find(complement) != d.end()) {
                return { d[complement], i };
            }

            d[num] = i;
        }

        return {};
    }
};

int main() {
    Solution sol;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);

    cout << "Indices: ";
    for (int idx : result) {
        cout << idx << " ";
    }

    return 0;
}
