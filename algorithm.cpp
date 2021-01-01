#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

int main()
{
    std::vector<double> numbers{45, -5, 65, 87, 5.4, 23, 2, 1, 14, 14, 5};

    for (double i{0}; i <= (numbers.size() - 1); ++i)
        for (double k{static_cast<double>((numbers.size() - 1))}; k > i; --k)
            if (numbers[i] > numbers[k])
            {
                double cur_pos{numbers[k]};
                numbers[k] = numbers[i];
                numbers[i] = cur_pos;
            }

    for (auto nums : numbers)
        std::cout << nums << std::endl;
}
