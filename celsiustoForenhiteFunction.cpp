#include <iostream>
using namespace std;

float Celsius(float x) {
  float result;

  result = x * 2 + 30;

  return result;
}

int main () {
  float cal;

  cout << "Enter Celsius Value: ";
  cin >> cal;

  cout << Celsius(cal);

  return 0;
}