#include <iostream>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int final_value = 0;
  for (int i = 0; i < n; i++) {
    string operation;
    cin >> operation;
    if (operation == "++X" || operation == "X++") {
      final_value++;
    } else {
      final_value--;
    }
  }
  cout << final_value << endl;
}

int main() {
  solve();
  return 0;
}
