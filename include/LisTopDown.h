#ifndef LIS_TOP_DOWN_H
#define LIS_TOP_DOWN_H
#include "LisDP.h"

class LisTopDown : public LisDP
{
    void calculate() override
    {
        for (int i = static_cast<int>(numbers.size()) - 1; i >= 0; i--)
        {
            if (lisLengths[i] < 1)
            {
                lisHelper(i);
            }
        }
        obtainLis();
    }

    int lisHelper(const int n)
    {
        if (lisLengths[n] != -1)
            return lisLengths[n];
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (numbers[n] >= numbers[i])
            {
                auto lis_ending_with_i = lisHelper(i);
                if (lis_ending_with_i > max)
                {
                    prev[n] = i;
                    max = lis_ending_with_i;
                }
            }
        }
        lisLengths[n] = max + 1;
        return lisLengths[n];
    }
};
#endif //LIS_TOP_DOWN_H
