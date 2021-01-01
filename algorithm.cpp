#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

int main()
{
    std::vector<double> numbers{45, -5, 65, 87, 5.4, 23, 2, 1, 14, 14, 5};
    for (size_t i{0}; i < numbers.size(); ++i)
        for (size_t k{numbers.size() - 1}; k > i; --k)
            if (numbers[i] > numbers[k])
            {
                double cur_pos{numbers[k]};
                numbers[k] = numbers[i];
                numbers[i] = cur_pos;
            }
}
