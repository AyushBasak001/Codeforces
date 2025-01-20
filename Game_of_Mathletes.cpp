#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    if (n < 2) {
        cout << 0 << endl; // If less than 2 elements, no pairs are possible
        return;
    }

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int left = 0, right = n - 1, score = 0;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == k) {
            score++;
            left++;
            right--;
        } else if (sum > k) {
            right--;
        } else {
            left++;
        }
    }

    cout << score << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

