#include <bits/stdc++.h>
using namespace std;

vector<int> intersectionNoDuplicates(vector<int>& a, vector<int>& b) {
    unordered_map<int, int> freqMap;
    vector<int> intersection;
    unordered_set<int> seen; 
    for (int num : b) {
        freqMap[num]++;
    }

    for (int num : a) {
        if (freqMap[num] > 0 && !seen.count(num)) {
            intersection.push_back(num);
            seen.insert(num); 
        }
    }

    return intersection;
}

int main() {
    vector<int> a = {1, 2, 1, 3, 1}, b = {3, 1, 3, 4, 1};
    vector<int> res = intersectionNoDuplicates(a, b);

    for (int num : res) {
        cout << num << " ";
    }
    return 0;
}
