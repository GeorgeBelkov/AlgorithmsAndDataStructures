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

    // перегрузка операторов []
    double GetAt(unsigned int index) const;

    void Add(double element);
};