#include <iostream>

bool isPrime(int n)
{
    if(n == 1)
        return false;
    for(int i = 2; i * i <= n; ++i)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
    int i = 2;
    while(n > 1)
    {
        if(isPrime(i)){
            while(n % i == 0)
            {
                std::cout << i << " ";
                n /= i;
            }
        }
        i++;
    }
    return 0;
}