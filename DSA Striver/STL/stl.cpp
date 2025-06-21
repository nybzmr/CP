// Author: Nayaab Zameer
#include <bits/stdc++.h>
using namespace std;

void explainPair(){
    cout << "--- Pair Demonstration ---" << endl;
    pair<int,int> p = {1,3};
    cout << "p.first = " << p.first << ", p.second = " << p.second << endl;

    pair<int,int> arr[] = {{1,2},{3,4},{7,8}};
    cout << "arr[2].second = " << arr[2].second << endl;
    cout << endl;
}

void explainVector(){
    cout << "--- Vector Demonstration ---" << endl;
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout << "v elements: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
    cout << "vec[0] = (" << vec[0].first << ", " << vec[0].second << ")" << endl;
    cout << endl;


    vector<int> v1 (5,100); // contains 5 elements initialised with 100 
    vector<int> v2 (5); // contains 5 elements initialised with 0
    for(auto it: v2) cout<<it<<" ";
    v2.push_back(1);//still expands the size of vector
    vector <int> v3(v1); // copy of v1;

    auto it = v2.begin();
    cout<<*(it)<<endl;

    for (auto it = v2.begin(); it != v2.end(); it++)
    {
      cout<<*(it)<<' ';
    }
    
    cout<<endl;
    v2.erase(v2.begin()+1);
    v2.erase(it+1);


    for (auto it = v2.begin(); it != v2.end(); it++)
    {
      cout<<*(it)<<' ';
    }
    

}

void explainList(){
    cout << "--- List Demonstration ---" << endl;
    list<string> lst;
    lst.push_back("apple");
    lst.push_front("banana");
    cout << "Elements in list: ";
    for(const auto& str : lst) cout << str << " ";
    cout << endl << endl;
}

void explainDeque(){
    cout << "--- Deque Demonstration ---" << endl;
    deque<double> dq;
    dq.push_back(1.1);
    dq.push_front(2.2);
    cout << "Front = " << dq.front() << ", Back = " << dq.back() << endl;
    cout << endl;
}

void explainStack(){
  stack <int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(2);
  st.emplace(3);

  cout<< st.top();
  
}

void explainQueue(){
  queue <int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(2);
  q.emplace(3);
  q.back() += 5;
  
}

void explainSet(){
    cout << "--- Set Demonstration ---" << endl;
    set<int> s = {4,1,3,2};
    s.insert(5);
    cout << "Set contains: ";
    for(int x : s) cout << x << " ";
    cout << endl;
    cout << "Count of 3? " << s.count(3) << endl;
    cout << endl;
}

void explainMap(){
    cout << "--- Map Demonstration ---" << endl;
    map<string,int> m;
    m["one"] = 1;
    m.insert({"two", 2});
    cout << "m[""one""] = " << m["one"] << endl;
    cout << "Iterating map: \n";
    for(const auto& kv : m)
        cout << kv.first << " => " << kv.second << endl;
    cout << endl;
}

void explainAlgorithms(){
    cout << "--- Algorithms Demonstration ---" << endl;
    vector<int> v = {5,2,9,1,5,6};
    sort(v.begin(), v.end());
    cout << "Sorted vector: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    auto it = find(v.begin(), v.end(), 5);
    if(it != v.end())
        cout << "Found first 5 at index: " << distance(v.begin(), it) << endl;

    cout << "Applying lambda to print squared: ";
    for_each(v.begin(), v.end(), [](int x){ cout << x*x << " "; });
    cout << endl << endl;
}

void explainFunctions(){
    cout << "--- std::function & Lambdas ---" << endl;
    function<int(int,int)> add = [](int a,int b){ return a + b; };
    cout << "add(3,4) = " << add(3,4) << endl;

    auto mul = [](int a,int b){ return a * b; };
    cout << "mul(3,4) = " << mul(3,4) << endl;

    cout << endl;
}

void explainIterators(){
    cout << "--- Iterators Demonstration ---" << endl;
    vector<char> vc = {'a','b','c','d'};
    cout << "Forward iteration: ";
    for(auto it = vc.begin(); it != vc.end(); ++it)
        cout << *it << " ";
    cout << endl;

    cout << "Reverse iteration: ";
    for(auto rit = vc.rbegin(); rit != vc.rend(); ++rit)
        cout << *rit << " ";
    cout << endl << endl;
}

int main(){
    // STL Demonstrations:
    // - pairs
    // - vectors
    // - lists
    // - deques
    // - sets
    // - maps
    // - algorithms
    // - std::function & lambdas
    // - iterators

    // explainPair();
    // explainVector();
    // explainList();
    // explainDeque();
    explainStack();
    // explainSet();
    // explainMap();
    // explainAlgorithms();
    // explainFunctions();
    // explainIterators();

    return 0;
}
