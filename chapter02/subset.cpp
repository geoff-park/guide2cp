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

// 2.2.1 부분집합 생성하기
vi subset;
int n;

void search(int k) {
  if (k == n + 1) {
    // 부분집합을 처리한다.
  } else {
    // k를 부분집합에 포함시킨다.
    subset.push_back(k);
    search(k + 1);
    subset.pop_back();

    // k를 부분집합에 포함시키지 않는다.
    search(k + 1);
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
}
