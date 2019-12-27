// overloading functions
#include <iostream>
using namespace std;

// here the function operate is overloaded by its parameters, first one have
// (double,int) second one have (int, double).
double operate(double a, int b) { return (a * b); }
double operate(int a, double b) { return (a / b); }

// templates
template <class T> T sum(T a, T b) {
  T result;
  result = a + b;
  return result;
}
// multiple template parameters
template <class T, class U> bool are_equal(T a, U b) { return (a == b); }

// non-type template Arguments
template <class T, int N> T fixed_multiply(T val) { return val * N; }
// namespace examples
namespace lucky {
int a = 6, b = 9, c = 12, d = 15;
int value() { return 7; }
} // namespace lucky

namespace perimeter {
int a = 55;
const double pi = 3.1416;
double value() { return 2 * pi; }
} // namespace perimeter

int globalVar;

int main() {
  // for overloading
  int k = 17, l = 7;
  double n = 2.0, m = 2.0;
  cout << "overload_1 : " << operate(n, l) << '\n';
  cout << "overload_2 : " << operate(k, m) << '\n';
  // for templates
  int i = 5, j = 6, p, q;
  double f = 2.0, g = 0.5, h, r;
  p = sum<int>(i, j);
  h = sum<double>(f, g);

  // we can deduce data type automatically without having to explicitly specify
  // it within angle brackets in this case like:
  q = sum(i, j);
  r = sum(f, g);
  cout << p << "  " << q << '\n';
  cout << h << "  " << r << '\n';
  // multiple template parameters
  if (are_equal(10, 11.0))
    cout << "x and y are equal\n";
  else
    cout << "x and y are not equal\n";

  // non-type template parameter
  cout << fixed_multiply<int, 2>(10) << '\n';
  cout << fixed_multiply<float, 3>(9.0) << '\n';
  int x = 10;
  int y = 20;
  {
    int x;  // ok, inner scope.
    x = 50; // sets value to inner x
    y = 50; // sets value to (outer) y
    cout << "inner block:\n";
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
  }
  cout << "outer block:\n";
  cout << "x: " << x << '\n';
  cout << "y: " << y << '\n';

  // Note that y is not hidden in the inner block, and thus accessing y still
  // accesses the outer variable.
  float R;
  cout << " enter a redius of circle: ";
  cin >> R;
  cout << lucky::value() << '\n';
  cout << perimeter::value() * R << '\n';
  cout << perimeter::pi << '\n';
  // using examples

  using perimeter::a;
  cout << " perimeter namespace calling by using a=: " << a << endl;
  cout << " a=" << perimeter::a << endl;

  using namespace lucky;
  cout << " a= " << lucky::a << "  b=" << b << " c=" << c << " d=" << d << '\n';
  {
    using namespace lucky;
    // here a will still have value from namespace perimeter unless we use { }
    // in perimeter namespace
    cout << " a= " << a << "  b=" << b << " c=" << c << " d=" << d << '\n';
  }
  // if not initializ local variable  is undetermined
  int localVar;
  cout << "local variable =" << localVar << endl; // automatic stroage
  // but global variable is alwzys zero

  cout << "global variable =" << globalVar << endl; // static storage
  return 0;
}
