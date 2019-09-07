/* SYSC 2006 Winter 2018 Lab 10. */

#include <stdio.h>
#include <math.h>

/* Return x raised to the power n for n >= 0. */
double power(double x, int n)
{ 	double p;
    if ( n == 0) {
		return 1;
    }
	if (n == 1) {
		return x;
	}

    p = x * power( x,  n-1 );
    return p;
}

/* Return the number of digits in integer n, n >= 0. */
int num_digits(int n)
{   if ( n < 10 ) {
		return 1;
	}
    int sum = 1 + num_digits(n / 10);
    return sum;
}

/* Return the count of the number of times target occurs in the first 
 * n elements of array a.
 */   
int occurrences(int a[], int n, int target)
{   int sum = 0;  
	if ( n ==0) {
		return 0;
	}


	if ( a[n-1] == target ) {
		sum =  1;
	}
	sum = sum + occurrences( a,  n-1,  target);

    return sum;
}

/* Challenge exercise: return x raised to the power n for n >= 0. */
double power2(double x, int n)
{
    return -1;
}
