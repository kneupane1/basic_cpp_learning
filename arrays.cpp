// arrays example
#include <array>
#include <iostream>

using namespace std;

int arr[] = {1, 2, 7, 4, 0};
int n, result = 0;
// arrays as parameters
void printarray(int arg[], int length) {
  for (int n = 0; n < length; ++n)
    cout << arg[n] << ' ';
  cout << '\n';
}

int main() {
  for (n = 0; n < 5; ++n) {
    result += arr[n];
  }
  cout << result << endl;
  int firstarray[] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
  int secondarray[] = {2, 4, 6, 8, 10};
  printarray(firstarray, 9);
  printarray(secondarray, 5);

  array<int, 3> myarray{10, 20, 30};

  for (int i = 0; i < myarray.size(); ++i) {
    cout << myarray[i] << '\n';
    ++myarray[i];
  }
  for (int elem : myarray)
    cout << elem << '\n';
  // Strings and null-terminated character sequences
  char question1[] = "What is your name? "; // arrays of characters using
                                            // null-terminated sequences
  string question2 = "Where do you live? "; // using class string
  char answer1[80]; // arrays of characters using null-terminated sequences
  string answer2;   // using class string
  cout << question1;
  cin >> answer1;
  cout << question2;
  cin >> answer2;
  cout << "Hello, " << answer1;
  cout << " from " << answer2 << "!\n";
  // to convert from one Another
  char myntcs[] = "c-string at the start.\n ";
  string mystring = myntcs; // convert c-string to string
  cout << mystring;         // printed as a library string
  cout << mystring.c_str(); // printed as a c-string
  return 0;
}
