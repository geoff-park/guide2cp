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

// backtracking: n-queen problem
const int n = 4;
int cnt = 0;
int col[n], diag1[2 * n - 1], diag2[2 * n - 1];  // *

void search(int y) {
  if (y == n) {
    cnt++;
    return;
  }

  REP(x, 0, n - 1) {
    if (col[x] || diag1[x + y] || diag2[x - y + n - 1]) continue;  // *
    col[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
    search(y + 1);
    col[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
}

/* 4x4 체스판의 위치마다 부여된 번호

col
0 1 2 3
0 1 2 3
0 1 2 3
0 1 2 3

diag1
0 1 2 3
1 2 3 4
2 3 4 5
3 4 5 6

diag2
3 4 5 6
2 3 4 5
1 2 3 4
0 1 2 3

*/
