#include <iostream>
using std::string;
using std::cout; using std::cin; using std::endl;

int main() {
    // ex3.4
    cout << "Please enter two strings." << endl;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    if (s1 == s2) {
        cout << "They are equal.";
    } else if (s1 > s2) {
        cout << "The larger one: " << s1;
    } else {
        cout << "The larger one: " << s2;
    }
    cout << endl;
    if (s1.size() == s2.size()) {
        cout << "Same length.";
    } else if (s1.size() > s2.size()) {
        cout << "The first one is longer.";
    } else {
        cout << "The second one is longer.";
    }
    cout << endl;
    
    // ex3.5
    /*string s, result;
    while (cin >> s) {
        result = result + " " + s;
    }
    cout << result << endl;
    */
    
    // string str;
    // for (string buff; cin >> buff; str += (str.empty() ? "" : " ") + buff);
    // cout << str << endl;
    
    string s("Hello World!!!");
    for (auto &c : s) {
        c = toupper(c);
    }
    cout << s << endl;

    // ex3.6
    for (auto &c : s) {
        c = 'X';
    }
    cout << s << endl;

    // ex3.8
    int index = 0;
    while (index < s.size()) {
        s[index] = 'Y';
        index++;
    }
    cout << s << endl;

    // ex3.10
    cout << "Please enter a string with punctuations." << endl;
    string s3, s4;
    cin >> s3;
    for (auto c : s3) {
        if (!ispunct(c)) {
            s4 += c;
        }
    }
    cout << s4 << endl;
    return 0;
}
