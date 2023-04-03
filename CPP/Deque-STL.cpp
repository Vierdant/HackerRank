#include <iostream>
#include <vector>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque<int> main_arr(k);
    int i;
    
    for (i = 0; i < k; i++) {
        while((!main_arr.empty()) && arr[i] >= arr[main_arr.back()]) {
            main_arr.pop_back();
        }
        main_arr.push_back(i);
    }
    
    while(i < n) {
        cout << arr[main_arr.front()] << " ";
        while ((!main_arr.empty()) && main_arr.front() <= i - k) {
            main_arr.pop_front();
        }
        while ((!main_arr.empty()) && arr[i] >= arr[main_arr.back()]) {
            main_arr.pop_back();
        }
        main_arr.push_back(i);
        i++;
    }
    
    cout << arr[main_arr.front()] << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
