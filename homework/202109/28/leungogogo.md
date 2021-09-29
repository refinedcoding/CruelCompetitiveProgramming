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

Also, certain 
