#include <bits/stdc++.h>

using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n, q;
  cin >> n >> q;
  cin.ignore();
  string s;
  string s1;
  vector<pair<string, string>> level;
  string current;
  string attr_var, equal, attr_val;
  map<string, string> m;
  for (int i = 0; i < n; i++) {
    getline(cin, s);
    istringstream iss(s);
    iss >> s1;

    if (s1[s1.length() - 1] == '>') {
      if (s1[1] == '/') {
        s1 = s1.substr(2, s1.length() - 3);
        level.pop_back();
      } else {
        
        s1 = s1.substr(1, s1.length() - 2);
        if (level.size() == 0)
          current = s1;
        else
          current = level[level.size() - 1].first + "." + s1;

        level.push_back(make_pair(current, s1));
      }
    } else {
      s1 = s1.substr(1, s1.length() - 1);
      if (level.size() == 0)
        current = s1;
      else
        current = level[level.size() - 1].first + "." + s1;

      level.push_back(make_pair(current, s1));

      while (iss >> attr_var >> equal >> attr_val) {
        attr_val = attr_val.substr(1, attr_val.length() - 1);
        if (attr_val[attr_val.length() - 1] == '>')
          attr_val = attr_val.substr(0, attr_val.length() - 2);
        else
          attr_val = attr_val.substr(0, attr_val.length() - 1);

        m[current + "~" + attr_var] = attr_val;
      }
    }
  }

  for (int i = 0; i < q; i++) {
    cin >> s;
    if (m.find(s) == m.end())
      cout << "Not Found!" << endl;
    else
      cout << m[s] << endl;
  }
  return 0;
}
