#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int N;
    cin >> N;

    vector<int> v(N); 

    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < N; i++) {
        cout << v[i];
        if (i < N - 1) {
            cout << " "; 
        }
    }
    cout << endl;    
	
	 return 0;
}
