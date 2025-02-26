#ifndef LIS_H
#define LIS_H
#include <vector>

class Lis
{
protected:
    std::vector<int> numbers;
    std::vector<int> lis;
    virtual void calculate() = 0;

public:
    virtual void initialize(const std::vector<int>& nums)
    {
        numbers = nums;
        lis.clear();
        lis.resize(0);
        calculate();
    }

    std::size_t getLisLength() const
    {
        return lis.size();
    }

    std::vector<int> getLis() const
    {
        return lis;
    }

    virtual ~Lis() = default;
};
#endif //LIS_H
