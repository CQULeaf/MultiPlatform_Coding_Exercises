#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minimumSum(int num) {
        vector<int> digits;
        // Convert number to digit.
        while(num > 0)
        {
            digits.push_back(sum % 10);
            sum /= 10;
        }

        // Sort the digits in ascending order.
        sort(digits.begin(),digits.end());

        // Construct new1 and new2 to be as small as possible.
        int new1 = new2 = 0;
        for(int i = 0; i < 4; i += 2)
        {
            new1 = new1 * 10 + digits[i];
            new2 = new2 * 10 + digits[i+1];
        }

        // Calculate and return the minSum.
        return new1 + new2;
    }
};