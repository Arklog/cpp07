//
// Created by pierre on 6/30/24.
//

#ifndef CPP07_WHATEVER_HPP
#define CPP07_WHATEVER_HPP

template<typename T>
void swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(const T& a, const T& b) {
    return a < b ? a : b;
}

template <typename T>
T max(const T& a, const T& b) {
    return a > b ? a : b;
}

#endif //CPP07_WHATEVER_HPP
