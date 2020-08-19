#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        string s;

        cin >> s;

        int length = s.length();

        if(length <= 10) {
            cout << s << endl;
        } else {
            int decimal = length - 2;
            int a = s[0];
            int b = s[length-1];

            string temp = "";
            temp.push_back(a);
            temp.append(to_string(decimal));
            temp.push_back(b);
            

            cout << temp << endl;
        }
    }

    return 0;
}