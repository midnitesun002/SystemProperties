#include <QCoreApplication>

#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "Size of bool: " << sizeof(bool) << '\n';
    std::cout << "Size of signed int: " << sizeof(signed int) << '\n';
    std::cout << "Size of unsigned int: " << sizeof(unsigned int) << '\n';
    std::cout << "Size of int: " << sizeof(int) << '\n';
    std::cout << "Size of signed short: " << sizeof(signed short) << '\n';
    std::cout << "Size of unsigned short: " << sizeof(unsigned short) << '\n';
    std::cout << "Size of short: " << sizeof(short) << '\n';
    std::cout << "Size of signed long: " << sizeof(signed long) << '\n';
    std::cout << "Size of unsigned long: " << sizeof(unsigned long) << '\n';
    std::cout << "Size of long: " << sizeof(long) << '\n';
    std::cout << "Size of signed char: " << sizeof(signed char) << '\n';
    std::cout << "Size of unsigned char: " << sizeof(unsigned char) << '\n';
    std::cout << "Size of char: " << sizeof(char) << '\n';
    std::cout << "Size of long long: " << sizeof(long long) << '\n';

    return 0;
}
