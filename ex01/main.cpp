//
// Created by pierre on 6/30/24.
//
#include <iostream>
#include "iter.hpp"

template <typename T>
void print(T const &x) {
    std::cout << x << " ";
}

template <typename T>
void print(T &x) {
    std::cout << x << " ";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    char arr2[] = {'a', 'b', 'c', 'd', 'e'};
    const int arr3[] = {6, 7, 8, 9, 10};
    const char arr4[] = {'f', 'g', 'h', 'i', 'j'};

    iter(arr, 5, print); std::cout << std::endl;
    iter(arr2, 5, print); std::cout << std::endl;
    iter(arr3, 5, print); std::cout << std::endl;
    iter(arr4, 5, print); std::cout << std::endl;
    return 0;
}