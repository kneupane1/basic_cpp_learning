// overloading operators example
#include <iostream>
using namespace std;

class CVector {
public:
  int x, y;
  CVector(){};                          // default constructor
  CVector(int a, int b) : x(a), y(b) {} // constructor
  // CVector operator+(const CVector &);   // operator function
  // operator function ma one of the valid operator hunyparcha here + is used.
  // this operator function returns CVector , the function name is operator+
  // and the function's parameter is const CVector type
  // passing by reference, remember reference:
  // int add (int &a, int &b) { a *= 2, b *= 2; }
  // calling by  int x=1, y=3;
  // add (x, y);
  CVector operator->*(const CVector &);
};

CVector CVector::operator->*(const CVector &m) {
  CVector temp; // using CVector(){}; temp is object of class CVector
  temp.x =
      x + m.x; // x is the member of class CVector   class_object.class_member
  temp.y = y + m.y;
  return *this; // *this is  operator= member functions that return objects by
                // reference
}
// CVector CVector::operator+(const CVector &param) {
//   CVector temp; // using CVector(){};
//   temp.x = x + param.x;
//   temp.y = y + param.y;
//   return temp;
// }
CVector operator*(const CVector &lhs, const CVector &rhs) {
  CVector temp;
  temp.x = lhs.x * rhs.x;
  temp.y = lhs.y * rhs.y;
  return temp;
}

// example on keyword this to check if a parameter passed to a member function
// is the object itself.
class Dummy {
public:
  bool isitme(Dummy &param); // member function
  // static member1 static int n;
  static int n;
  Dummy() { n++; };
};

bool Dummy::isitme(Dummy &param) { // body of function isitme
  if (&param == this)
    return true;
  else
    return false;
}

int Dummy::n = 0;

int main() {
  CVector foo(3, 1); //  using CVector(int a, int b) : x(a), y(b) {}
  CVector bar(1, 2);
  CVector result; // using CVector(){};
  //  result = foo + bar;
  result = foo->*bar;
  cout << " + operator " << result.x << ',' << result.y << '\n';

  CVector multiply = foo * bar;
  cout << " * operator as non member function " << multiply.x << ','
       << multiply.y << '\n';

  Dummy a;           // object of class Dummy
  Dummy *bb = &a;    // bb points to location of object a
  if (bb->isitme(a)) // calling (executing) member function isitme
                     // if bb is not pointer we call function as: b.isitme(a)
    cout << "yes, &a is bb\n";

  Dummy aaaaa[10]; // object of class Dummy
  Dummy box[5];
  cout << a.n << '\n';
  Dummy *c = new Dummy;
  cout << Dummy::n << '\n';
  delete c;

  return 0;
}
