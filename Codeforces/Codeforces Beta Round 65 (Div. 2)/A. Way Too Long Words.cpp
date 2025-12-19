#include <array>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string item;
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> item;
    int l = item.length();
    if (l > 10) {
      cout << item[0] << l - 2 << item[l - 1] << endl;
    } else {
      cout << item << endl;
    }
  }
}
