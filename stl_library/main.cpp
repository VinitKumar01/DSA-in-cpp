#include <bits/stdc++.h>
using namespace std;

//Pairs
void explainPair() {
    pair<string, string> name = {"Vinit", "Kumar"};
    cout << name.first << " " << name.second << endl;

    pair<int, pair<int, int>> p2 = {1, {3, 4}};

    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, int> arr[] = {{1,2}, {2,3}, {3,4}};

    cout << arr[1].second << endl;
}

//Vectors
void explainVector() {
    vector<int> v;
    
    v.push_back(1); // {1}
    v.emplace_back(2); // {1, 2} -> dynamically increases it size and push 2 to it's end -> generally faster than push_back()

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1,2); // don't need curly braces as emplace back automatically assumes it to be a pair

    vector<int> v1(5, 100); // vector of size 5 with all the elements already filled as 100, the size of vectors are dynamic means you can push more than 5 elements to this vector

    vector<int> v2(5); // vector of size 5 with with garbage values filled in.

    vector<int> v3(5,20);
    vector<int> v4(v1); // copy of v3 vector


    vector<int>::iterator iter = v3.begin();// iter points to the memory of the first element as begin is used -> means its a pointer

    iter++; // shifting to the next elements memory address -> as all are elements are in contigious memory locations
    cout << *(iter) << endl; // we put * in front of a pointer to access it's value

    iter = iter + 2; // shifts two positions ahead;
    cout << *(iter) << endl;

    vector<int>::iterator iter2 = v3.end();// points to the memory next to the last element as end is used, it won't point to the last element you have to do iter2-- to shift it to the last element here

    vector<int>::reverse_iterator iter3 = v3.rend();// rend means reverse end, points to the the memory before the first element, here iter3++ will move it backward as it is a reverse iterator -> never used
    
    vector<int>::reverse_iterator iter4 = v3.rbegin();// rbegin means reverse begin, points to the last element of the vector, here iter4++ will move it backward as it is a reverse iterator -> never used

    cout << v3[0] << " " << v3.at(0);// at() is never used

    cout << v3.back(); // last element


    for(vector<int>::iterator it = v3.begin(); it !=v3.end(); it++) {
        cout << *(it) << endl;
    }// accessing values of a vector using for loop

    for(auto it = v3.begin(); it !=v3.end(); it++) {
        cout << *(it) << endl;
    }// auto will automatically handle the type -> simpliying for loop

    for (auto element: v3) {
        cout << element << endl;
    }// for loops also have this simple synatx of looping arrays and vectors in this it will automatically iterate over the vector and will store the value in element variable and auto will handle type for the variable
}

int main() {
    //explainPair();

    explainVector();
    return 0;
}