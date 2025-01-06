#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    vector<int> pos;
    int n, l;
    cin >> n >> l;

    while (n--) {
        int p;
        cin >> p;
        pos.push_back(p);
    }

    sort(pos.begin(), pos.end());

    double maxGap = 0.0;

    for (int i = 1; i < pos.size(); i++) {
        double currentGap = (double(pos[i] - pos[i - 1])) / 2.0;
        maxGap = max(maxGap, currentGap);
    }

    double leftEdge = pos[0];

    double rightEdge = l - pos.back();

    double result = max({maxGap, leftEdge, rightEdge});

    cout << fixed << setprecision(9) << result << endl;

    return 0;
}
