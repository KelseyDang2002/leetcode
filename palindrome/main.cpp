#include <iostream>

using namespace std;

int main() {
    printf("\nPalindrome\n\n");

    int x, num, remainder, reverse = 0;

    printf("Enter an integer: ");
    cin >> num;
    cout << "You entered " << num << ".\n\n";

    x = num;

    if(x < 0) {
        printf("Not a palindrome.\n\n");
        return false;
    }

    while(num != 0) {
        remainder = num % 10;
        reverse = (reverse * 10) + remainder;
        num = num / 10;
    }

    cout << "Reverse: " << reverse << ".\n\n";

    if(reverse == x) {
        printf("Palindrome.\n\n");
        return true;
    }
    else {
        printf("Not a palindrome.\n\n");
        return false;
    }
}