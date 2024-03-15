#include <iostream>

using namespace std;
//// Function to check if a string is a palindrome
//THE FUNCCTION IS CASE SENSITIVE i.e. S!=s
bool f(string str, int start, int end) {
  if (start >= end) {
    return true;
  }
  if (str[start] != str[end]) {
    return false;
  }
  return f(str, start + 1, end - 1);
}

int main() {
  string str;
  cout << "Enter a string: ";
  cin >> str;

  if (f(str, 0, str.length() - 1)) {
    cout << str << " is a palindrome" << endl;
  } else {
    cout << str << " is not a palindrome" << endl;
  }

  return 0;
}
