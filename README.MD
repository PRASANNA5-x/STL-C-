# C++ STL (Standard Template Library) Learning Repository

A comprehensive learning resource covering STL containers, algorithms, iterators, and functors with practical examples.

---

## Table of Contents
- [Algorithms](#algorithms)
- [Containers](#containers)
- [Functors](#functors)
- [Iterators](#iterators)
- [Quick Reference](#quick-reference)

---

## Algorithms

### Heap Algorithms (`ALGORITHM/heapalgo.cpp`)
Operations for maintaining and managing heap data structures.

**Key Functions:**
- `make_heap()` - Converts a range into a max-heap
- `push_heap()` - Adds a new element to the heap
- `pop_heap()` - Removes the maximum element (moves to end)
- `sort_heap()` - Sorts elements within a heap

**Example Usage:**
```cpp
vector<int> arr = {50, 10, 11, 12, 13};
make_heap(arr.begin(), arr.end());  // Create heap
arr.push_back(99);
push_heap(arr.begin(), arr.end());  // Add element
pop_heap(arr.begin(), arr.end());   // Remove max element
sort_heap(arr.begin(), arr.end());  // Sort the heap
```

---

### Iterator and Iterating Algorithms (`ALGORITHM/iteratoranditeratingalgo.cpp`)
Algorithms for iterating through and manipulating container elements.

**Key Functions:**
- `for_each()` - Applies a function to each element
- `find()` - Finds first occurrence of a value
- `find_if()` - Finds first element matching a predicate
- `count()` - Counts occurrences of a value
- `count_if()` - Counts elements matching a predicate
- `sort()` - Sorts elements in a range
- `reverse()` - Reverses element order
- `rotate()` - Rotates elements (left or right)
- `unique()` - Removes duplicates from sorted range
- `partition()` - Partitions elements based on a predicate

**Example Usage:**
```cpp
vector<int> arr = {11, 20, 30, 40, 50};

// Apply function to each element
for_each(arr.begin(), arr.end(), printDouble);

// Find and count
auto it = find(arr.begin(), arr.end(), 20);
int count = count(arr.begin(), arr.end(), 20);

// Rotate left (shift elements)
rotate(arr.begin(), arr.begin() + 3, arr.end());

// Remove duplicates
auto it2 = unique(arr.begin(), arr.end());
arr.erase(it2, arr.end());

// Partition by condition
partition(arr.begin(), arr.end(), checkeven);
```

---

### Min/Max Algorithms (`ALGORITHM/minmaxalgo.cpp`)
Finding minimum and maximum elements efficiently.

**Key Functions:**
- `min()`, `max()` - Compare two values
- `min_element()` - Returns iterator to smallest element
- `max_element()` - Returns iterator to largest element

**Example Usage:**
```cpp
int a = 10, b = 20;
cout << max(a, b);  // 20

vector<int> arr = {10, 11, 12, 13, 14, 15, 46};
auto minIt = min_element(arr.begin(), arr.end());  // 10
auto maxIt = max_element(arr.begin(), arr.end());  // 46
```

---

### Numerical Algorithms (`ALGORITHM/numericalgo.cpp`)
Mathematical operations on ranges.

**Key Functions:**
- `accumulate()` - Sums all elements in a range
- `inner_product()` - Computes dot product of two ranges
- `partial_sum()` - Computes cumulative sum
- `iota()` - Fills range with sequentially increasing values

**Example Usage:**
```cpp
vector<int> arr = {10, 20, 30, 40, 50};

// Sum all elements
int total = accumulate(arr.begin(), arr.end(), 0);  // 150

// Inner product (dot product)
vector<int> first = {1, 2, 3};
vector<int> second = {3, 4, 5};
int result = inner_product(first.begin(), first.end(), 
                          second.begin(), 0);  // 1*3 + 2*4 + 3*5 = 26

// Partial sum: [1, 1+2, 1+2+3]
vector<int> arr2 = {1, 2, 3};
vector<int> result(arr2.size());
partial_sum(arr2.begin(), arr2.end(), result.begin());

// Fill with sequence starting from 250
vector<int> arr3(5);
iota(arr3.begin(), arr3.end(), 250);  // [250, 251, 252, 253, 254]
```

---

### Search and Find Algorithms (`ALGORITHM/searchfindalgo.cpp`)
Efficient searching in sorted ranges.

**Key Functions:**
- `binary_search()` - Checks if element exists (returns bool)
- `lower_bound()` - Iterator to first element >= value
- `upper_bound()` - Iterator to first element > value
- `equal_range()` - Range of elements equal to value

**Example Usage:**
```cpp
vector<int> arr = {10, 11, 12, 13, 14, 15, 16};

// Binary search
bool found = binary_search(arr.begin(), arr.end(), 15);  // true

// Lower bound (first >= 35)
auto it1 = lower_bound(arr.begin(), arr.end(), 35);

// Upper bound (first > 16)
auto it3 = upper_bound(arr.begin(), arr.end(), 16);

// Equal range (both iterators to range of 16s)
auto it4 = equal_range(arr.begin(), arr.end(), 16);
int firstIdx = it4.first - arr.begin();
int lastIdx = it4.second - arr.begin();
```

---

### Set Algorithms (`ALGORITHM/setalgo.cpp`)
Operations on sorted ranges (union, intersection, difference).

**Key Functions:**
- `set_union()` - Combines two sorted ranges
- `set_intersection()` - Finds common elements
- `set_difference()` - Finds elements in first but not second
- `set_symmetric_difference()` - Finds elements in either but not both

**Example Usage:**
```cpp
vector<int> first = {1, 2, 3};
vector<int> second = {3, 4, 5};
vector<int> result;

// Union: {1, 2, 3, 4, 5}
set_union(first.begin(), first.end(),
         second.begin(), second.end(),
         inserter(result, result.begin()));

// Intersection: {3}
set_intersection(first.begin(), first.end(),
                second.begin(), second.end(),
                inserter(result, result.begin()));

// Difference: {1, 2}
set_difference(first.begin(), first.end(),
              second.begin(), second.end(),
              inserter(result, result.begin()));

// Symmetric Difference: {1, 2, 4, 5}
set_symmetric_difference(first.begin(), first.end(),
                        second.begin(), second.end(),
                        inserter(result, result.begin()));
```

---

## Containers

### Vector (`CONTAINERS/VECTORS/vectors.cpp`)
Dynamic array that grows and shrinks automatically.

**Key Methods:**
- **Creation**: `vector<int> marks;`
- **Insertion**: `push_back()`, `insert()`
- **Deletion**: `pop_back()`, `erase()`
- **Access**: `[]`, `at()`, `front()`, `back()`
- **Info**: `size()`, `capacity()`, `empty()`, `max_size()`
- **Modification**: `clear()`, `swap()`, `reserve()`

**Example Usage:**
```cpp
vector<int> marks;
marks.push_back(10);
marks.push_back(100);
marks.push_back(1000);

cout << marks.size();      // 3
cout << marks.capacity();  // capacity after reserve(10)
cout << marks.front();     // 10
cout << marks.back();      // 1000

// Iterator traversal
for(int i : marks) {
    cout << i << " ";
}

// 2D Vector
vector<vector<int>> arr(5, vector<int>(4, 0));  // 5x4 matrix
```

---

### Deque (`CONTAINERS/DEQUE/deque.cpp`)
Double-ended queue - efficient insertion/deletion at both ends.

**Key Methods:**
- **Insertion**: `push_back()`, `push_front()`
- **Deletion**: `pop_back()`, `pop_front()`
- **Access**: `[]`, `front()`, `back()`
- **Info**: `size()`, `empty()`
- **Modification**: `insert()`, `erase()`, `clear()`

**Example Usage:**
```cpp
deque<int> dq;
dq.push_back(10);   // [10]
dq.push_front(20);  // [20, 10]
dq.pop_back();      // [20]
dq.pop_front();     // []

cout << dq.front() << " " << dq.back();
cout << dq[0];      // Random access like vector

// Iterator
deque<int>::iterator it = dq.begin();
while(it != dq.end()) {
    cout << *it << " ";
    it++;
}
```

---

### List (`CONTAINERS/LIST/list.cpp`)
Doubly-linked list - efficient insertion/deletion at any position.

**Key Methods:**
- **Insertion**: `push_back()`, `push_front()`, `insert()`
- **Deletion**: `pop_back()`, `pop_front()`, `erase()`, `remove()`
- **Access**: `front()`, `back()`
- **Info**: `size()`, `empty()`
- **Modification**: `clear()`, `swap()`

**Example Usage:**
```cpp
list<int> mylist;
mylist.push_back(10);
mylist.push_back(20);
mylist.push_front(0);   // [0, 10, 20]

cout << mylist.front(); // 0
cout << mylist.back();  // 20

mylist.remove(10);      // Removes all 10s

// Iterator traversal (forward)
for(int x : mylist) {
    cout << x << " ";
}

// Swap lists
list<int> first, second;
first.swap(second);
```

**Note:** No random access (`[]`), no `capacity()`. Use iterators for access.

---

### Stack (`CONTAINERS/STACK/stack.cpp`)
LIFO (Last-In-First-Out) container - operates from top.

**Key Methods:**
- **Insertion**: `push()`
- **Deletion**: `pop()`
- **Access**: `top()`
- **Info**: `size()`, `empty()`

**Example Usage:**
```cpp
stack<int> s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);

cout << s.size();   // 5
cout << s.top();    // 50 (top element)
s.pop();            // Remove 50

if(s.empty() == false) {
    cout << "Stack is not empty";
}

// Swap
stack<int> first, second;
first.swap(second);
```

**Note:** **No iterators** - only can access top element.

---

### Queue (`CONTAINERS/QUEUE/queue.cpp`)
FIFO (First-In-First-Out) container - operates from front.

**Key Methods:**
- **Insertion**: `push()`
- **Deletion**: `pop()`
- **Access**: `front()`, `back()`
- **Info**: `size()`, `empty()`

**Example Usage:**
```cpp
queue<int> q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);  // [10, 20, 30, 40, 50]

cout << q.size();      // 5
q.pop();               // Remove 10
cout << q.front();     // 20 (first element)
cout << q.back();      // 50 (last element)

if(q.empty() == false) {
    cout << "Queue is not empty";
}

// Swap
queue<int> first, second;
first.swap(second);
```

**Note:** No iterators, no random access.

---

### Set (`CONTAINERS/SET/set.cpp`)
**Ordered Set:** Stores unique elements in sorted order.
**Unordered Set:** Stores unique elements with no specific order (faster insertion/lookup).

**Key Methods:**
- **Insertion**: `insert()`
- **Deletion**: `erase()`
- **Search**: `find()`, `count()`
- **Info**: `size()`, `empty()`
- **Modification**: `clear()`

**Example Usage:**
```cpp
// Ordered Set
set<int> s;
s.insert(10);
s.insert(15);
s.insert(20);
s.insert(25);
s.insert(25);  // Duplicate ignored
cout << s.size();  // 4

// Iterator traversal (sorted order)
for(int x : s) {
    cout << x << " ";  // 10 15 20 25
}

// Find and count
if(s.find(15) != s.end()) {
    cout << "found";
}
if(s.count(15) == 1) {
    cout << "found";
}

s.erase(15);

// Unordered Set (faster but unordered)
unordered_set<int> st;
st.insert(10);
st.insert(15);
st.insert(20);  // Order not guaranteed
```

---

### Map (`CONTAINERS/MAP/map.cpp` and `unorderedmap.cpp`)
**Map:** Stores key-value pairs in sorted order by key.
**Unordered Map:** Stores key-value pairs with no specific order (faster).

**Key Methods:**
- **Insertion**: `[]`, `insert()`, `make_pair()`
- **Access**: `[]`, `at()`
- **Deletion**: `erase()`
- **Search**: `find()`, `count()`
- **Info**: `size()`, `empty()`

**Example Usage:**
```cpp
// Ordered Map
map<string, string> table;
table["in"] = "india";
table.insert(make_pair("en", "england"));
table.at("in") = "india2";  // Update

// Traversal (sorted by key)
for(auto& p : table) {
    cout << p.first << " " << p.second << endl;
}

// Find and count
if(table.find("in") != table.end()) {
    cout << "key found";
}
if(table.count("in") == 1) {
    cout << "key found";
}

// Unordered Map (faster, order not guaranteed)
unordered_map<string, string> utable;
utable["in"] = "india";
utable["en"] = "england";
```

---

### Priority Queue (`CONTAINERS/PRIORITYQUEUE/priorityqueue.cpp`)
Max-Heap by default. Elements with higher priority dequeued first.

**Key Methods:**
- **Insertion**: `push()`
- **Deletion**: `pop()`
- **Access**: `top()`
- **Info**: `empty()`

**Example Usage:**
```cpp
// Max Priority Queue (default)
priority_queue<int> pq;
pq.push(10);
pq.push(25);
pq.push(21);
pq.push(11);
cout << pq.top();  // 25 (largest element has highest priority)
pq.pop();
cout << pq.top();  // 21

// Min Priority Queue (smallest has highest priority)
priority_queue<int, vector<int>, greater<int>> mpq;
mpq.push(10);
mpq.push(20);
mpq.push(30);
cout << mpq.top();  // 10
mpq.pop();
cout << mpq.top();  // 20

// Custom comparator for objects
priority_queue<student, vector<student>, CustomComparator> pq;
pq.push(student("Alice", 85));
pq.push(student("Bob", 90));
cout << pq.top().marks;  // 95 (highest marks first)
```

---

## Functors

### Basic Functor (`FUNCTORS/functor.cpp`)
Function object that can be called like a function using `operator()`.

**Example:**
```cpp
class MyFunctor {
public:
    bool operator()(int a, int b) {
        return a > b;
    }
};

MyFunctor fun;
cout << fun(5, 3);  // Output: 1 (true)
```

---

### Custom Sorting (`FUNCTORS/customsorting.cpp`)
Use functors as comparators for custom sorting logic.

**Example:**
```cpp
class CustomComparator {
public:
    bool operator()(int a, int b) {
        return a > b;  // Descending order
    }
};

vector<int> arr = {5, 2, 9, 1, 5, 6};

// Ascending order (default)
sort(arr.begin(), arr.end());       // [1, 2, 5, 5, 6, 9]

// Descending order (custom)
sort(arr.begin(), arr.end(), CustomComparator());  // [9, 6, 5, 5, 2, 1]
```

---

### Custom Priority Comparison (`FUNCTORS/custompriority.cpp`)
Use functors to define custom priority in priority queues.

**Example:**
```cpp
class student {
public:
    string name;
    int marks;
    student() {}
    student(string n, int m) : name(n), marks(m) {}
};

class CustomComparator {
public:
    bool operator()(const student& a, const student& b) {
        if(a.marks == b.marks) {
            return a.name > b.name;  // If equal marks, sort by name descending
        }
        return a.marks < b.marks;    // Max marks -> high priority
    }
};

priority_queue<student, vector<student>, CustomComparator> pq;
pq.push(student("Alice", 85));
pq.push(student("Bob", 90));
pq.push(student("Charlie", 75));
pq.push(student("David", 95));

cout << pq.top().marks << " " << pq.top().name;  // 95 David
pq.pop();
cout << pq.top().marks << " " << pq.top().name;  // 90 Bob
```

---

### Custom Student Comparator (`FUNCTORS/customstudentcmp.cpp`)
Sort objects (students) by multiple criteria.

**Example:**
```cpp
class student {
public:
    string name;
    int marks;
    student(string n, int m) : name(n), marks(m) {}
};

class studentcmp {
public:
    bool operator()(const student& a, const student& b) {
        if(a.marks == b.marks) {
            return a.name < b.name;  // If equal marks, sort by name ascending
        }
        return a.marks > b.marks;    // Sort by marks descending
    }
};

vector<student> students;
students.push_back(student("Alice", 85));
students.push_back(student("David", 90));
students.push_back(student("Bob", 90));
students.push_back(student("Charlie", 80));

sort(students.begin(), students.end(), studentcmp());

// Output:
// David: 90
// Bob: 90
// Alice: 85
// Charlie: 80
```

---

## Iterators

### Iterator Basics (`ITERATORS/basics.cpp`)

Iterators are pointers-like objects that allow traversing container elements.

#### Types of Iterators:

**1. Forward Iterator (Vector)**
- Can move forward only: `++it`
- Can dereference: `*it`
- Can compare: `it != arr.end()`

```cpp
vector<int> arr = {1, 2, 3, 4, 5};
vector<int>::iterator it = arr.begin();

cout << "Forward: ";
while(it != arr.end()) {
    cout << *it << " ";
    it++;
}
// Output: 1 2 3 4 5
```

**2. Backward Iterator (Vector)**
- Move backward: `--it`
- Access from end to begin

```cpp
it = arr.end() - 1;
cout << "Backward: ";
while(it != arr.begin()) {
    cout << *it << " ";
    it--;
}
cout << *it << endl;
// Output: 5 4 3 2 1
```

**3. Random Access Iterator (Vector)**
- Jump multiple steps: `it + 2`, `it - 1`
- Direct indexing: `it[i]`

```cpp
it = arr.begin();
cout << "Current: " << *it << endl;       // 1

it = it + 2;
cout << "After +2: " << *it << endl;      // 3

it = it - 1;
cout << "After -1: " << *it << endl;      // 2
```

**4. Bidirectional Iterator (List)**
- Can move forward and backward: `++it`, `--it`
- Cannot jump

```cpp
list<int> myList;
myList.push_back(100);
myList.push_back(200);
myList.push_back(300);

cout << "List Forward: ";
list<int>::iterator lit = myList.begin();
while(lit != myList.end()) {
    cout << *lit << " ";
    lit++;
}
// Output: 100 200 300

lit--;
cout << "List Backward: ";
while(lit != myList.begin()) {
    cout << *lit << " ";
    lit--;
}
cout << *lit << endl;
// Output: 300 200 100
```

#### Iterator Operations Summary:

| Operation | Forward | Bidirectional | Random Access |
|-----------|---------|---------------|---------------|
| `++it` | ✓ | ✓ | ✓ |
| `--it` | ✗ | ✓ | ✓ |
| `it + n` | ✗ | ✗ | ✓ |
| `it - n` | ✗ | ✗ | ✓ |
| `*it` | ✓ | ✓ | ✓ |
| `it[i]` | ✗ | ✗ | ✓ |
| `it1 < it2` | ✗ | ✗ | ✓ |

#### Container Iterator Support:

- **Vector**: Random Access
- **Deque**: Random Access
- **List**: Bidirectional
- **Set/Map**: Bidirectional
- **Stack/Queue**: No iterators!

---

## Quick Reference

### Container Comparison Table

| Container | Order | Access | Insert/Delete | Iterator | Use Case |
|-----------|-------|--------|---|----------|----------|
| **Vector** | No | O(1) | O(n) at front, O(1) at back | Random Access | Default choice, random access needed |
| **Deque** | No | O(1) | O(1) both ends | Random Access | Double-ended queue |
| **List** | No | O(n) | O(1) anywhere | Bidirectional | Frequent insertions/deletions |
| **Stack** | LIFO | O(1) top | O(1) | None | LIFO operations |
| **Queue** | FIFO | O(1) both | O(1) | None | FIFO operations |
| **Set** | Sorted | O(log n) | O(log n) | Bidirectional | Unique sorted elements |
| **Map** | Sorted | O(log n) | O(log n) | Bidirectional | Key-value pairs, sorted |
| **Unordered Set** | None | O(1) avg | O(1) avg | Forward | Unique elements, fast |
| **Unordered Map** | None | O(1) avg | O(1) avg | Forward | Key-value pairs, fast |
| **Priority Queue** | Heap | O(1) | O(log n) | None | Priority-based processing |

### Time Complexity: Algorithm Functions

| Function | Time Complexity | Notes |
|----------|-----------------|-------|
| `find()` | O(n) | Linear search |
| `binary_search()` | O(log n) | Requires sorted range |
| `sort()` | O(n log n) | Introsort algorithm |
| `make_heap()` | O(n) | Create heap from range |
| `push_heap()` | O(log n) | Add to heap |
| `pop_heap()` | O(log n) | Remove from heap |
| `unique()` | O(n) | Requires sorted range |
| `accumulate()` | O(n) | Sum elements |
| `partition()` | O(n) | Reorder by predicate |

### Functor Use Cases

1. **Custom Sorting** - Define sort order for objects
2. **Custom Priority** - Define priority in priority queues
3. **Conditional Algorithms** - Use with `find_if()`, `sort()`, `partition()`
4. **Stateful Operations** - Maintain state across multiple calls

---

## File Structure

```
STL/
├── ALGORITHM/
│   ├── heapalgo.cpp              # Heap operations
│   ├── iteratoranditeratingalgo.cpp # Iterator algorithms
│   ├── minmaxalgo.cpp            # Min/Max finding
│   ├── numericalgo.cpp           # Numerical computations
│   ├── searchfindalgo.cpp        # Binary search, bounds
│   └── setalgo.cpp               # Set operations
├── CONTAINERS/
│   ├── VECTORS/
│   │   ├── README.md
│   │   └── vectors.cpp           # Dynamic arrays
│   ├── DEQUE/
│   │   └── deque.cpp             # Double-ended queue
│   ├── LIST/
│   │   └── list.cpp              # Linked lists
│   ├── STACK/
│   │   └── stack.cpp             # LIFO container
│   ├── QUEUE/
│   │   └── queue.cpp             # FIFO container
│   ├── SET/
│   │   └── set.cpp               # Ordered and unordered sets
│   ├── MAP/
│   │   ├── map.cpp               # Ordered key-value pairs
│   │   └── unorderedmap.cpp      # Unordered key-value pairs
│   └── PRIORITYQUEUE/
│       └── priorityqueue.cpp     # Heap-based priority queue
├── FUNCTORS/
│   ├── functor.cpp               # Basic functor concept
│   ├── customsorting.cpp         # Custom sort comparators
│   ├── custompriority.cpp        # Custom priority comparators
│   └── customstudentcmp.cpp      # Multi-field sorting
├── ITERATORS/
│   └── basics.cpp                # Iterator types and usage
└── README.md                     # This file
```

---

## Compilation and Execution

### Compile a single file:
```bash
g++ -o output ALGORITHM/heapalgo.cpp
./output
```

### Compile with C++11 features:
```bash
g++ -std=c++11 -o output CONTAINERS/VECTORS/vectors.cpp
./output
```

### Compile all files:
```bash
g++ -std=c++11 -o stl_demo *.cpp
```

---

## Key Takeaways

1. **Containers** provide different ways to store data with different performance characteristics
2. **Algorithms** operate on containers through iterators in a generic way
3. **Iterators** act as a bridge between containers and algorithms
4. **Functors** enable custom behavior in algorithms and data structures
5. Choose the right container based on your access and modification patterns
6. Use algorithms from `<algorithm>` for common operations instead of manual loops

---

## Learning Tips

1. Run each file and observe the output
2. Modify the values and comparators to understand behavior
3. Try combining different containers with different algorithms
4. Understand iterator invalidation rules for each container
5. Use `const_iterator` when you don't modify elements
6. Profile your code if performance is critical to choose the right container

---

## Additional Resources

- **C++ Reference**: cppreference.com
- **STL Documentation**: isocpp.org/std/the-standard
- **Algorithm Visualizer**: visualgo.net

---

**Happy Learning! 🎓**
