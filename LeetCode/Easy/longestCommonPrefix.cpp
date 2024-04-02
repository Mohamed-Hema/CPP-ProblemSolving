#include <vector>
#include <string>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
            return "";

        string answer = "";
        int max = strs[0].size();
        int maxlength = strs.size();
        for (int i = 0; i < max; i++)
        {
            char x = strs[0][i];
            for (int j = 0; j < maxlength; j++)
            {
                if (strs[j][i] != x)
                {
                    return answer;
                }
            }
            answer += x;
        }
        return answer;
    }
};
