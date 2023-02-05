#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Check if the array is beautiful
bool is_beautiful(vector<int> &arr) {
  int sum = 0;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == sum) {
      return false;
    }
    sum += arr[i];
  }
  return true;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    if (is_beautiful(arr)) {
      cout << "YES" << endl;
      for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
      }
      cout << endl;
    } else {
      cout << "YES" << endl;
      for (int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
      }
      cout << arr[n - 1] + arr[n - 2] << " " << arr[n - 1] << endl;
    }
  }
  return 0;
}
