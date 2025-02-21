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


    //Deletion in vector
    vector<int> v5 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    v5.erase(v5.begin() + 1); // delete the second element of the vector
    v5.erase(v5.begin() + 1, v5.begin() + 3); // will delete the second element to the 3rd element as the end is not inclusive, [Start, End)

    //Insert Function
    vector<int> v6(2,100);// {100, 100}
    v6.insert(v6.begin(), 300);// insert 300 at the first position and shift the other elements to the next position -> {300, 100, 100}
    v6.insert(v6.begin() + 1, 2, 10);// insert 10 to the 2 consecutive positions from the given position -> {300, 10, 10, 100, 100}

    vector<int> copy(2, 50);
    v6.insert(v6.begin(), copy.begin(), copy.end());// inserts copy vector from begining to the end from the first posotion of the v6 -> {50, 50, 300, 10, 10, 100, 100}

    cout << v6.size() << endl; // 7

    v6.pop_back(); // removes the last element

    // let v1 = {1, 2} and v2 = {3, 4}
    v1.swap(v2); // v2 = {1, 2} and v1 = {3, 4}

    v.clear(); // erases the entire vector

    cout << v.empty() << endl; // true if the vector is empty else print false
}

//List -> Similar to vector
void explainList() {
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4}
    ls.emplace_front(1); // {1, 5, 2, 4}

    //rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap 
}

//Deque -> Similar to list and vector
void explainDeque() {
    deque<int> dq;

    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(3); // {3, 1, 2}
    dq.emplace_front(4); // {4, 3, 1, 2}

    dq.pop_back(); //{4, 3, 1}
    dq.pop_front(); // {3, 1}

    cout << dq.back() << endl; // 1
    cout << dq.front() << endl; // 3

    //rest functions are same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

//Stack -> Last in First out
void explainStack() {
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {1, 2} -> pushes at the top of the stack
    st.emplace(3); // {1, 2, 3}

    st.top(); // 3-> st[2] is not valid as stack only allows to access elements from top as there is no indexing happening so you have to pop to excess the another element

    st.pop(); // removes the last element {1, 2}
    st.size(); // 2

    st.empty(); // true if empty

    stack<int> st1, st2;
    st1.swap(st2);
}

//Queue -> First in First out
void explainQueue() {
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2} -> pushes at the front of the queue
    q.emplace(3); // {1, 2, 3}

    q.front(); // 3-> q[2] is not valid as queue only allows to access elements from front as there is no indexing happening so you have to pop to excess the another element

    q.pop(); // removes the FIRST element {2, 3}
    q.size(); // 2

    q.empty(); // true if empty

    queue<int> q1, q2;
    q1.swap(q2);
}

//Priority Queue -> By default largest element stays at the top (max-heap behavior) -> top element pops first
void explainPriorityQueue() {
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(1); // {5, 1}
    pq.push(10); // {10, 5, 1}
    pq.emplace(2); // {10, 5, 2, 1}

    pq.top();// 10

    pq.pop(); // {5, 2, 1}

    //setting to min-heap -> smallest element at top
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(5); // {5}
    pq2.push(2); // {2, 5}
    pq2.push(8); // {2, 5, 8}
    pq2.emplace(6); // {2, 5, 6, 8}

    pq2.top(); // 2
    pq2.pop(); // removes 2
}

//Set -> stores everything in SORTED order and stores UNIQUE
void explainSet() {
    set<int> st; 
    st.insert(1); // {1}
    st.emplace(2); //{1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    auto it = st.find(3);// returns a iterator to the element if foud, If not found then it will return st.end() -> an iterator past the last element

    st.erase(4); // erase 4 // takes logarithimic time

    int cnt = st.count(1); // return the number of 1 present in the set

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    //let set = {1, 2, 3 , 4}
    auto it1 = st.find(1);
    auto it2 = st.find(3);
    st.erase(it1, it2); // {3, 4} -> [Start, End)

    // lower_bound() and upper_bound() functions works in the same way as in vector it does

    //this is the syntax
    auto it = st.lower_bound(2);// Returns Iterator to the first element that is ≥ 2, returns st.end() if not found.
    auto it = st.upper_bound(3); // Returns Iterator to the first element that is > 3, returns st.end() if not found.
}

//Multi Set -> Only obeys SORTED, NOT UNIQUE
void explainMultiSet() {
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // erases all the 1's

    int cnt = ms.count(1);

    ms.erase(ms.find(1)); // only single 1 is erased

    // let ms = {1, 1, 1, 2, 3}
    auto it = ms.find(1); //points to the first occurance of 1
    ms.erase(it, next(it, 2)); // {1, 2, 3} erases two occurances of 1

    // rest all functions are same as set
}

//Unordered Set -> same as set but does not stores in a sorted order neither in order of insertion -> stores in random order -> Unique ✅ Sorted ❎
void explainUnorderedSet() {
    unordered_set<int> ust;
    // lower_bound and upper_bound function does not work rest all functions are the same
}

//Map -> Have a key and a Value, Keys are UNIQUE and are in SORTED order
void explainMap() {
    map<int, int> mpp;

    map<int, pair<int, int>> mpp1;

    map<pair<int, int>, int> mpp2;

    mpp[1] = 2;
    mpp.insert({10, 100});
    mpp1.insert({10, {30 , 20}});
    mpp2.emplace(make_pair(3,2), 1);

    for(auto element: mpp1) {
        cout << element.first << " : " << element.second.first << "and " << element.second.second << endl;
    }

    cout << mpp[1]; // 2
    mpp.size();// 1
    cout << mpp[5]; // 0 , as there is no key mentioned as 5 it will automatically INSERT a element with a DEFAULT VALUE 0 and KEY 5 incresing it's SIZE, if the datatype of the value is string then it will insert EMPTY STRING as value. If you don't want to increase the size instead want an error use mpp.at(5)
    mpp.size(); // 2

    auto it = mpp.find(1);// finds element with key = 1 not value
    cout << it->second << endl; // alternate cout << *(it).second << endl;  "->" is just another method to work with pointer's, it is not specific to maps

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    //erase swap, size, empty, are same as above
}

//Multi Map
void explainMultiMap() {
    multimap<int, int> mmpp;
    // everything is same as map, only it can store DUPLICATE KEYS
    // only mmpp[key] cannot be used here due to same keys
}



int main() {
    //explainPair();

    //explainVector();

    //explainList();

    //explainDeque();

    //explainStack();

    //explainQueue();

    //explainPriorityQueue();

    //explainSet();

    //explainMultiSet();

    //explainUnorderedSet();

    //explainMap();

    //explainMultiMap();

    //sort(), __builtin_popcount(), __builtin_popcountll(), next_permutation(), *max_element()  -->> on yt.
    return 0;
}