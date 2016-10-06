#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main() {
    int a; // ввод переменной
    // вывод выбора на экран
    std::cout << "Введите '1' , чтобы узнать телефоны экстренных служб" << std::endl;
    std::cout << "Введите '2' , чтобы узнать телефон справочной службы" << std::endl;
    std::cout << "Введите '3' , чтобы оставить положительный отзыв" << std::endl;
    std::cout << "Введите '4' , чтобы оставить отрицательный отзыв" << std::endl;
    // ввод соответсвующего числа
    std::cout << "Ввод: ";
    std::cin >> a;
    switch (a) {
        case 1: // вывод информации при нажатии 1
            std::cout << "Пожарная (МЧС) - 01" << std::endl;
            std::cout << "Полиция - 02" << std::endl;
            std::cout << "Скорая медицинская помощь - 03" << std::endl;
            std::cout << "Аварийная служба газовой сети - 04" << std::endl;
            std::cout << "Единая служба спасения - 112" << std::endl;
            break;
        case 2: // вывод информации при вводе 2
            std::cout << "Телефон справочной службы - (495)777-77-77" << std::endl;
            break;
        case 3: // вывод информации при вводе 3
            std::cout << "Спасибо за положительный отзыв!" << std::endl;
            break;
        case 4: // вывод информации при вводе 4
            std::cout << "Спасибо! Мы учтем ваш отзыв." << std::endl;
            break;
        default: // вывод информации при вводе остальных цифр
            std::cout << "Такой команды не существует" << std::endl;
    }
}