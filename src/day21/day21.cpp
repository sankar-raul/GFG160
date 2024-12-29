#include<vector>
#include<iostream>
using namespace std;
class Solution {
  public:
    void sort012(vector<int>& arr) {
        int n = arr.size();
        int low = 0, mid = 0, high = n - 1;
        while (mid <= high) {
            if (arr[mid] == 0)
                swap(arr[mid++], arr[low++]);
            else if (arr[mid] == 2)
                swap(arr[mid], arr[high--]);
            else
                mid++;
            cout << low << mid << high << endl;
        }
    }
};
int main() {
    vector<int> arr = {0, 1, 2, 0, 1, 2};
    Solution().sort012(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    return 0;
}