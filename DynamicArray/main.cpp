#include <iostream>

#include "DynamicArray.hpp"


int main()
{
    DynamicArray array;
    array.Add(2);
    array.Add(15.8);
    array.Add(292);
    array.Add(637);
    array.Add(1.67);

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << array.GetAt(i) << " ";
    }

    return 0;
}