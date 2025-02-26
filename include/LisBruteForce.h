#ifndef LIS_BRUTE_FORCE_H
#define LIS_BRUTE_FORCE_H
#include <vector>
#include <algorithm>
#include "Lis.h"

class LisBruteForce : public Lis
{
    void calculate() override
    {
        std::vector<int> current;
        for (unsigned int bits = 0; bits < (1 << numbers.size()); ++bits)
        {
            current.clear();
            for (int i = 0; i < numbers.size(); ++i)
            {
                if (bits & (1 << i))
                {
                    current.push_back(numbers[i]);
                }
            }
            if (std::is_sorted(current.cbegin(), current.cend()))
            {
                if (current.size() > lis.size())
                {
                    lis = current;
                }
            }
        }
    }
};
#endif //LIS_BRUTE_FORCE_H
