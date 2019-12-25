// function example
#include <iostream>
#include <math.h>
using namespace std;

int pythagoras_theorem(int a, int b) {
  int c;
  c = sqrt(a * a + b * b);
  return c;
}

int main() {
  int h;
  h = pythagoras_theorem(12, 5);
  cout << "The hypotenuse is " << h << endl;
  ;
}
