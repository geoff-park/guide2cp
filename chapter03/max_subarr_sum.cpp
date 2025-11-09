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

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vi array = {-1, 2, 4, -3, 5, 2, -5, 2};
  int n = array.size();

  // O(n) solution

  // 위치 k에서 끝나면서 합이 최대인 부분 배열을 구하는 부분 문제를 생각해 보자.
  // 가능한 경우는 다음 두 가지 뿐이다.
  //   1. 부분 배열의 위치 k의 원소 하나만으로 이루어진 경우
  //   2. 위치 k-1에서 끝나는 부분 배열에 위치 k의 원소를 덧붙여 부분 배열을 만드는 경우

  int best = 0, sum = 0;
  REP(k, 0, n - 1) {
    sum = max(array[k], sum + array[k]);
    best = max(best, sum);
  }
  cout << best << '\n';
}
