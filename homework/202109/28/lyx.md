09/28

1. Vector

```cpp
#include <vector>

vector<string> words;

words.push_back("Simon");

words.push_back("is");

words.push_back("a");

words.push_back("fish");
```

1. Queue

We use mainly five functions when dealing with queues: • push(x): add the element x to the back of the queue • pop(): remove the element from the front of the queue • front(): return the element from the front of the queue • empty(): return true if and only if the queue is empty • size(): return the number of elements in the queue

1. Stack

```cpp
#include <stack>
stack<int> q;
```

We use mainly five functions when dealing with queues: • push(x): add the element x to the top of the stack • pop(): remove the element from the top of the stack • top(): return the element from the top of the stack • empty(): return true if and only if the stack is empty • size(): return the number of elements in the stack

1. Priority Queue

```cpp
#include <queue>

priority_queue<int> pq;

bool cmp(int a, int b){
	return a > b;
}

priority_queue<int, vector<int>, comp> pq;
```

vector<int> is the container type of the priority queue

1. Set and Map

```cpp
set<int> s;
s.insert(4);
s.insert(7);
s.insert(1);

// find returns an iterator to the element if it exists
auto it = s.find(4);

++it;
court << *it << endl;

//if nonexisten, find returns end()

if(s.find(7) == s.end()){
	cout << "7 is not in the set" << endl;
}

//erase and removes the specific element
s.erase(7);

if(s.find(7) == s.end()){
	court << "7 is not in the set" << endl;
} 

court << "The smallest element of s is " << *s.begin() << endl;
map<string, int> map;

age["Jothan"] = 22;
age["Simon"] = 23;

if(age.find("Aaron") == age.end()){
	court << "No record of Aron's age" << endl;
}
```

1. Math

```cpp
#include <cmath>
```

1. Strings

```cpp
string thecowsays = "boo";

thecowsays.push_back('p');
```