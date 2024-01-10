#include <iostream>

using namespace std;

int value(char s) {
    if (s == 'I')
        return 1;
    if (s == 'V')
        return 5;
    if (s == 'X')
        return 10;
    if (s == 'L')
        return 50;
    if (s == 'C')
        return 100;
    if (s == 'D')
        return 500;
    if (s == 'M')
        return 1000;

    return -1;
}

int convert(string& str) {
    // answer set to 0 initially
    int ans = 0;

    // loop through string s
    for (int i = 0; i < str.length(); i++) {
        // get value of first char s[i]
        int s1 = value(str[i]);

        if (i + 1 < str.length()) {
            // get value of next char s[i + 1]
            int s2 = value(str[i + 1]);

            if (s1 >= s2) {
                // if current char >= next char
                ans = ans + s1;
            }
            else {
                // if current char < next char
                ans = ans + s2 - s1;
                i++;
            }
        }
        else {
            ans = ans + s1;
        }
    }
    return ans;
}

int main() {
    printf("\nRoman to Integer\n\n");
    string str = "IV";
    cout << str << " is equal to " << convert(str) << endl;
    return 0;
}