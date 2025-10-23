#include <iostream>

using namespace std;

int main() {
  long long num;
  int counter = 0;

  cout << endl << "Please tell a number to check if it is prime or not: ";
  cin >> num;

  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      cout << endl << num << " is not prime." << endl << endl;
      counter++;
      break;
    }
  }

  if (counter == 0) {
    cout << endl << num << " is prime." << endl << endl;
  }

  return 0;
}