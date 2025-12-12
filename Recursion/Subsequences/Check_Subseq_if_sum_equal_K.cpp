#include <bits/stdc++.h>
using namespace std;

bool printOneSubsequence(int idx, vector<int> &arr, vector<int> &ds, int sum, int target) {
    // Base case
    if (idx == arr.size()) {
        if (sum == target) {
            for (int x : ds) cout << x << " ";
            cout << endl;
            return true; 
        }
        return false;
    }

    ds.push_back(arr[idx]);
    if (printOneSubsequence(idx + 1, arr, ds, sum + arr[idx], target))
        return true;
    ds.pop_back();
  
    if (printOneSubsequence(idx + 1, arr, ds, sum, target))
        return true;

    return false;
}

int main() {
    vector<int> arr = {1, 2, 1};
    int target = 3;

    vector<int> ds;
    printOneSubsequence(0, arr, ds, 0, target);

    return 0;
}
