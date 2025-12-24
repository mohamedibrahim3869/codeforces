#include <array>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

void solve() {
  int m, n;
  cin >> m >> n;
  float sum = (m * n) / 2.0;
  cout << int(sum) << endl;
}

int main() {
  solve();
  return 0;
}
