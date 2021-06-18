# Big-O of C++ STL Data Structures

| data strucutre | insert at front/top | insert at back | insert at any | find | remove at front/top | remove at back | remove at any |
| ------ | :------: | :------: | :------: | :------: | :------: | :------: | :------: |
| vector         | O(1)         | O(n)         | O(n)         | O(n)     | O(1)     | O(n)     | O(n)     |
| queue          | -            | O(1)         | O(1) [1]     | O(1) [1] | O(1)     | -        | -        |
| stack          | -            | O(1)         | O(1) [1]     | O(1)     | O(1)     | -        | -        |
| set/map        | O(log n) [2] | O(log n) [2] | O(log n) [2] | O(log n) | O(log n) | O(log n) | O(log n) |
| priority_queue | -            | O(log n) [3] | -            | O(1) [1] | O(1)     | -        | -        |

- [1] Find at front/top only, cannot find other elements. 

- [2] Cannot insert at any position (It is always sorted)

- [3] In pratice, faster than set/map
