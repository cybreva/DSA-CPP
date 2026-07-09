# Space Complexity

## What is Space Complexity?

Space Complexity describes how much extra memory an algorithm or program requires as the input size increases.

It does **not** measure the exact amount of memory in bytes.

It measures how memory usage grows with respect to input size.

### Time Complexity vs Space Complexity

| Concept          | Measures                           |
| ---------------- | ---------------------------------- |
| Time Complexity  | How the number of operations grows |
| Space Complexity | How the memory usage grows         |

Example:

```cpp
int x = 10;
```

The program always uses memory for one integer.

The input size does not affect memory usage.

Space Complexity:

```
O(1)
```

---

# Constant Space - O(1)

Constant space means the memory usage remains the same regardless of input size.

Example:

```cpp
int sum = 0;

for(int i = 0; i < n; i++)
{
    sum += i;
}
```

Memory used:

```
sum
i
```

Only two variables exist.

The value of `i` changes, but the same memory location is reused.

It does not create new variables every iteration.

Therefore:

```
Space Complexity = O(1)
```

---

# Linear Space - O(n)

Linear space means memory grows proportionally with input size.

Example:

```cpp
int n;
cin >> n;

int arr[n];
```

If:

```
n = 5
```

Memory:

```
[ ][ ][ ][ ][ ]
```

If:

```
n = 1000
```

Memory:

```
[ ][ ][ ][ ]........1000
```

Input size increases, memory increases.

Therefore:

```
Space Complexity = O(n)
```

---

# Important Rule

A loop does not automatically mean O(n) space.

Example:

```cpp
for(int i = 0; i < n; i++)
{
    cout << i;
}
```

Time Complexity:

```
O(n)
```

Because the loop runs n times.

Space Complexity:

```
O(1)
```

Because only one variable `i` is stored.

The same variable is overwritten in every iteration.

---

# Input Space vs Auxiliary Space

## Input Space

Memory required to store the input provided by the user.

Example:

```cpp
vector<int> numbers;
```

The vector itself stores input data.

---

## Auxiliary Space

Extra memory used by the algorithm while processing the input.

Example:

```cpp
vector<int> copy = original;
```

If original contains n elements:

```
Original:

[1][2][3][4]


Copy:

[1][2][3][4]
```

An extra vector is created.

Auxiliary Space:

```
O(n)
```

---

# Space Complexity of Common Data Structures

## Vector

```cpp
vector<int> nums(n);
```

Stores n elements.

Space:

```
O(n)
```

---

## Stack

```cpp
stack<int> st;
```

If n elements are inserted:

```
[1]
[2]
[3]
...
[n]
```

Space:

```
O(n)
```

---

## Queue

A queue storing n elements also requires:

```
O(n)
```

space.

---

## unordered_set

An unordered set storing n unique elements requires memory for those elements and hash table storage.

Average Space:

```
O(n)
```

---

# Recursion and Space Complexity

Recursion uses stack memory.

Example:

```cpp
void func(int n)
{
    if(n == 0)
        return;

    func(n-1);
}
```

For:

```
func(3)
```

Memory stack:

```
func(3)
 |
func(2)
 |
func(1)
 |
func(0)
```

All function calls stay in memory until recursion finishes.

Therefore:

```
Space Complexity = O(n)
```

---

# Common Mistakes

## Mistake 1:

Thinking every loop has O(n) space.

Wrong:

```cpp
for(int i = 0; i < n; i++)
{
}
```

Correct:

```
Space = O(1)
```

---

## Mistake 2:

Ignoring extra data structures.

Example:

```cpp
vector<int> temp;
```

If it stores n elements:

```
Space = O(n)
```

---

## Quick Summary

| Code Pattern              | Space Complexity |
| ------------------------- | ---------------- |
| Few fixed variables       | O(1)             |
| Single array of size n    | O(n)             |
| Vector storing n elements | O(n)             |
| Copy of n elements        | O(n)             |
| Recursion depth n         | O(n)             |
| Nested storage            | O(n²) or more    |

---

## Key Idea

Space Complexity answers one question:

> "As input grows, how much extra memory does my program need?"

Always check:

* Are new variables being created?
* Is a data structure growing?
* Is recursion creating stack frames?
* Is extra memory being allocated?

Do not look at loops only. Look at memory growth.
