#ifndef LIS_DP_H
#define LIS_DP_H
#include "Lis.h"

class LisDP : public Lis
{
protected:
    std::vector<int> lisLengths;
    std::vector<int> prev;

    void obtainLis()
    {
        auto max_index = std::max_element(lisLengths.begin(), lisLengths.end()) - lisLengths.begin();
        while (max_index >= 0)
        {
            lis.push_back(numbers[max_index]);
            max_index = prev[max_index];
        }
        std::reverse(lis.begin(), lis.end());
    }

public:
    void initialize(const std::vector<int>& nums) override
    {
        lisLengths.clear();
        lisLengths.resize(nums.size(), -1);
        prev.clear();
        prev.resize(nums.size(), -1);
        Lis::initialize(nums);
    }

    std::vector<int> obtainLisFrom(std::size_t index)
    {
        return {};
    }
};

#endif //LIS_DP_H
