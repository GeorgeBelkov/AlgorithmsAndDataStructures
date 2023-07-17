#include <iostream>
#include "ScopedPtr.hpp"


void test(int* pointer, int* new_pointer)
{
    ScopedPtr ptr(pointer);
    std::cout << "operator* : " << *ptr << std::endl;
    std::cout << "get() method : " << ptr.get() << std::endl;
    ScopedPtr ptr2(pointer);
    ptr.reset(new_pointer);
    std::cout << "reset() method : " << *ptr << std::endl;
}


int main()
{
    int* pointer = new int(10);
    int* new_pointer = new int(20);
    std::cout << "ptr : " << *pointer << ", ptr2 : " << *new_pointer << std::endl;
    
    test(pointer, new_pointer);

    std::cout << "ptr : " << *pointer << ", ptr2 : " << *new_pointer << std::endl;
    return 0;
}