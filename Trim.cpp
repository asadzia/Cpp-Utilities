#include <iostream>
#include <string>

using namespace std;

#define WHITESPACE " \n\f\r\t\v"

string leftTrim(const string &str) {
  int x = str.find_first_not_of(WHITESPACE);
  if (x != string::npos){
    return str.substr(x);
  } else {
    // return empty if no characters other than whitespace found
    return "";
  }
}

string rightTrim (const string &str) {
  int x = str.find_last_not_of(WHITESPACE);

  if (x != string::npos) {
    return str.substr(0, x + 1);
  } else {
    return "";
  }
}

string trim (const string &str) {
 return rightTrim(leftTrim(str));
}

int main () {
  const string x = " Hello World! \n";
  cout << leftTrim(x) << endl;
  return 0;
}
