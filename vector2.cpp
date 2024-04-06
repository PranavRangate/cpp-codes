#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int N;
    cin >> N;

    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }

    int pos, start, end;
    cin >> pos >> start >> end;

    vec.erase(vec.begin() + pos - 1);

    vec.erase(vec.begin() + start - 1, vec.begin() + end - 1);

    cout << vec.size() << endl;

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
