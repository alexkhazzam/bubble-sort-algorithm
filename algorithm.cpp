#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <string>
#include <vector>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <climits>

int main()
{
    std::vector<int> numbers{45, 65, 87, 23, 2, 1, 14, 14, 5};

    for (unsigned int i{0}; i <= (numbers.size() - 1); ++i)
        for (int k{static_cast<int>((numbers.size() - 1))}; k > i; --k)
            if (numbers[i] > numbers[k])
            {
                int cur_pos{numbers[k]};
                numbers[k] = numbers[i];
                numbers[i] = cur_pos;
            }

    for (auto nums : numbers)
        std::cout << nums << std::endl;
}
