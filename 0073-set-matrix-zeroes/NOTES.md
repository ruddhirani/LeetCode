Brute force::
when ever we find a 0 we traverse its entire row and column , thn set it to a value that is not in the range of the matrix but we don't modify the 0s as it may effect other rows or columns.
​
time complexity:-  O((NxM)x(N+M)) ---- for traversing entire row and column
space complexity:- O(1) ass we are doing all changes in the same matrix
​
optimize 1:
two dummy arrays -- one is size of column and one is size of row
after that set accordingly the dummy row or column as 0 as u find a zero in the matrix
thn after traversing and updating dummies , u again traverse the matrix and if u find 0 in either dummy row or dummy column of that index ---- update the place as 0.
​
time complexity:-  O((NxM+NxM)) ---- for traversing entire array twice
space complexity:- O(N)+O(M)----- as we took 2 dummy array of row size and col size.
​