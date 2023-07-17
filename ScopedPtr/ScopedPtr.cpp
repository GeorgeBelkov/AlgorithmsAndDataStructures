#include "ScopedPtr.hpp"


int* ScopedPtr::release()
{
    int* temp = this->ptr;
    this->ptr = nullptr;
    return temp;
}


void ScopedPtr::reset(int* newptr = nullptr)
{
    int* temp = this->ptr;
    delete temp;
    this->ptr = newptr;
}