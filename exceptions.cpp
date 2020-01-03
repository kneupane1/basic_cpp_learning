// exceptions
#include <iostream>
using namespace std;

int main() {
  try {
    //  throw "Hello world!";
    // throw 99;
    // throw 1.0; // throw exicuted only once, this do not run here

    try {
      throw 77;
    } catch (char word) {
      cout << "char exception :  " << word << '\n';
    } catch (int word) {
      cout << "int exception : " << word << '\n';
    }
  } catch (double param) {
    cout << "An exception occurred. Exception double " << param << '\n';
  } catch (int param) {
    cout << "int exception : " << param << '\n';
  } catch (char param) {
    cout << "char exception :  " << param << '\n';
  } catch (...) {
    cout << "default exception : "; // << param << '\n';
  }
  return 0;
}
