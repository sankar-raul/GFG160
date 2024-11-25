#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int pivot = -1;
        int n = arr.size(), i = 0;
        for (i = n - 2; i >= 0; i--) {
            if (arr[i] < arr[i + 1]) {
                pivot = i;
                break;
            }
        }
        if (pivot == -1) {
            reverse(arr, 0, n - 1);
            return;
        }
        for (i = n - 1; i > pivot; i--) {
            if (arr[i] > arr[pivot]) {
                swap(arr[i], arr[pivot]);
                break;
            }
        }
        reverse(arr, pivot + 1, n - 1);
    }
    void reverse(vector<int> &arr, int start, int end) {
        while (start < end) {
            swap(arr[start++], arr[end--]);
        }
    }
};
int main() {
    vector<int> arr = {2, 4, 1, 7, 5, 0};
    int n = arr.size();
    Solution Answer = Solution();
    for (int i = 0; i < n; i++) {
        cout << ' ' << arr[i] << ",";
    }
    cout << endl;
    Answer.nextPermutation(arr);
    for (int i = 0; i < n; i++) {
        cout << ' ' << arr[i] << ",";
    }
    cout << endl;
    return 0;
}