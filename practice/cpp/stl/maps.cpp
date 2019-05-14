#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int q;
    cin >> q;
    map<string, int> m;
    int id, mark;
    string name;
    for (int i = 0; i < q; i++) {
        cin >> id;
        if (id == 1) cin >> name >> mark;
        else cin >> name;

        if (id == 1) m[name] += mark;
        if (id == 2) m.erase(name);
        if (id == 3) cout << ((m.find(name) != m.end())?m[name]:0) << endl;
    }
    return 0;
}



