#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    // Collect candidate leg pairs (equal sticks), storing their value and indices.
    // We ensure pairs are disjoint by skipping the next index once a pair is taken.
    vector< pair<int, pair<int,int> > > legPairs; // {value, {i, i+1}}
    for (int i = 1; i < n; i++){
        if(a[i] == a[i-1]){
            legPairs.push_back({a[i], {i-1, i}});
            i++; // skip the next index so pairs are disjoint
        }
    }

    // Case 1: At least 2 candidate leg pairs: form a rectangle (or square).
    if(legPairs.size() >= 2){
        // Use the first two candidate leg pairs.
        int leg1 = legPairs[0].first;
        int leg2 = legPairs[1].first;
        // Their indices are disjoint by construction.
        cout << leg1 << " " << leg1 << " " << leg2 << " " << leg2 << "\n";
        return;
    }

    // Case 2: Exactly 1 candidate leg pair: try to find two distinct bases (from remaining sticks)
    if(legPairs.size() == 1){
        int leg = legPairs[0].first;
        int idx1 = legPairs[0].second.first;
        int idx2 = legPairs[0].second.second;

        // Build a vector 'b' of remaining sticks (their values) excluding the leg pair indices.
        vector<int> b;
        for (int i = 0; i < n; i++){
            if(i == idx1 || i == idx2) continue;
            b.push_back(a[i]);
        }

        // In the remaining sorted vector, checking only adjacent pairs is enough because
        // the minimal difference among any two elements will appear between some two adjacent ones.
        for (int i = 0; i + 1 < (int)b.size(); i++){
            // Let bases be b[i] and b[i+1] (with b[i] <= b[i+1]).
            // For a positive-area trapezoid with legs 'leg', we need:
            //   2 * leg > (b[i+1] - b[i])
            // (if the bases are equal, it forms a rectangle which is fine)
            if(b[i+1] - b[i] < 2 * leg){
                cout << leg << " " << leg << " " << b[i] << " " << b[i+1] << "\n";
                return;
            }
        }
    }

    cout << -1 << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}

