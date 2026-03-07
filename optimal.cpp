/*two pointer approach*/
#include<bits/stdc++.h>
using namespace std;

void longestsum(vector<int>& a, long long k) {
    int i = 0, j = 0;
    int maxLen = 0;
    long long currentSum = 0;
    int n = a.size();

    while (j < n) {
        // 1. Expand the window by adding the current element
        currentSum += a[j];

        // 2. Shrink the window from the left if the sum exceeds k
        while (currentSum > k && i <= j) {
            currentSum -= a[i];
            i++;
        }

        // 3. Check if we found the target sum
        if (currentSum == k) {
            maxLen = max(maxLen, j - i + 1);
        }

        // 4. Always move the right pointer forward
        j++;
    }
    cout << "maximum length is : " << maxLen << endl;
}

int main() {
    vector<int> a = {1, 2, 3, 1, 1, 1, 1, 3, 3};
    long long k = 6;
    longestsum(a, k);
    return 0;
}

/*a note while doing CP: ALWAYS THINK ABOUT THE EDGE CASES FIRST.*/
/*OPTIMAL SOLUTION ONLY FOR POSITIVES AND ZEROS*/