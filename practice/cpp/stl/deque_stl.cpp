#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque<int> dq;
    for (int i = 0; i < n; i++){
        while(!dq.empty() and arr[dq.back()] <= arr[i]) 
            dq.pop_back();
        dq.push_back(i);
        while(!dq.empty() and dq.front() <= i - k) dq.pop_front();
        if (i >= k -1) printf("%d ", arr[dq.front()]);
    }
    printf("\n"); 
 
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	scanf("%d %d", &n, &k);
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		scanf("%d", &arr[i]);
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}

