# going-error-free-with-c
Trying to design codes with least possible case for generating error and maximizing ways to have code run appropriately as desired by user

#1 fibo_n_facto.c
  Its a menu based program to calculate factorial or nth Fibonacci of the given integer. The main focus was put on the ways to eliminate any errors that may occur like in the case where,
I. 	Wrong input is given for options
II. 	Wrong input is given for conversions
III. 	The value is extremely large for calculations.
The ways of eliminating errors are
I.	using approximations for values greater than -- long long int
II.	finding all the ways in which the input might be given
	for example: the program even works if the input given is in characters and describes the name of the option
III.	All the errors other errors are catched specifically and corresponding message is displayed
