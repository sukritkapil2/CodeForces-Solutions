#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, count = 0;
    cin >> n >> k;

    vector<int> scores(n, 0);

    for(int i = 0;i < n; i++) {
        cin >> scores[i];
    }

    if(scores[k-1] != 0) {
        count += k;

        int i = k;

        while(i < n) {
            if(scores[i] >= scores[k-1]) count++;
            else break;
            i++;
        }
    } else {
        int i = 0;
        while(i < k) {
            if(scores[i] == 0) {
                break;
            }
            else count++;
            i++;
        }
    }

    cout << count << endl;
    return 0;
}