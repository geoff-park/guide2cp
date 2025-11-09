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

int n;
int cnt = 0;
int col[15], diag1[29], diag2[29];

void search(int y) {
  if (y == n) {
    cnt++;
    return;
  }

  REP(x, 0, n - 1) {
    if (col[x] || diag1[x + y] || diag2[x - y + n - 1]) continue;
    col[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
    search(y + 1);
    col[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  search(0);
  cout << cnt;
}
