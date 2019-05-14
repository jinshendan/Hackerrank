#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++) cin >> v[i];
    int q;
    cin >> q;
    int x;
    for (int i = 0; i < q; i++){
        int x;
        cin >> x;
        int j = lower_bound(v.begin(),v.end(), x) - v.begin();
        if (v[j] == x) cout << "Yes "; else cout << "No ";
        cout << j + 1 << endl;
    }
    return 0;
}
