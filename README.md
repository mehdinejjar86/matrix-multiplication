# Linear Algebra Basics: Dot Product and Matrix Multiplication in C


Given the rules of matrix multiplication, we cannot multiply two vectors when they are both viewed as column matrices. If we try to multiply an n×1 matrix with another n×1 matrix, this product is not defined. The number of columns of the first matrix (1) does not match the number of rows of the second matrix (n). To rectify this problem, we can take the transpose of the first vector, turning it into a 1×n row matrix. With this change, the product is well defined; the product of a 1×n matrix with an n×1 matrix is a 1×1 matrix, i.e., a scalar.

This code is susceptible to modification ( Adding VLA/ Dynamic Memory Allocation ). It's kept stock as much as possible for different interpretations. 

## Why use it?

Allows to do a dot product for matrices in C with different Shape but in respect of the rule of the dot product (Matrices Sizes/Shapes).

[Here is a way to understand the logic behind it more clearly in a visualized way.]http://matrixmultiplication.xyz/


## Breaking Down the Code

`
#define SIZE 3
#define MSy1 5
#define MSx2 4
`

This are the sizes of the matrices (just so you can keep track of the code). VLA is not recommended. However, it is necessary to make sure to raize an error when the size is different (Y-axis of matrix 1 and X-axis of matrix 2) for both matrices.

Have a wonderful day!
