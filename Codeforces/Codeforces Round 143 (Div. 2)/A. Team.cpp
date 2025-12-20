#include <iostream>
using namespace std;

void solve() {
  int no_q;
  int no_answers = 0;
  cin >> no_q;
  for (int i = 0; i < no_q; i++) {
    int answers[3];
    cin >> answers[0] >> answers[1] >> answers[2];
    int sum_answers = answers[0] + answers[1] + answers[2];
    if (sum_answers >= 2) {
      no_answers++;
    }
  }
  cout << no_answers << endl;
}

int main() {
  solve();
  return 0;
}
