#include <iostream>

using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        const int offset = 64;
        bool stop = false;
        string toReturn;

        while (columnNumber > 0 && !stop) {
            if (columnNumber < 26)
                stop = true;
            toReturn.push_back((char)(columnNumber % 26 + offset));
            columnNumber -= 26;
        }

        return toReturn;
    }
};

int main() {
    Solution solution;

    cout << solution.convertToTitle(1) << endl;
    cout << solution.convertToTitle(28) << endl;
    cout << solution.convertToTitle(701) << endl;

    return 0;
}