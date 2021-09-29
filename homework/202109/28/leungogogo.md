# Cruel Competitive Programming 9/28
## Chapter 3.1 Vector
### Vector Usage
The built-in C++ array has fixed size, and we a type of dynamic array that can change size so we can add or remove elements from the array. In C++ standard library, we have `vector`.
```cpp
// We need to include the vector file in order to use it in our program
#include<vector>

// To declare a vector, we do vector<type> var_name;
vector<int> vec; 

// Declare and initialize the vector with default value
vector<int> vec(5); 

// Add elements to a vector
vec.push(1);

// Accesscing elements in vector by index
int x = vec[i];

// Get the size of vector
int size = vec.size();

// Check if the vector is empty.
if (vec.empty()) break;
```

### Iterator
#### Iterator usage
Definition: An iterator is an object that points to some element in a container (such as vector), has the ability to iterate through the elements in it. 
**Notes:** An iterator is different from a pointer, pointer is a variable that stored the address of another variable.

An iterator has the type of `container<type>::iterator`, for example, the iterators of an int vector will have the type of `vector<int>::iterator`, since this is pretty long, we can use the keyword `auto` instead.
```cpp
vector<int> vec;
vector.push_back(1);

// The variable first will be the iterator pointing to the first element of vec
auto first = vec.begin();

// To access the element pointed by the iterator
cout << *first << endl;
```
#### Iterator Arithmetic
Say we have an iterator, we can increment/decrement it so it points to other elements in the container.
```cpp
// Now first points to the fourth element in the vector.
first + 4
```
But notice that not all iterators support adding arbitary values.

We can use iterator to traverse a container:
```cpp
for (auto it = vec.begin(); it != vec.end(); it++) {
        int value = *it;
        cout << value << endl;
}

// There are two ways doing traversal backwards
for (auto it = vec.rbegin(); it != vec.rend(); it++) {
        ...
}
for (auto it = vec.end(); it != vec.begin(); it--) {
        ...
}
```

Also, certain vector operators requires input to be iterators:
```cpp
// Remove the second element in the vector.
vec.erase(vec.begin() + 1);

// Insert to vector, if begin()/end() is passed as parameter, then the element will be inserted to start/end.
vec.insert(vec.end(), 1);
```
## Chapter 3.2 Queue
Queue is a LIFO data structure, and here's its usage:
```cpp
// Need to inclue the queue library
#include <queue>

// Decalre a queue of int
queue<int> q;

// Insert in the back
q.push(2);

// Remove from the front
q.pop()

// Peek from the front
q.front()

// Check if it's empty
q.empty()

// Return its size
q.size()
```

## Chapter 3.3 Stack
Stack is a FIFO data structure, and here's its usage:
```cpp
// Need to inclue the stack library
#include <stack>

// Decalre a stack of int
stack<int> s;

// Insert in the back
s.push(2);

// Remove from the back
s.pop()

// Peek from the back
q.top()

// Check if it's empty
q.empty()

// Return its size
q.size()
```
## Chapter 3.4 Priority Queue (heap)
Heap is similar to queue, but instead of popping the queue front, it pops the element with the highest priority (by default, the largest element).
```cpp
#include <queue>
priority_queue<int> pq;
```
### Comparison Function
What if we want the smaller elements have higher priority or we want to define our own priority? We can implement custom comparator:
```cpp
bool cmp(int a, int b) {
    return a > b;
}

/*
        1. int is the elements the pq store.
        2. vector<int> is the container implemented the queue.
        3. cmp is the comparator, if (cmp(a, b) == true), then a has a higher priority than b.
*/
priority_queue<int, vector<int>, cmp> pq;
```

## Chapter 3.5 Set and Map
### Set
The elements in a set cannot be accessed with the `[]` operator,instead, we access its elements through iterators.
```cpp
#include<set>

// Declare a set of int
set<int> s;

// Add elements to the set
s.insert(4);
s.insert(5);
s.insert(6);

// Find elements in the set
auto it = s.find(4);

// If element not exist, return end()
if (s.find(7) == s.end()) {
        cout << "7 not found!" << endl;
}

// Remove elements from the set
s.erase(6);

// Note that the elements in the set is arranged in asending order
int smallest = *s.begin();
```
### Map
Similar to a set, but with `(key, val)` mappings.
```cpp
#include<map>

// Declare a map with string -> int.
map<string, int> ages;

// Add the mapping ("John" -> 18) to the map.
ages["John"] = 18;

// If the key set does not contain a key, return end() iterator.
if (age.find("Jayce") == age.end()) ...;

// Remove a mapping with key "John" from the map.
age.erase("John");

// Get the last mapping from the map
auto it = --age.end();
```

## Chapter 3.6 Math
Some math functions:
```cpp
#include<cmath>
abs(x);
sqrt(x);
pow(x, y);
exp(x);
log(x);
ceil(x);
floor(x);
...
```

`min` and `max` are included in algorithm library:
```cpp
#include<algorithm>
min(x, y);
max(x, y);
```
