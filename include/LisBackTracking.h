#ifndef LISBACKTRACKING_H
#define LISBACKTRACKING_H
#include <vector>
#include "Lis.h"

class LisBackTracking : public Lis
{
    std::vector<int> current;

    void calculate() override
    {
        current.clear();
        current.resize(0);
        calculate(0);
    }

    void calculate(const int k)
    {
        if (k == numbers.size())
        {
            if (current.size() > lis.size())
                lis = current;
            return;
        }
        if (current.empty() || current.back() < numbers[k])
        {
            current.push_back(numbers[k]);
            calculate(k + 1);
            current.pop_back();
        }
        calculate(k + 1);
    }
};
#endif //LISBACKTRACKING_H
