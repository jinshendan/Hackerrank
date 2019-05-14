#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int q;
    set<int> s;
    cin >> q;
    int x, y;
    for (int i = 0; i < q; i++){
        cin >> y >> x;
        if (y == 1) s.insert(x);
        if (y == 2) s.erase(x);
        if (y == 3) cout << ((s.find(x) != s.end())?"Yes":"No") << endl;
    } 
    return 0;
}



