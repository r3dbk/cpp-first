// Подключаем библиотеку ввода и вывода "iostream"
#include <iostream>
// Кузнецов Святослав Владимирович ИНБО-31-25

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
    // Выводим результаты
    std::cout << a + b << " ";
    std::cout << a - b << " ";
    std::cout << a * b << " ";
    std::cout << a / b << " ";
}