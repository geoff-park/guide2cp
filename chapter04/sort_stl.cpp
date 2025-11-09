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

// 정렬: 사용자 정의 구조체에서 비교 연산자 정의
struct point {
  int x, y;

  // 먼저 x 좌표를 기준으로, 그리고 그다음에는 y 좌표를 기준으로 정렬한다.
  bool operator<(const point& p) {
    if (x == p.x)
      return y < p.y;
    else
      return x < p.x;
  }
};

// 외부에 정의된 비교 함수
// comp: 문자열을 먼저 길이순으로, 그리고 그다음에는 알파벳순으로 정렬한다.
bool comp(string a, string b) {
  if (a.size() == b.size())
    return a < b;
  else
    return a.size() < b.size();
}
// usage: sort(v.begin(), v.end(), comp);

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vi v = {4, 2, 5, 3, 5, 8, 3};
  sort(v.begin(), v.end());  // 오름차순 정렬

  sort(v.rbegin(), v.rend());  // 내림차순 정렬

  // 일반적인 배열 정렬
  int n = 7;  // 배열의 크기
  int a[] = {4, 2, 5, 3, 5, 8, 3};
  sort(a, a + n);

  // 문자열 정렬
  string s = "monkey";
  sort(s.begin(), s.end());

  // 정렬: 두 원소의 조합(pair)
  vector<pi> v2;
  v2.push_back({1, 5});
  v2.push_back({2, 3});
  v2.push_back({1, 2});
  sort(v2.begin(), v2.end());

  // 정렬: 여러 원소의 조합(tuple)
  vector<tuple<int, int, int>> v3;
  v3.push_back({2, 1, 4});
  v3.push_back({1, 5, 3});
  v3.push_back({2, 1, 3});
  sort(v3.begin(), v3.end());
}
