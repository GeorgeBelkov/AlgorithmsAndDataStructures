#include "DynamicArray.hpp"

#ifndef default_size

#define default_size 1

#endif // !default_size


double DynamicArray::GetAt(unsigned int index) const
{
    if (index >= realSize)
        false; // обработка случая
    else
        return buffer[index];
}


void DynamicArray::Add(double element)
{
    if (realSize == bufferSize)
        Grow();
    buffer[realSize] = element;
    realSize += 1;
}


void DynamicArray::Grow()
{
    bufferSize = bufferSize > 0 ? bufferSize << 1 : default_size;
    double* newBuffer = new double[bufferSize];
    for (unsigned int i = 0; i < realSize; ++i)
        newBuffer[i] = buffer[i];
    delete[] buffer;
    buffer = newBuffer;
}