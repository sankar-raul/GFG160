#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
    public:
    char nonRepeatingChar(string &s) {
        unordered_map<char, int> chCount;
        for (char ch : s) {
           if (chCount[ch])
                chCount[ch] += 1;
            else
                chCount[ch] = 1;
        }
        for (char ch : s) {
            if (chCount[ch] == 1)
                return ch;
        }
        return '$';
    }
};
int main() {
    string s = "geeksforgeeks";
    cout << Solution().nonRepeatingChar(s) << endl;
    return 0;
}