#pragma once


class ScopedPtr {
public:
    explicit ScopedPtr(int* ptr = nullptr): ptr(ptr) {}
    ~ScopedPtr() { delete ptr; }

    int* operator->() const { return ptr; }
    int& operator*() const { return *ptr; }
    int* get() const { return ptr; }

    void reset(int* newptr) { this->ptr = newptr; }
    int release();

private:
    ScopedPtr(const ScopedPtr& ptr);
    ScopedPtr& operator=(const ScopedPtr& ptr);

    int* ptr;
};