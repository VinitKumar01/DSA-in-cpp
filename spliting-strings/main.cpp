#include <iostream>
#include <sstream>
#include <vector>
//spliting the strings

using namespace std;

//method 1
//disadvantages - delimeter must be char as getline take third argument of type char
void method1(string str, char delimeter) {
    stringstream ss(str);
    vector<string> result;
    string token;

    while (getline(ss, token, delimeter))
    {
        result.push_back(token);
    }

    for (const string part: result) {
        cout << part << endl;
    }
    
}

//method 2 -> works for string delimeters too
void method2(string str, string delimeter) {
    vector<string> result;
    size_t start = 0, end;

    while ((end = str.find(delimeter, start)) != string::npos) {
        result.push_back(str.substr(start, end-start));
        start = end + 1;
    }

    result.push_back(str.substr(start));

    for (const string part: result) {
        cout << part << endl;
    }
}

int main() {
    string input = "Hello, world";
    method1(input, ',');
    method2(input, ", ");
    return 0;
}