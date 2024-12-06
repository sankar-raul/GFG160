#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
    public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string s1, string s2) {
        unordered_map<char, int> obj;
        for (char ch : s1) {
            if (obj[ch])
                obj[ch] += 1;
            else
                obj[ch] = 1;
        }
        for (char ch : s2) {
            if (!obj[ch])
                return false;
            obj[ch] -= 1;
        }
        return true;
    }
};
int main() {
    string s1 =  "sankar", s2 = "askanr";
    cout << Solution().areAnagrams(s1, s2) << endl;
    return 0;
}