```cpp
#include <iostream>
#include<string>
#include <vector>
using namespace std;
int main() 
{
    vector<string> words;
    words.push_back("Simon");
    words.push_back("is");
    words.push_back("a fish");
    for(auto it = words.begin(); it !=words.end();it++){
        string value = *it;
        cout << value << endl;
    }
    return 0;
}
```
-----------------------
```cpp
#include <iostream>
 
using namespace std;
 
int main ()
{
   char site[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
 
   cout << "菜鸟教程: ";
   cout << site << endl;
 
   return 0;
}
```
----------------------
```cpp
#include <iostream>
#include <cstring>
 
using namespace std;
 
// 声明一个结构体类型 Books 
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};
 
int main( )
{
   Books Book1;        // 定义结构体类型 Books 的变量 Book1
   Books Book2;        // 定义结构体类型 Books 的变量 Book2
 
   // Book1 详述
   strcpy( Book1.title, "C++ 教程");
   strcpy( Book1.author, "Runoob"); 
   strcpy( Book1.subject, "编程语言");
   Book1.book_id = 12345;
 
   // Book2 详述
   strcpy( Book2.title, "CSS 教程");
   strcpy( Book2.author, "Runoob");
   strcpy( Book2.subject, "前端技术");
   Book2.book_id = 12346;
 
   // 输出 Book1 信息
   cout << "第一本书标题 : " << Book1.title <<endl;
   cout << "第一本书作者 : " << Book1.author <<endl;
   cout << "第一本书类目 : " << Book1.subject <<endl;
   cout << "第一本书 ID : " << Book1.book_id <<endl;
 
   // 输出 Book2 信息
   cout << "第二本书标题 : " << Book2.title <<endl;
   cout << "第二本书作者 : " << Book2.author <<endl;
   cout << "第二本书类目 : " << Book2.subject <<endl;
   cout << "第二本书 ID : " << Book2.book_id <<endl;
 
   return 0;
}
```
----------------------------------------
```cpp
#include <iostream>
 
using namespace std;
 
int main ()
{
   int  var1;
   char var2[10];
 
   cout << "var1 变量的地址： ";
   cout << &var1 << endl;
 
   cout << "var2 变量的地址： ";
   cout << &var2 << endl;
 
   return 0;
}
```
---
title: Principles_of_Algorithmic_Problem_Solving_Chapter_3
image: 'https://source.unsplash.com/random'
date: 2021-09-29 23:27:52
tags: ["psap"]
---
# Chapter - 3

## conversion

cpp use `<<` to write variable to stream and use `>>` to read value from stream. So we cam employ this feature to do the conversion.

```cpp
stringstream numToString;
numToString << 5;
string val;
numToString >> val; // val is now "5"

stringstream stringToNum;
stringToNum << val;
int num;
stringToNum >> num; // num now is 5
```

## Use cpp to implement a doublelinkedlist

```cpp
#include <iostream>
using namespace std;
template <class T>
class Node{
    public:
        T val;
        Node *next;
        Node *prev;
        Node();
        Node(T &t){
            this->val = t;
        }
        Node(T &t, Node<T> *prev, Node<T> *next){
            this->val = t;
            this->prev = prev;
            this->next = next;
        }
};
template<class T>
class DList{
    public:
        int size;
        T default_value;
        Node<T>* head;
        Node<T>* tail;
        DList(int s, T t){
            this->head = new Node<T>(t);
            this->tail = new Node<T>(t);
            this->head->next = this->tail;
            this->tail->prev = this->head;
            this->size = s;
            this->default_value = t;
        };
        void append_left(T t){
            Node<T> *node = new Node<T>(t, this->head, this->head->next);
            this->head->next->prev = node;
            this->head->next = node;
            this->size++;
        };
        void append_right(T t){
            Node<T> *node = new Node<T>(t,this->tail->prev,this->tail);
            this->tail->prev->next = node;
            this->tail->prev = node;
            this->size++;
        }
        void output(){
            Node<T> *node = this->head->next;
            while(node->val != this->default_value){
                cout << node->val << endl;
                node = node->next;
            }
        };
};
int main(){
    DList<string> string_list(0,"nullptr");
    string_list.append_left("Zhou");
    string_list.append_right("Zoe");
    string_list.output();
    cout << "List size is: " << string_list.size << endl;
    DList<int> integer_list(0,-1);
    integer_list.append_left(2);
    integer_list.append_left(1);
    integer_list.append_right(99);
    integer_list.append_right(100);
    integer_list.output();
    cout << "List size is: " << integer_list.size << endl;
    return 0;
}
```

```sh
Zhou
Zoe
List size is: 2
1
2
99
100
List size is: 4
```

## Chapter notes
In this chapter, only the parts from the standard library we deemed most important to problem solving were extracted. The standard library is much larger than this, of course. While you will almost always get by using only what we discussed additional knowledge of the library can make you a faster, more effective coder
