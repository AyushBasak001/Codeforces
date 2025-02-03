#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n), pre(n, 0);
    unordered_set<int> seen;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Start from the last element
    seen.insert(arr[n - 1]);
    pre[n - 1] = 1;

    // Traverse the array from right to left
    for (int i = n - 2; i >= 0; i--)
    {
        if (seen.find(arr[i]) == seen.end())
        {
            seen.insert(arr[i]);
            pre[i] = pre[i + 1] + 1;
        }
        else
        {
            pre[i] = pre[i + 1];
        }
    }

    // Answering queries
    while (m--)
    {
        int idx;
        cin >> idx;
        cout << pre[idx - 1] << endl;
    }

    return 0;
}
