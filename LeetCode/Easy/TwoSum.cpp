// Normal Approach
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int len = nums.size();
        for (int i = 0; i < len; i++)
        {
            for (int j = i + 1; j < len; j++)
            {
                int complement = target - nums[i];
                if (nums[j] == complement)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
// New Approach

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> previousValues;
        int len = nums.size();
        for (int i = 0; i < len; i++)
        {
            int currentNumber = nums[i];
            int neededValue = target - currentNumber;
            if (previousValues.find(neededValue) != previousValues.end())
            {
                return vector<int>{previousValues[neededValue], i};
            }
            else
            {
                previousValues[currentNumber] = i;
            }
        }
        return {};
    }
};