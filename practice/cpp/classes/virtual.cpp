#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person {
    public:
        string name;
        int age;
        virtual void getdata() {}
        virtual void putdata() {}
};

class Professor: public Person {
public:
        int cur_id;
        int pub;
    
        static int num;
        Professor() { cur_id = ++num; }
        void getdata() { cin >> name >> age >> pub; }
        void putdata() {
            cout << name << " " << age << " " << pub << " " << cur_id << endl;
        }
};
int Professor::num = 0;

class Student: public Person{
public:
        int cur_id;
        int marks[6];
    
      static int num;
      Student() { cur_id = ++num; }
      void getdata() { 
        cin >> name >> age;
        for (int i = 0; i < 6; i++) cin >> marks[i];
        }
    void putdata(){
        cout << name << " " << age;
        int sum = 0;
        for (int i = 0 ; i < 6; i++) sum += marks[i];
        cout << " " << sum << " " << cur_id << endl;
    }
};
int Student::num = 0;

int main(){