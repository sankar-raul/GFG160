#include<iostream>
using namespace std;
#include <vector>
void reverse(vector<int> &arr);
void display(vector<int> &arr);
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    display(arr);
    reverse(arr);
    display(arr);
    return 0;
}

void reverse(vector<int> &arr) {
    int i = 0;
    int j = arr.size() - 1;
    while(i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}
void display(vector<int> &arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}