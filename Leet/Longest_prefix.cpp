// Longest Common Prefix
#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    // Edge case: empty input
    if (strs.empty()) return "";  

    // Assume the first string is the prefix
    string prefix = strs[0];  
    
    for (int i = 1; i < strs.size(); i++) {
        // Check if prefix matches the start
        while (strs[i].find(prefix) != 0) {  
            // Remove last character
            prefix = prefix.substr(0, prefix.size() - 1); 
            // No common prefix
            if (prefix.empty()) return "";  
        }
    }
    return prefix;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << longestCommonPrefix(strs) << endl;
    return 0;
}
