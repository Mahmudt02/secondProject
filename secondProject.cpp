#include <iostream>
#include <clocale> 

int main() {

    setlocale(LC_ALL, "Russian");


    int number;

    std::cout << "Введите число: ";
    std::cin >> number;

    std::cout << "Вы ввели: " << number << std::endl;

    return 0;
}