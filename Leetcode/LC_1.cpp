// 217. Contains Duplicate

#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if(seen.count(num)) {
                return true;
            }
            else {
                return false;
                seen.insert(num);
            }
        }
    }
};