C Basic Exercises
===

<a href="getting_started"></a>Getting Started
---

Step by step, topic after topic exercises created by [Dr Neil Hurley](https://www.cs.ucd.ie/AcademicProfile/NeilHurley/), an Associate Professor of [University College Dublin](http://www.ucd.ie/)

His Email: neil.hurley@ucd.ie
My Email: sngby98@gmail.com

<a href="prerequisites_setup_instructions"></a>Prerequisites and Setup Instructions
---
- [Installing and configuring C for Windows](http://www.mingw.org/wiki/InstallationHOWTOforMinGW)

<a href="choosing_a_text_editor"></a>IDE or Text Editors
---
There are many IDE or text editors to choose from, ultimately, which to use is subjective, so choose the one that suits you.

Personally, I prefer Geany for it is easy for lightweight use. You can also download their plugins which support a wide range of functions that you may find useful.

- [Downloading and using Geany](https://www.geany.org/Download/Releases)
- [Downloading and using Geany-plugins](https://plugins.geany.org/downloads.html)

<a href="acknowledgments"></a>Acknowledgments
---
- [Dr Neil Hurley](https://www.cs.ucd.ie/AcademicProfile/NeilHurley/)
- [University College Dublin](http://www.ucd.ie/)

<a href="questions"></a>Questions
---
Q1. Write a program to calculate the roots of a quadratic equation. A quadratic equation takes the form
	ax ! + bx + c = 0
and its roots can be computed using the mathematical formula:
	r1 = (- b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a)
	r2 = (- b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a)

A simple program should have the following structure (follow the structure used in the compound interest problem that we did in class):

a) Declare some floating-point numbers to store the input to the problem double a, b, c;
b) Declare some floating-point numbers to store the output of the problem i.e. the two roots double r1, r2;
c) Use the printf statement to ask the user to input the three required input numbers and use scanf to get the values that the user enters into your three input variables
d) Compute each of the roots, using the formula and functions from the
math library.
e) Use a printf statement to report your answers back to the user.

Note that the program will fail if for some types of input e.g. if (a==0) then the program will report a “division by zero” error. Improve the program by inserting if statements to catch these problems and deal with them without the program failing e.g. a simple fix would add a statement such as
	if (a == 0)
		printf(“The root cannot be computed when a is zero.\n”);

A better solution would output the correct answer for this special case. Similarly, deal with the case when the number under the square root is negative. For those who find the above steps easy: A less obvious problem with programs such as this is that they sometimes give inaccurate results for certain values of a, b and c e.g. a=10e-5, b=10e5,c=1.0. Can you think of any way to get a more accurate answer in these cases?



Q2. Compound interest can be computed using the formula
	A = P(1 + (r/(100k))^(nk))

Here A is the amount (in Euro) that is accumulated after n years, when the simple interest rate is r% per annum, k determines the frequency with which interest is added to the account and P (in Euro) is the starting amount of money. For instance if k=12, then interest is added every month. Write a program to compute values from this formula. The program should interact with the user, to find out whether the user is interested in computing A, P, r or n (you can assume a fixed k=12). Then it should ask the user to enter the three known values and compute the unknown one. For instance, if the user indicates that she is interested in computing n, then the program could have the following interaction with the user:

Please enter the starting principal (P): 1000
Please enter the final accumulated amount (A): 1100
Please enter the interest rate (as percentage rate per annum) (r): 10
The number of years required to reach this amount = 0.95

Similarly to Question 1, there are certain values of inputs for which the program would fail to give a sensible answer (what are these?). A good program should catch these bad inputs and report the problem to the user. Do you know what famous mathematical constant results when k → ∞ (for P=1, r=100 and n=1). Modify your program to try very large values of k. Does your program accurately calculate this constant?



Q3. Explore different ways to compute the two examples done in class: the Fibonacci sequence and the factorial of a number N:
		a. Using for loops and using while loops
		b. For factorial, computing from N downwards, rather than 1 upwards.
		c. For Fibonacci, what answers do you get when you print out 50 terms? Is there anything wrong? How can you fix it?

		
		
Q4. Write a program that reads in an integer, N, and computes the first N Pell numbers. The Pell sequence of integers is {0, 1, 2, 5, 12, 29, 70, 169, 408, 985, 2378 …} and is defined as P[0] = 0, P[1] = 1, P[N] = 2*P[N-1] + P[N-2]



Q5. Write a program that reads four floating point values w,x,y,z and modifies them so that w now contains the minimum value, x, contains the next smallest value, y, contains the next smallest value, and z contains the maximum value.



Q6. Write a program that reads in an integer, N, and computes and displays the first N Pavodan numbers. The Pavodan sequence of integers is {1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 12, 16, 21, 28, 37, 49, 65, 86, 114, 151, 200, 265,…} and is defined as P[1] = P[2] = P[3] = 1, P[N] = P[N-2] + P[N-3], N>=4.



Q7. Write a program that declares a float sum, reads in an integer value N and computes and displays the sum of the inverse of the first N numbers i.e. computes sum = 1 + 1/2 +1/3 + 1/4 + 1/5 + … + 1/N. Try the program for very large values of N e.g. N=1000000000. Do you notice anything strange about the result? How about if you declare double sum i.e. use a double-precision floating-point value for the sum instead?



Q8. Modify the selection.c program (available on the Moodle site) so that it finds and displays the kth largest value in an integer array that is greater than 0.5, where k is specified by the user.

Sample input and output:
		Enter the value for k: 2
		0.1 0.15 0.2 0.16 0.3 0.17 0.4 0.8 0.5 0.9
		The 2th largest number greater than 0.5 is 0.8
		
The program should write an appropriate message in the case that there are fewer than k integers in the list greater than 0.5.



Q9. Write a program to read an integer N and write out the base 2 representation of N e.g. if N=8 then the program should print to the screen 1000. If N=17, the program should write out 10001 etc. An algorithm to computer the base 2 representation of a number is as follows:

	Initialise Num to N
	Initialise digit to 0
	Declare an integer array a[] to hold the binary
	digits
	Repeat until Num==0:
		Assign to digit the remainder of the division of
		Num by 2
		Assign to Num the result of the integer division
		of Num by 2
		Save digit into the next location in array a[]
	End Repeat
	Write out the array a[] in reverse order

For example, to compute the binary representation of 19, we do the following:
		19/2 = 9 remainder 1
		9/2 = 4 remainder 1
		4/2 = 2 remainder 0
		2/2 = 1 remainder 0
		1/0 = 0 remainder 1
Reading the remainders from bottom to top, we see that the binary representation of 19 is 10011



Q10. Write a program to find the value in an integer array a[] of length N that occurs at least (N/2 + 1) times, if such a value exists. So, if
		a[]={2,3,2,2,2,3,2,1}
then the program should output 2, since 2 occurs 5>N/2 times. Try to think of a way to do this in linear (O(N) ) time. If you think a simple algorithm can do it in linear time, consider a[]={1,2,3,4,5,…,N}. In this case, how many operations does your algorithm execute before it is sure there is no such value?



Q11. Find, from amongst a set of positive lengths, a pair of lengths that sum exactly to a target length. A key step in developing an efficient solution to this problem is to sort the set of lengths. Since we haven’t discussed efficient sorting algorithms, I’ve included two test case files testcase_small_sorted.txt and testcase_large_sorted.txt on the moodle site, where the lengths are already sorted. Think carefully about how you can complete this problem to find the required pair in O(n) steps. The second test case contains 1,000,000 lengths and so a quadratic algorithm would take a long time to complete.

The input file consists of the following:
	• a line containing one positive integer x, denoting a target length in centimetres with 1 ≤ x ≤ 20.
	• a line containing one non-negative integer n denoting the number of lengths available with 0 ≤ n ≤ 1,000,000
	• n lines containing positive integers, sorted from smallest to largest denoting the available lengths in nanometres. No length is longer than 10 centimetres or 100,000,000 nanometres.
	
For each test case, output the text ‘none exists’ if no pair of lengths are available that exactly sum to the target length. Otherwise output, l1, l2 with l1 ≤ l2 should two such lengths l1 and l2 exist. In case multiple solutions exist, a solution maximising the absolute difference |l1−l2| should be output.



Q12. Consider the following algorithm to find all the prime numbers less than a given positive number N: Start with all the numbers in an array a[] ={2,3,4,5,…,N-1}. Now, keeping a[0]=2, filter out of this array all other numbers that are divisible by 2 to leave {2,3,5,7,9,11,13,15,17… }. Next, keeping a[1]=3, filter out of the remainder of the array, all numbers that are divisible by 3, leaving {2,3,5,7,11,13,17,.. }. At the ith iteration, keep a[i], and filter from a[i+1],…,a[L-1], all numbers that are divisible by a[i], where L is the current length of the array. By the end of this process, all the numbers remaining in the array are prime numbers. Using the filter pattern discussed in the notes, write a C program that implements this algorithm.



Note: Q13-Q21 should not use the functions in the string library.

Q13. Write a program that reads a message from a string and changes all the lowercase characters in the string to uppercase. Your program should not change any characters that are not alphabetic e.g. your program can start with a declaration such as
char msg[]=”Make this string uppercase”;

and should modify msg[] so that it now contains the string
”MAKE THIS STRING UPPERCASE”

(Follow the example in the notes for converting a string to an integer. Just as ch-‘0’ converts a character, such as ‘1’ into the integer 1, ch-(‘a’+’A’) converts a character such as ‘k’ into its uppercase value ‘K’. Your program should contain a similar loop as used in the example. However, we want to directly modify the characters in msg[], so it is better to have a counter i that keeps the position of the array that we are currently working on:

		while (i<MAX_STR_LEN && msg[i]!=’\0’)
		{
			if(msg[i] is lowercase alphabetic)
				msg[i] = convert to uppercase
			i++;
		}
		
You need to think about how to express the condition “msg[i] is lowercase alphabetic”



Q14. Write a simple substitution code for an alphabetic string. That is declare a permutation of the 26 characters e.g.
char perm[] = “qjczieaungsdfxmphybklortvw”

Now, given a message string e.g.
char msg[] = “secret message to encode”;

Replace all occurrences of ‘a’ with ‘q’ (since perm[0]=’q’)
Replace all occurrences of ‘b’ with ‘j’ (since perm[1]=’j’)
…
Replace all occurrences of ‘z’ with ‘w’ (since perm[25]=’w’)

So that, the message is modified to
“bicyik fibbqai km ixcmzi”

Improve your solution so that is will handle uppercase characters too, so that if
char msg[] = “Secret Message To Encode”;

the message is modified to
“Bicyik Fibbqai Km Ixcmzi”



Q15. Write a program that, given the same permutation string, can decode a message that was encoded with the method of Question 14.



Q16. Write a program to count the number of characters in a string. (Remember that a string ends when the ’\0’ terminator is encountered, regardless of whether any other characters are contained in the array after that point. If the null terminator is not encountered, then this should be reported as an error).



Q17. Write a program to count the number of uppercase characters in a string.



Q18. Write a program to count the number of non-alphabetic characters in a string. (An alphabetic character is any of the characters: ‘A’,’B’,…,’Z,‘a’,’b’,…,’z’)



Q19. Write a program to count the number of punctuation marks in a string, where a punctuation mark is any character in the string “;.,:?” Generalise your program so that the user can input any substring of characters, and it counts the number of occurrences of characters from this sub-string in a message string.



Q20. Write a program to reverse a string, so that if on input
		char msg[]=”Reverse me”
		at the end of the program
		msg[]=”em esreveR”



Q21. Write a program to remove all the spaces in a string so that if
		char msg[] = “Too many spaces”;
		it is modified to “Toomanyspaces”;



Q22. Write a program to count how many words occur in a string inputted by a user, where a word is a sequence of characters that are not separated by spaces.

		If the user types:
		The dog, the cat and the mouse.
		the program should output
		The message contains 7 words.

Note that there is a string library function strtok that would help in solving this problem – however do it without using that function.



Q23. Write a program to count how many times the word “dogs” occurs in a string, where the case of the characters in the word is ignored.

If the user types:
Black dogs white dogs and red dogs - Dogs come in
many colours.
then the program should output
There are 4 occurrences of the word dogs.

One approach to this program is to re-use code from Question 1 to identify the next word in the sentence. Then compare that word with the word “dogs”. You may use string library functions, e.g. strcmp to do the comparison, but make sure you deal with the case of the characters first. A good program would also deal with additional punctuation around the word “dogs” e.g. if the input is:

Black dogs, white dogs and red dogs. Dogs come in many colours.

then it should still find 4 occurrences of the word “dogs”.



Q24. Write a program to remove all punctuation marks from an inputted message. The program should read an input message from a user into an array of characters; it should then modify the contents of the array, so that all punctuation marks are removed; and finally it should print out the modified message using a single printf statement.

If the user types:
Too, many, punctuation marks:; by far!!
the program should output
Too many punctuation marks by far

For the purposes of this question, a punctuation mark is any one of the following seven characters: !’?;:,.



Note: Q25-Q32 are all about packaging some of the programs that were given in previous assignments into functions. As well as writing the required function, also write a main program that calls the function.

Q25. Write a function to compute the area of a triangle, according to the formula [½ (base * height)].



Q26. Write a function to compute the area of a circle, as PI*radius*radius.



Q27. Write a function to input an amount in Euros and convert it to Sterling, assuming 1E=0.80Stg.



Q28. Write a function to compute the roots of a quadratic equation, which takes three floating point numbers a, b,c as arguments, as well as an integer argument, to indicate which of the two roots to return.



Q29. Write a function to count how many words occur in a given input string, where a word is a sequence of characters that are not separated by spaces



Q30. Write a function removeChars that takes two strings as input and removes all the characters that appear in the second string from the first string e.g. if the first string is “hello..there, you!” and the second string is “.!,”, then, when the function returns, the first string contains “hellothere you”



Q31. Write a function that takes an integer array as input and returns true or false depending on whether or not it is a palindrome.



Q32. Write a function that takes an integer array a[] as input and an integer k and returns the kth largest value in the array.



Q33. Change the convert_secs function so that it returns 4 values corresponding to days, hours, minutes and seconds, equivalent to a given total number of seconds. The values should be set to a “canonical form” such that

		0<=seconds<60
		0<=minutes<60
		0<=hours<24
		0<=days

Write the function in the two ways discussed in class – either returning an appropriate struct, named Time, or returning the values in the arguments.



Q34. The prime factorization of a given positive number N is the set of prime numbers that when multiplied together give N. For instance, the prime factorization of N=8, is {2,2,2} since 2x2x2 = 8 and the prime factorization of 24 is {2,2,2,3} since 2x2x2x3 =24. Write a function that prints out the prime factorization of an integer N given as its single input argument.

Note, it is not actually necessary to compute the set of prime numbers in order to solve this problem. A simple algorithm checks all the numbers between 2 and N, to see if they divide into N. If one does, keep dividing it into N until it no longer divides. The program will contain a loop such as:

	while (N % i == 0){ 	/* while i divides into N */
		print out i
		N = N/i; 			/* divide i out of N */
	}



Q35. 3. Recalling Q1, consider the following equivalent expressions for the roots of a quadratic equation:
	r1 = (- b + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a)
	r2 = (- b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a)

Note that this is equivalent to
	r1 = 2c / (-b - sqrt(b^2 - 4ac))
	
Write a function called quadroots(), that takes three input arguments, a, b and c and returns the two roots in two other pointer arguments. The function should return an integer value, which indicates the number of roots found. A negative return value indicates that the roots are complex.

The prototype of quadroots() should be as follows:

int quadroots(double a, double b, double c, double *r1, double *r2);

Check if the function returns a better answer when a=10e-5, b=10e5,c=1.0 than your original program did.



Q36. Write a function to calculate sin(x) using the following power-series
expansion:

	sin x = x - x^3/3! + x^5/5! - x^7/7! + x^9/9! - x^11/11! + ...

Write a main function that reads a double-precision number from a user, and writes out the value of sin(x) computed using your function and computed using the function in the math library, as well as the difference between them.



Q37. Write a function to calculate the cubed-root of a double precision number c. Use Newton’s algorithm (follow the example in the file roundoff.c where the algorithm is used to compute the square root).

In this case, the algorithm should be applied to the function
		f(x) = x^3 − c
with derivative:
		f'(x) = 3x^2

Newton’s algorithm finds a root of f(x), by choosing a starting point 𝑥!
and continuing to generate new points using
		xn = x(n-1) - f(x(n-1))/(f'(x(n-1)))



Q38. Repeat the exercise of Question 1 for the power-series expansion of the natural logarithm (i.e. to base e), given by
		log(1+x) = x - x^2/2 + x^3/3 - x^4/4 + x^5/5 - x^6/6 + ...
Note that this series only converges for x < 1