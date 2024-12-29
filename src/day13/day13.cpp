#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        int missing = 1;
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++) {
            if (missing == arr[i])
                missing++;
        }
        return missing;
    }
};

int main() {
    vector<int> arr = {-3, 5, 4, 5, 8, 7, 0, 9};
    cout << Solution().missingNumber(arr) << endl;
    return 0;
}