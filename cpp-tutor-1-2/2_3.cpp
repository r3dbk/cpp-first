// Подключаем библиотеку ввода и вывода "iostream"
#include <iostream>
// Подключаем библиотеку для математичеких вычислений "cmath"
#include <cmath>
// Кузнецов Святослав Владимирович ИНБО-31-25

// Главная функция
int main() {
    // Объявляем переменные для катетов треугольника
    int a, b;
    // Получаем и сохраняем в переменную первый катет
    std::cout << "Please enter the first side:\n";
    std::cin >> a;
    // Получаем и сохраняем в переменную второе число
    std::cout << "Please enter the second side:\n";
    std::cin >> b;
    // Выводим длину гипотенузу
    std::cout << "The hypotenuse of the triangle = ";
    std::cout << std::sqrt (a * a + b * b);
}
