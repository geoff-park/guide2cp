#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)

// 2.2.2 순열 생성하기
const int n = 10;
vi permutation;
bool chosen[n + 1];

void search() {
  if (permutation.size() == n) {
    // 순열을 처리한다.
  } else {
    REP(i, 1, n) {
      if (chosen[i]) continue;
      chosen[i] = true;
      permutation.push_back(i);
      search();
      chosen[i] = false;
      permutation.pop_back();
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // using next_permutation
  REP(i, 1, n) {
    permutation.push_back(i);
  }
  do {
    // 순열을 처리한다.
  } while (next_permutation(permutation.begin(), permutation.end()));
}
