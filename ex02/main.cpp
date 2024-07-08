//
// Created by pierre on 6/30/24.
//

#include "Array.hpp"
#include <iostream>

template<typename T>
void printArr(const Array<T> &arr) {
    for (size_t i = 0; i < arr.size(); ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main()
{
    Array<int> arr(5);

    printArr(arr);

    for (int i = 0; i < 10; ++i) {
        try {
            arr[i] = i;
        } catch (const std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }

    printArr(arr);

    return (0);
}