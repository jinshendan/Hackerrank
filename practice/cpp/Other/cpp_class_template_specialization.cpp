#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;
const string FruitMap[3] = {"apple", "orange", "pear"};
const string ColorMap[3] = {"red", "green", "orange"};

template <> struct Traits<Color> {
  static string name(int index) {
    if (index < 0 || index > 2)
      return "unknown";
    else
      return ColorMap[index];
  }
};

template <> struct Traits<Fruit> {
  static string name(int index) {
    if (index < 0 || index > 2)
      return "unknown";
    else
      return FruitMap[index];
  }
};

int main()
{
	int t = 0; std::cin >> t;

    for (int i=0; i!=t; ++i) {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}
