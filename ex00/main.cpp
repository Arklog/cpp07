//
// Created by pierre on 6/30/24.
//

#include <typeinfo>
#include <iostream>
#include "whatever.hpp"

template<typename T>
void test(T a, T b) {
    std::cout << "testing for type: " << typeid(T).name() << std::endl;

    std::cout << "a: " << a << ", b: " << b << std::endl;
    swap(a, b);
    std::cout << "a: " << a << ", b: " << b << std::endl;

    std::cout << "min: " << min(a, b) << std::endl;
    std::cout << "max: " << max(a, b) << std::endl;

    std::cout << std::endl;
}

int main()
{
    test(5, 6);
    test(.5f, .6f);
    test('a', 'b');
    test("hello", "world");
    test<const char *>("test", "world");
}