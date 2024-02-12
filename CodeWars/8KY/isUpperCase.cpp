#include <string>

bool is_uppercase(const std::string &s)
{
    for (char c : s)
    {
        if (std::islower(c))
        {
            return false;
        }
    }
    return true;
}
