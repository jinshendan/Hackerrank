#include<bits/stdc++.h>

using namespace std;

//Define the structs Workshops and Available_Workshops.
//Implement the functions initialize and CalculateMaxWorkshops
struct Workshop {
    int start_time, duration, end_time;
    Workshop(){}
    Workshop(int start_time, int duration):start_time(start_time), duration(duration){
        end_time = start_time + duration;
    }
    bool operator < (const Workshop& t) const {
        return (end_time < t.end_time) or (end_time == t.end_time and start_time < t.start_time);
    }
};

struct Available_Workshops {
    int n;
    Workshop* v;
    Available_Workshops(int start_time[], int duration[], int n):n(n){
        v = new Workshop[n];
        for (int i = 0; i < n; i++){
            v[i] = Workshop(start_time[i], duration[i]);
        }
    }
};

Available_Workshops* initialize (int start_time[], int duration[], int n){
    return new Available_Workshops(start_time, duration, n);
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
    sort(ptr->v, ptr->v + ptr->n);

    int n = ptr->n;

    int cur = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
        if (ptr->v[i].start_time >= cur){
            ans ++;
            cur = ptr->v[i].end_time;
        }
    return ans;

}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
