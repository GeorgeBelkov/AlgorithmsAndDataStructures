#pragma once


class DynamicArray
{
private:
    unsigned int bufferSize;
    unsigned int realSize;
    double* buffer;

    void Grow();

public:
    DynamicArray(): bufferSize(0), realSize(0), buffer(nullptr) { }
    ~DynamicArray() { delete[] buffer; }

    double GetAt(unsigned int index) const;
    double operator[] (unsigned int index) const { return GetAt(index); }

    void Add(double element);
};