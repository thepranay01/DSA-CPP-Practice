#include <iostream>
using namespace std;

// Recursive function to replace c1 with c2 in the string
string replaceCharacter(string s, char c1, char c2, int index = 0) {
    // Base case: If index reaches the end of the string
    if (index == s.length()) {
        return s;
    }

    // If the current character matches c1, replace it with c2
    if (s[index] == c1) {
        s[index] = c2;
    }

    // Recursive call for the next character
    return replaceCharacter(s, c1, c2, index + 1);
}

int main() {
    string s;
    char c1, c2;

    // Input the string
    cout << "Enter the string: ";
    getline(cin, s);

    // Input the characters to replace
    cout << "Enter the characters (c1 and c2 separated by space): ";
    cin >> c1 >> c2;

    // Call the recursive function
    string result = replaceCharacter(s, c1, c2);

    // Output the result
    cout << "Modified string: " << result << endl;

    return 0;
}
