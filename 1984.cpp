#include <iostream>
#include <string>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

int main() {
  string line;
  while (cin >> line) {
    reverse(line.begin(), line.end());
    cout << line << endl;
  }

  return 0;
}