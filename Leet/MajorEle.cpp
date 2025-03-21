#include <iostream>
#include <vector>
#include <map>
using namespace std;

/*
 * Function: optimal
 * -------------------
 * Uses **Boyer-Moore Voting Algorithm** to find the majority element.
 * The majority element is an element that appears more than n/2 times.
 *
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */
int optimal(vector<int>& arr) {
    int count = 0;
    int ele;
    for (int i = 0; i < arr.size(); i++) {
        if (count == 0) {
            ele = arr[i];
            count = 1;
        } else if (arr[i] == ele) {
            count++;
        } else {
            count--;
        }
    }

    // Verify if ele is actually the majority element
    int count1 = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (ele == arr[i]) count1++;
    }

    return (count1 > arr.size() / 2) ? ele : -1;  // Return major element or -1 if none
}

/*
 * Function: better
 * -------------------
 * Uses **Hash Map (unordered_map would be more efficient)** to count occurrences.
 * Finds the majority element by checking frequencies.
 *
 * Time Complexity: O(N)
 * Space Complexity: O(N)
 */
int better(vector<int>& arr) {
    map<int, int> mpp;
    for (int i = 0; i < arr.size(); i++) {
        mpp[arr[i]]++;
    }

    for (auto it : mpp) {
        if (it.second > arr.size() / 2) return it.first;
    }

    return -1;  // Return -1 if no majority element is found
}

/*
 * Function: brute
 * -------------------
 * Uses **Nested Loops (Brute Force)** to count occurrences for each element.
 *
 * Time Complexity: O(N²)
 * Space Complexity: O(1)
 */
int brute(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) count++;
        }

        if (count > n / 2) return arr[i];
    }
    return -1;  // Return -1 if no majority element is found
}

/*
 * Function: main
 * -------------------
 * Tests all three approaches for the majority element problem.
 */
int main() {
    vector<int> arr = {2, 2, 3, 3, 1, 2, 2};

    int ubrute = brute(arr);
    int ubetter = better(arr);
    int uoptimal = optimal(arr);

    cout << "Using Brute Force: " << ubrute << endl;
    cout << "Using Hash Map (Better Approach): " << ubetter << endl;
    cout << "Using Boyer-Moore (Optimal Approach): " << uoptimal << endl;

    return 0;
}
