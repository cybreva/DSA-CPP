# 📘 DSA Notes #1 - Time Complexity

## What is Time Complexity?

Time Complexity tells us **how the running time of an algorithm grows as the input size increases.**

It does **not** measure the actual time in seconds.
Instead, it measures how the **number of operations** changes when the input becomes larger.

---

## Example

```cpp
for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
}
```

If:

- n = 10 → loop runs 10 times
- n = 100 → loop runs 100 times
- n = 1000 → loop runs 1000 times

The number of operations increases **proportionally** with the input size.

This is called **Linear Time Complexity**, written as:

```
O(n)
```

---

## Common Time Complexities

### O(1) - Constant Time

The number of operations stays the same, no matter how large the input is.

Example:
```cpp
arr[5];
unordered_set.find(x);
```

---

### O(n) - Linear Time

The number of operations grows directly with the input size.

Example:
```cpp
for (int i = 0; i < n; i++)
```

---

### O(log n) - Logarithmic Time

The problem size becomes smaller after every step.

Example:
- Binary Search
- `set` operations
- `map` operations

---

## STL Examples

| Container / Operation | Average Time |
|------------------------|-------------:|
| Vector Linear Search   | O(n) |
| set::find()            | O(log n) |
| map::find()            | O(log n) |
| unordered_set::find()  | O(1) |
| unordered_map::find()  | O(1) |

---

## Key Takeaways

- **O(1)** → Constant time
- **O(n)** → Time grows proportionally with input size
- **O(log n)** → Time grows very slowly as input increases

The goal in DSA is to write algorithms that work efficiently even for very large inputs.