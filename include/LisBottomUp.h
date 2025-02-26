#ifndef LIS_BOTTOM_UP_H
#define LIS_BOTTOM_UP_H
#include <algorithm>

#include "LisDP.h"


class LisBottomUp : public LisDP
{
    void calculate() override
    {
        for (std::size_t k = 0; k < numbers.size(); ++k)
        {
            lisLengths[k] = 1;
            for (std::size_t j = 0; j < k; ++j)
                if (numbers[k] >= numbers[j] && lisLengths[j] >= lisLengths[k])
                {
                    prev[k] = static_cast<int>(j);
                    lisLengths[k] = lisLengths[j] + 1;
                }
        }
        obtainLis();
    }
};
#endif //LIS_BOTTOM_UP_H
