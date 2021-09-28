---
title: paps-function
image: 'https://source.unsplash.com/random'
date: 2021-09-26 20:12:15
tags:
---
## Function in CPP

```cpp
#include <iostream>
using namespace std;
int square(int x) {
	return x * x;
}
int min(int x, int y) {
	if (x < y) {
		return x;
	}
	else {
		return y;
	}
}
int add(int x, int y) {
	return x + y;
}
int main()
{
	int x, y;
	cin >> x >> y;
	cout << x << "^2=" << square(x) << endl;
	cout << x << "+" << y << "=" << add(x , y) << endl;
	cout << "min(" << x << "," << y << ") = " << min(x, y) << endl;
}
```

## Copying

```cpp
#include <iostream>
using namespace std;
void change(int val) {
	val = 0;
}
int main() {
	int variable = 100;
	cout << "Variable is " << variable << endl;
	change(variable);
	cout << "Variable is " << variable << endl;
}
```

## Global variable

```cpp
#include <iostream>
using namespace std;

int currentMoney = 0;
void deposit(int newMoney) {
	currentMoney += newMoney;
}
void withdraw(int newMoney) {
	currentMoney -= newMoney;
}
int main() {
	cout << "Currently, you have " << currentMoney << "money" << endl;
	deposit(1000);
	withdraw(2000);
	cout << "Currently, you have " << currentMoney << "money" << endl;
}
```