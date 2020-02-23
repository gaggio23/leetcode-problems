#include <vector>

class Solution 
{
public:
    static std::vector<int> decompressRLElist(const std::vector<int>& nums)
    {
        std::vector<int> res;
        for (int i = 0; i < nums.size() - 1; i += 2)
        {
            for (int j = 0; j < nums[i]; ++j)
            {
                res.push_back(nums[i + 1]);
            }
        }
        return res;
    }
};