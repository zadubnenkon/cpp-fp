#include <iostream>

int main(int argc, char const *argv[])
{
    /* Логический тип */

    bool isAlive{true};
    bool isDead{false};

    std::cout << "isAlive: " << isAlive << "\n"; // isAlive: 1
    std::cout << "isDead: " << isDead << "\n";   // isDead: 0

    /* Целочисленные типы */

    signed char num1{-64};          // представляет один символ. Занимает в памяти 1 байт (8 бит). Может хранить любой значение из диапазона от -128 до 127
    unsigned char num2{64};         // представляет один символ. Занимает в памяти 1 байт (8 бит). Может хранить любой значение из диапазона от 0 до 255
    short num3{-88};                // представляет целое число в диапазоне от –32768 до 32767. Занимает в памяти 2 байта (16 бит). Имеет псевдонимы short int, signed short int, signed short
    unsigned short num4{88};        // представляет целое число в диапазоне от 0 до 65535. Занимает в памяти 2 байта (16 бит). Имеет синоним unsigned short int
    int num5{-1024};                // представляет целое число. В зависимости от архитектуры процессора может занимать 2 байта (16 бит) или 4 байта (32 бита). Диапазон предельных значений соответственно также может варьироваться от –32768 до 32767 (при 2 байтах) или от −2 147 483 648 до 2 147 483 647 (при 4 байтах). Но в любом случае размер должен быть больше или равен размеру типа short и меньше или равен размеру типа long. Имеет псевдонимы signed int и signed.
    unsigned int num6{1024};        // представляет положительное целое число. В зависимости от архитектуры процессора может занимать 2 байта (16 бит) или 4 байта (32 бита), и из-за этого диапазон предельных значений может меняться: от 0 до 65535 (для 2 байт), либо от 0 до 4 294 967 295 (для 4 байт). Имеет псевдоним unsigned
    long num7{-2048};               // в зависимости от архитектуры может занимать 4 или 8 байт и представляет целое число в диапазоне от −2 147 483 648 до 2 147 483 647 (при 4 байтах) или от −9 223 372 036 854 775 808 до +9 223 372 036 854 775 807 (при 8 байтах). Занимает в памяти 4 байта (32 бита) или. Имеет псевдонимы long int, signed long int и signed long
    unsigned long num8{2048};       // представляет целое число в диапазоне от 0 до 4 294 967 295. Занимает в памяти 4 байта (32 бита). Имеет синоним unsigned long int
    long long num9{-4096};          // представляет целое число в диапазоне от −9 223 372 036 854 775 808 до +9 223 372 036 854 775 807. Занимает в памяти 8 байт (64 бита). Имеет псевдонимы long long int, signed long long int и signed long long.
    unsigned long long num10{4096}; // представляет целое число в диапазоне от 0 до 18 446 744 073 709 551 615. Занимает в памяти, как правило, 8 байт (64 бита). Имеет псевдоним unsigned long long int.

    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;
    std::cout << "num3 = " << num3 << std::endl;
    std::cout << "num4 = " << num4 << std::endl;
    std::cout << "num5 = " << num5 << std::endl;
    std::cout << "num6 = " << num6 << std::endl;
    std::cout << "num7 = " << num7 << std::endl;
    std::cout << "num8 = " << num8 << std::endl;
    std::cout << "num9 = " << num9 << std::endl;
    std::cout << "num10 = " << num10 << std::endl;

    /* Целочисленные литералы отличные от int */

    unsigned int num6{1024U};          // U - unsigned int
    long num7{-2048L};                 // L - long
    unsigned long num8{2048UL};        // UL - unsigned long
    long long num9{-4096LL};           // LL - long long
    unsigned long long num10{4096ULL}; // ULL - unsigned long long

    std::cout << "num6 = " << num6 << std::endl;
    std::cout << "num7 = " << num7 << std::endl;
    std::cout << "num8 = " << num8 << std::endl;
    std::cout << "num9 = " << num9 << std::endl;
    std::cout << "num10 = " << num10 << std::endl;
}
