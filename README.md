# Linear Algebra Basics: Matrix Multiplication in C


Given the rules of matrix multiplication, we cannot multiply two vectors when they are both viewed as column matrices. If we try to multiply an n×1 matrix with another n×1 matrix, this product is not defined. The number of columns of the first matrix (1) does not match the number of rows of the second matrix (n). To rectify this problem, we can take the transpose of the first vector, turning it into a 1×n row matrix. With this change, the product is well defined; the product of a 1×n matrix with an n×1 matrix is a 1×1 matrix, i.e., a scalar.

This code is susceptible to modification. It's kept stock as much as possible for different interpretations. 

## Why use it?

Allows to do matrix multiplication in C with different Shapes but with respect of the rule of the matrix multiplication (Matrices Sizes/Shapes).

[Here is a way to understand the logic behind it more clearly in a visualized way.](http://matrixmultiplication.xyz/)


## Breaking Down the Code

* First, Prompting the user to enter the matrices' size.
* Dynamic memory allocation for the matrices.
* Prompting the user to fill in the matrices, and displaying it back to the user.
* The matrix multiplication algorithm takes place.
* Finally, we display the multiplication result for the user.

Have a wonderful day!
