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

  vi array = {1, 3, 8, 2, 9, 2, 5, 6};
  int n = array.size();

  // Bubble Sort: O(n^2)
  REP(i, 0, n - 1) {
    REP(j, 0, n - 2) {
      if (array[j] > array[j + 1]) {
        swap(array[j], array[j + 1]);
      }
    }
  }
}
