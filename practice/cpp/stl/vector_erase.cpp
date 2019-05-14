#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n ;
    cin >> n;
    vector<int> v(n+1, 0);
    for (int i = 1; i <= n; i++) cin >> v[i];
    int x, y;
    cin >> x;
    v.erase(v.begin() + x);
    cin >> x >> y;
    v.erase(v.begin() + x, v.begin() + y);
    cout << v.size() - 1 << endl;
    for (int i = 1; i < v.size() - 1; i++) cout << v[i] << " ";
    cout << v[v.size() - 1];
    return 0;
}
