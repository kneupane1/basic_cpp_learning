#include <iostream>
#include <string>

#define PI 3.14159
#define NEWLINE '\n'

using namespace std;
int a, b, result;

int main() {
  std::cout << "Hello World!" << '\n'  // Prints Hello World!
            << "I am a cpp program. "; /* Prints I am a cpp program. */
  a = 5;
  b = 2;
  a = a + 1;
  result = a - b;
  cout << " a -b  equals to " << result << '\n';
  string mystring;
  mystring = "This is a string."
             R"(string with \backslash)";
  cout << mystring << endl;

  double r = 5.0; // radius
  double circle;

  circle = 2 * PI * r;
  cout << circle;
  cout << NEWLINE;

  // int i;
  // cout << "Please enter an integer value: ";
  // cin >> i;
  // cout << "The value you entered is " << i;
  // cout << " and its double is " << i * 2 << ".\n";

  string mystr;
  //
  cout << "What's your name? ";
  getline(cin, mystr);
  //
  // cout << "Hello " << mystr << ".\n";
  //
  // cout << "What is your favorite team? ";
  // getline(cin, mystr);
  //
  // cout << "I like " << mystr << " too!\n";

  // cout << "Do you have a baby ? ";
  // getline(cin, mystr);
  //
  // cout << "I have one baby too!\n";
  //
  // cout << "Boy or girl? ";
  // getline(cin, mystr);
  //
  // cout << "I have " << mystr << " too!\n";
  //
  // cout << "What is his name ? ";
  // getline(cin, mystr);
  //
  // cout << "Wao really? My boy's name is " << mystr << " too!\n";
  int x;
  cout << "Enter the value of x ";
  cin >> x;
  // if (x > 0) {
  //   cout << "x is positive.\n";
  //   cout << "It's value is " << x << endl;
  // } else if (x < 0) {
  //   cout << "x is negative.\n";
  //   cout << "It's value is " << x << endl;
  // }
  //
  // else {
  //   cout << "x is 0.\n";
  //   cout << "It's value is " << x << endl;
  // }
  //
  // int n = 10;
  //
  // while (n > 0) {
  //   cout << n << ", ";
  //   --n;
  // }
  //
  // cout << "liftoff!\n";
  //
  // int nn = -10;
  //
  // do {
  //   cout << nn << ", ";
  //   ++nn;
  // }
  //
  // while (nn < 1);
  //
  // for (int n = 100; n > 90; n--) {
  //   cout << n << ", ";
  // }
  // cout << "liftoff!\n";
  // for (char c : mystr) {
  //   cout << c << "  ";
  // }
  // cout << '\n';
  // int arr[6];
  // arr[0] = 0;
  // arr[1] = 1;
  // arr[2] = 2;
  // arr[3] = 3;
  // arr[4] = 4;
  // arr[5] = 5;
  // for (int a : arr) {
  //   cout << a << "  ";
  // }
  // cout << '\n';
  //
  // for (int n = 10; n > 0; n--) {
  //   cout << n << ", ";
  //   if (n == 6) {
  //     cout << "countdown aborted!";
  //     break;
  //   }
  // }

  switch (x) {
  case 1:
    cout << "x is 1";
    break;
  case 2:
    cout << "x is 2";
    break;
  default:
    cout << "value of x unknown";
  }
  return 0;
}
