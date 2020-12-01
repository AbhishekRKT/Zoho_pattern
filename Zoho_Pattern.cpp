#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<vector<int>> a;
    int c = 1;
    for (int i=1; i<=n; i++) {
        a.push_back(vector<int>());
        for (int j = 0; j<i; j++) {
            a.back().push_back(c++);
        }
    }
    for (int i = 0; i<n; i++) {
        for (int j=0; j < (n - a[i].size()); j++) {
            cout << "   ";
        }
        for (int j=0; j<a[i].size(); j++) {
            cout << a[i][j];
            if (a[i][j] < 10) {
                cout << "  ";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}