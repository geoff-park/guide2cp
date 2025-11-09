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

// int형 정수 x의 비트 표현을 출력
void tobinary(int x) {
  for (int k = 31; k >= 0; k--) {
    if (x & (1 << k))
      cout << '1';
    else
      cout << '0';
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
}
