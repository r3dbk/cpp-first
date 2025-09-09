// Подключаем библиотеку ввода и вывода
#include <iostream>

// Главная функция
int main() {
    // Объявляем переменные для чисел
    int a, b;
    // Получаем и сохраняем в переменную первое число
    std::cout << "Please enter the first number:\n";
    std::cin >> a;
    // Получаем и сохраняем в переменную второе число
    std::cout << "Please enter the second number:\n";
    std::cin >> b;
    // Выводим результат сложения двух чисел
    std::cout << "A + B = ";
    std::cout << a + b;
}
