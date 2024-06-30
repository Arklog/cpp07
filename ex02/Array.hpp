//
// Created by pierre on 6/30/24.
//

#ifndef CPP07_ARRAY_HPP
#define CPP07_ARRAY_HPP

#include <cstdlib>
#include <stdexcept>

template<typename T>
class Array {
private:
    T *_arr;
    unsigned int _size;

public:
    Array();

    Array(unsigned int n);

    Array(const Array<T> &src);

    ~Array();

    Array<T> &operator=(const Array<T> &src);

    const T& operator[](unsigned int i) const {
        if (i >= _size) {
            throw std::out_of_range("Index out of range");
        }
        return _arr[i];
    }

    T& operator[](unsigned int i) {
        if (i >= _size) {
            throw std::out_of_range("Index out of range");
        }
        return _arr[i];
    }

    unsigned int size() const {
        return _size;
    }
};

template<typename T>
Array<T>::Array() : _arr(NULL), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _size(n) {
    for (unsigned int i = 0; i < n; i++) {
        _arr[i] = T();
    }
}

template<typename T>
Array<T>::Array(const Array<T> &src) : _arr(new T[src._size]), _size(src._size) {
    for (unsigned int i = 0; i < src._size; i++) {
        _arr[i] = src._arr[i];
    }
}

template<typename T>
Array<T>::~Array() {
    delete[] _arr;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &src) {
    if (this == &src) {
        return *this;
    }

    delete[] _arr;
    _arr = new T[src._size];
    _size = src._size;

    for (unsigned int i = 0; i < src._size; i++) {
        _arr[i] = src._arr[i];
    }

    return *this;
}

#endif //CPP07_ARRAY_HPP
