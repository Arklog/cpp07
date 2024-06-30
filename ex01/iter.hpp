//
// Created by pierre on 6/30/24.
//

#ifndef CPP07_ITER_HPP
#define CPP07_ITER_HPP

template<typename T>
void iter(const T* arr, size_t len, void (*f)(const T&)) {
    for (size_t i = 0; i < len; i++) {
        f(arr[i]);
    }
}

template<typename T>
void iter(T* arr, size_t len, void (*f)(T&)) {
    for (size_t i = 0; i < len; i++) {
        f(arr[i]);
    }
}

#endif //CPP07_ITER_HPP
