#include <iostream>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int kvalue = arr[k - 1];
  int score = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] >= kvalue && arr[i] != 0) {
      score++;
    }
  }
  cout << score << endl;
}

int main() {
  solve();
  return 0;
}
