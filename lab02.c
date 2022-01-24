/*
 * lab01.c
 *
 *  Created on: Aug 28, 2020
 *      Author: chaun
 */
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <float.h>
int main(void) {
	//name
	char fname[] = "Chau";
	char lname[] = "Nguyen";
	char name[sizeof(fname) + 1 + sizeof(lname) + 1] = " ";
	printf("Welcome to CSCI2025L.\n");
	printf("Today's topic is Lab.\n\n");
	printf("My name is: %s \n\n", fname);
	//printf("My full name is %s\n\n", fname + " " + lname);
	strcpy(name, fname);
	strcat(name, " ");
	strcat(name, lname);
	printf("My full name is: %s\n\n", name);
	//storage
	printf("Storage size for float : %d \n", sizeof(float));
	printf("Storage size for integer : %d \n", sizeof(int));
	printf("Storage size for double : %d \n", sizeof(double));
	printf("Storage size for long : %d \n", sizeof(long));
	printf("Storage size for char : %d \n", sizeof(char));
	//range int, long, float, double, and char
	printf("Integer range:\t%d\t%d\n", INT_MIN, INT_MAX);
	printf("Long range:\t%ld\t%ld\n", LONG_MIN, LONG_MAX);
	printf("Float range:\t%e\t%e\n", FLT_MIN, FLT_MAX);
	printf("Double range:\t%e\t%e\n", DBL_MIN, DBL_MAX);
	printf("Char range:\t%d\t%d\n", CHAR_MIN, CHAR_MAX);
	//
	int a = 23;
	int b = 10;
	int c;
	float d;
	c = a + b;
	printf("Line 1 - Value of c is %d\n", c);
	c = a - b;
	printf("Line 2 - Value of c is %d\n", c);
	c = a * b;
	printf("Line 3 - Value of c is %d\n", c);
	d = (float) a / b;
	printf("Line 4 - Value of d is %f\n", d);
	c = a % b;
	printf("Line 5 - Value of c is %d\n", c);
	c = a++;
	printf("Line 6 - Value of c is %d\n", c);
	c = a--;
	printf("Line 7 - Value of c is %d\n", c);

}

