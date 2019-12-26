// function example
#include <iostream>
#include <math.h>
using namespace std;

float pythagoras_theorem(float a, float b) {
  float c;
  c = sqrt(a * a + b * b);
  return c;
}
// void function, no return values, just to do calculation or sth.
void printmessage() { cout << "I'm a void function! \n"; }

// passing parameters by reference

void duplicate(int &a, int &b, int &c) {
  a *= 5;
  b *= 7;
  c *= 6;
}
string concatenate(const string &a, const string &b) { return a + b; }
inline string concatenate1(const string &a, const string &b) { return a + b; }
long factorial(int a) {
  if (a > 1)
    return (a * factorial(a - 1));
  else
    return 1;
}
// declaring functions prototypes
void odd(int x);
void even(int x);

int main() {
  float h, p;
  h = pythagoras_theorem(12, 5);
  cout << "The hypotenuse is " << h << endl;
  cout << "The first result is " << h << '\n';
  cout << "The second result is " << pythagoras_theorem(6, 8) << '\n';
  cout << "The third result is " << pythagoras_theorem(2, 3) << '\n';
  p = 4 + pythagoras_theorem(3, 4);
  cout << "The fourth result is " << p << '\n';

  printmessage();
  int x = 1, y = 3, w = 7;
  duplicate(x, y, w);
  cout << "x=" << x << ", y=" << y << ", w=" << w << endl;
  cout << concatenate("I am krishna neupane ", "I love programming in c++.\n");
  cout << concatenate1("I am a graduate student ", "I work with Dr. Gothe.\n");
  int number = 9;
  cout << number << "! = " << factorial(number) << endl;
  ;
  int i;
  do {
    cout << "Please, enter number (0 to exit): ";
    cin >> i;
    odd(i);
  } while (i != 0);
  return 0;
}

void odd(int x) {
  if ((x % 2) != 0)
    cout << "It is odd.\n";
  else
    even(x);
}

void even(int x) {
  if ((x % 2) == 0)
    cout << "It is even.\n";
  else
    odd(x);
}
