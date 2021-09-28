# Chapter 3 The C++ Standard Library

## 3.4 `priority_queue`

```cpp
bool cmp(int a, int b) {
	return a > b;
}

// alternatively

auto cmp = [](int a, int b) { return a > b; };

priority_queue<int, vector<int>, cmp> pq;
```

## 3.5 `set` and `map`

```cpp
map<string, int> age;
age["Johan"] = 23;
age["Simon"] = 23;

auto last = --age.end();
cout << last->first << " is " << last->second << " years old " << endl;
```

## 3.6 Math

```cpp
#include <cmath>
```

- abs(x)
- sqrt(x)
- pow(x, y)
- log(x)
- cos(x) / acos(x)
- sin(x) / asin(x)
- tan(x) / atan(x)
- ceil(x) / floor(x)

## 3.7 Algorithms

### 3.7.1 Sorting

With sort, the behavior for two elements with the same value is not specified: they can be ordered in any way. To solve this, we should use C++ `stable_sort`.

Time complexity: O(n*log^2(n)) if additional memory not available. If it is available, O(n*log(n)).

### 3.7.1 Searching

- `count` - To find out how many times an element appears in a vector.
- `binary_search` - Takes in a sorted interval, returns true if the interval contains the value.

### 3.7.3 Permutations

```cpp
sort(v.begin(), v.end());
do {
	// do something with v
} while (next_permutation(v.begin(), v.end()));
```

## 3.8 Strings

### 3.8.1 Conversions

```cpp
#include <sstream>

stringstream numToString;
numToString << 5;
string val;
numToString >> val;    // val is now the string "5"

stringstream stringToNum;
stringToNum << "5";
int val;
stringToNum >> val;    // val is now the integer 5
```

## 3.9 Input / Output

### 3.9.1 Detecting End of File

```cpp
int num;
while (cin >> num) {
	// do something with num
}
```

### 3.9.2 Input Line by Line

```cpp
string line;
getline(cin, line);

stringstream line(str);
string word;
while(line >> word) {
	// do something with word
}
```