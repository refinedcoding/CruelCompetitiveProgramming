# Data Structure
## Dynamic Array
vector 是 c++ 动态数组的实现。
底层就是一个普通的数组；但是封装了扩容的操作；容量到达阈值之后就会自动拷贝扩容；整体push_back复杂度还是O(1)。

string 也是一个 动态数组。
多了一个 + 的拼接操作。
支持
substr(k, x) begin at k; length of x
find(t) find first occurrence

## Set Structure
* binary tree
* hashing

前者有序；后者更高效
和数组的最大区别在于保证了唯一性。

* multiset
支持多个元素

删除时一次性全部删除。 `s.erase(5)`
只删除一个。 `s.erase(s.find(5))`

## Map Structure
和set底层实现是几乎一致的。

## Iterators and ranges
c++里和range相关的 一般都是 half-open 即前闭后开
```
sort(v.begin(), v.end()); 
reverse(v.begin(), v.end()); 
random_shuffle(v.begin(), v.end());
```

## Set Iterators
++ -- 前后移动
*it 表示元素值

lower_bound(x) 返回集合中最小的至少大于等于x的元素
upper_bound(x) 返回集合中最小的大于x的元素

