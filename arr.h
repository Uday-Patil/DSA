/*
 ============================================================================
 Name        : arr.h
 Author      : Uday Patil
 Version     :
 Copyright   : Your copyright notice
 Description : Array Operations
			   This header file contains function declarations used by 
			   ArrayDataStructure.c program to demonstrate Data structure 
			   algorithms based on Arrays
 ============================================================================
 */
#include <stdio.h>
/* function to initialise an array */
int * initArray(int n);

/* function to insert an element at a given in to the passed array */
int * insertElement(int *p,int size);

/* function to delete an element from the passed array to the provided index */
int * deleteElement(int *p, int size);