  

# 2D Array-related Problem Solving With C++

This problems are very simple and basic problems in 2D array concept of C++ .
Solultions are inserted in .cpp file by question  number.

### A

WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n must be an odd number). Then calculate the sum of the integers based on the following position pattern (consider only the boxed position during the sum). Please see the input-output.

|Input Sample | Output Sample  |
|-------------|----------------|
| 5<br/>**1 2 3** 4 **5**<br/>2 3 **4** 1 **6**<br/>**3 4  9 6 7**<br/>**4** 2 **6** 7 8<br/>**5** 4 **3 2 1** | 71 |
|7<br/>**1 1 1 1** 1 1 **1**<br/>1 1 1 **1** 1 1 **1**<br/>1 1 1 **1** 1 1 **1**<br/> **1 1 1 1 1 1 1**<br/>**1** 1 1 **1** 1 1 1<br/>**1** 1 1 **1** 1 1 1<br/>**1** 1 1 **1 1 1 1**<br/> | 25 |

###  B
WAP that will take inputs of a n sized square matrix into a 2D array. Now show all the elements of its two diagonals.  [Reference](http://en.wikipedia.org/wiki/Main_diagonal)
|Input Sample | Output Sample  |
|--|--|
| 5<br/>1 2 3 4 5<br/> 5 4 3 2 1<br/>2 2 2 2 2<br/>6 7 8 9 0<br/>1 9 3 7 4| Major diagonal: 1 4 2 9 4<br/>Minor diagonal: 5 2 2 7 1 |

### C
WAP that will take the size of an identity matrix from the user and generate the identity matrix into a 2D array. Finally display it. [Reference:](http://en.wikipedia.org/wiki/Identity_matrix)
|Sample Input|Sample Output  |
|--|--|
| 5 | 1 0 0 0 0<br>0 1 0 0 0<br>0 0 1 0 0<br>0 0 0 1 0<br>0 0 0 0 1 |
### D
WAP that will take (m x n) integer inputs into a matrix of dimension m x n. Now reverse that matrix within itself and display it. The reversal means swapping the 1st column with the nth column, the 2nd column with the (n-1)th column, and so on…
|Sample Input|Sample Output  |
|--|--|
| 3 3<br>1 2 3<br>4 5 6<br>2 9 2 | 3 2 1<br>6 5 4<br>2 9 2 |
|2 6<br>1 2 3 4 5 6<br>9 8 7 6 5 4 | 6 5 4 3 2 1<br>4 5 6 7 8 9 |

### E
WAP that will take (m x n) positive integer inputs into a matrix of dimension m x n. Now replace all the duplicate integers by -1 in that matrix. Finally display it.
|Sample Input|Sample Output  |
|--|--|
| 3 3<br>1 7 3<br>7 4 5<br>3 5 6 | 1 7 3<br>-1 4 5<br>-1 -1 6 |
|2 6<br>2 2 2 2 2 2<br>6 5 4 3 2 1 | 2 -1 -1 -1 -1 -1<br>6 5 4 3 -1 1|




