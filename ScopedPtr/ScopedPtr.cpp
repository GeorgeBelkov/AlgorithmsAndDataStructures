#include "ScopedPtr.hpp"


int ScopedPtr::release()
{
    int temp = *(this->ptr);
    this->ptr = nullptr;
    return temp;
}