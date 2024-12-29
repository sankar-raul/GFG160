#include<vector>
#include<iostream>
using namespace std;

class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d %= n;
        rotate(arr, 0, d - 1);
        rotate(arr, d, n - 1);
        rotate(arr, 0, n - 1);
    }
    void rotate(vector<int> &arr, int start, int end) {
        while (start < end) {
            int temp = arr[start];
            arr[start++] = arr[end];
            arr[end--] = temp;
        }
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Solution Answer = Solution();
    Answer.rotateArr(arr, 19);
    int n = arr.size();
    cout << '{';
    for (int i = 0; i < n; i++) {
        cout << ' ' << arr[i] << ",";
    }
    cout << '}' << endl;
    return 0;
}