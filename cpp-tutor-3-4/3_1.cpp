// Example program
#include <iostream>
#include <string>
using namespace std;
// Кузнецов Святослав Владимирович ИНБО-31-25

int main()
{
  // Инициализируем переменные и даём пользователю возможность их заполнить
  
  // Начинаем отсчёт с первого(!) дня
  int day = 1;
  int x, y;
  cout << "Write X: \n";
  cin >> x;
  cout << "Write Y: \n";
  cin >> y;
  while(x <= y) {
      cout << "x < y, day " << day << ", summ = " << x << "\n";
      x*=1.1;
      }
  cout << "Day x :) is " << day << ", srok = " << x;
}