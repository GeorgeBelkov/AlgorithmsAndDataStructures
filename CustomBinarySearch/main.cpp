#include <iostream>


int abs(int number)
{
		return (number >= 0) ? number : -number;
}


int CustomBinarySearch(const int* arr, int first, int last, int element)
{
    int temp = last;
    while (last - first > 1)
    {
        int mid = (first + last) / 2;
        if (element <= arr[mid])
            last = mid;
        else
            first = mid;
    }


    if (first == temp)
        return temp - 1;
    else
    {
        if (abs(arr[first] - element) > abs(arr[last] - element))
            return last;
        return first;
    }
}

int main() {
    int n, m;
    std::cin >> n;
    int* arr_a = new int[n];
    for (int i = 0; i < n; ++i)
        std::cin >> arr_a[i];
    std::cin >> m;
    int* arr_b = new int[m];
    for (int i = 0; i < m; ++i)
        std::cin >> arr_b[i];

    for (int i = 0; i < m; ++i)
    {
        std::cout << CustomBinarySearch(arr_a, 0, n, arr_b[i]) << " ";
    }

    return 0;
}