// Copyright 2022 UNN-IASR
#include <iostream>
#include "fun.h"

int main() {
    setlocale(LC_ALL, "Russian");

    std::cout << "faStr1 (количество слов без цифр):" << std::endl;
    std::cout << faStr1("abc 123 test45 hello world7 yes")
              << " (ожидается 3)" << std::endl;
    std::cout << faStr1("one two three")
              << " (ожидается 3)" << std::endl;
    std::cout << faStr1("a1 b2 c3")
              << " (ожидается 0)" << std::endl;
    std::cout << std::endl;

    std::cout << "faStr2 (количество слов из строчных латинских букв,"
              << " но первая заглавная):" << std::endl;
    std::cout << faStr2("Hello Cat A heLlo HELLO Hi7 Abc")
              << " (ожидается 4)" << std::endl;
    std::cout << faStr2("Bottle Water D")
              << " (ожидается 3)" << std::endl;
    std::cout << faStr2("bottle water drink1 Test1")
              << " (ожидается 0)" << std::endl;
    std::cout << std::endl;

    std::cout << "faStr3 (средняя длина слова в строке,"
              << " с округлением):" << std::endl;
    std::cout << faStr3("one three bonus")
              << " (ожидается 4)" << std::endl;
    std::cout << faStr3("A bb Ccc dddd")
              << " (ожидается 3)" << std::endl;
    std::cout << faStr3("   ")
              << " (ожидается 0)" << std::endl;

    return 0;
}
