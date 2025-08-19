#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<char> s = {'a','a','b','b','c','c','c'};
    vector<char> a;
    int n = s.size();

    for (int i = 0; i < n; ) {
        char current = s[i];
        int count = 0;

        // count consecutive chars
        while (i < n && s[i] == current) {
            count++;
            i++;
        }

        // add char
        a.push_back(current);

        // add count if > 1
        if (count > 1) {
            string c = to_string(count);
            for (char j : c) {
                a.push_back(j);
            }
        }
    }

    // print compressed result
    for (char j : a) {
        cout << j;
    }

    return 0;
}
