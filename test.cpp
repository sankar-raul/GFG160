#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec = {1, 2, 3, 4};

    vec.push_back(5); // Add an element
    vec.pop_back();   // Remove last element
    vec.insert(vec.begin(), 10); // Insert at position
    // vec.erase(vec.begin() + 2);     // Erase at position
    for (auto val : vec) {
        cout << val << " ";
    }

    return 0;
}
