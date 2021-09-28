---
title: paps-preprocessor
image: 'https://source.unsplash.com/random'
date: 2021-09-27 20:40:41
tags:
---
## Template
C++ has a powerful tool called the `preprocessor`. This utility is able to read and modify your code using certain rules during compilation. The commonly used `#include` is a preprocessor directive that includes a certain file in your code.

Besides file inclusion we mostly use the `#define` directive. It allows us to replace certain tokens in our code with other ones. The most basic usage is

```cpp
#define TOREPLACE REPLACEWITH
```

## CPP preprocessor

```cpp
#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i=a; i< b; i++)

int main() {
	rep(i, 0, 5) {
		cout << i << endl;
	}
}

```