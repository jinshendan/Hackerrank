#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, q;
    cin >> n >> q;
    vector<vector<int>> v(n, vector<int>());
    int k;
    for (int i = 0; i < n ; i ++){
        cin >> k;
        v[i].resize(k);
        for (int j = 0; j < k; j++)
            cin >> v[i][j];
    } 
    for (int i = 0; i < q; i++){
        int x, y;
        cin >> x >> y;
        cout << v[x][y] << endl;
    }
    return 0;
}

