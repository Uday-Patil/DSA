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
int * initArray(int n) {
	static int* ptr;
	int i;
	
	ptr = (int*)calloc(n,sizeof(int));
	
	for ( i = 0; i < n; ++i) {
		scanf("%d", ptr+i);
	}
	
	return (ptr);
}

/* function to insert an element at a given in to the passed array */
int * insertElement(int *p,int size) {
	int i, pos, ele;
	
	back:
	printf("\n Enter the element to insert: ");
	scanf("%d", &ele);
	
	printf("\n Enter the position where element should be inserted: ");
	scanf("%d", &pos);
			
	if(pos <= size) {
		for(i=size-1; i>= pos-1; i--)
		{
			*(p+(i+1)) = *(p+i);
		}
	*(p+(pos-1)) = ele;
	} 
	else {
		printf("\n Position out of bound");
		goto back;
	}
	return p;
}

/* function to delete an element from the passed array to the provided index */
int * deleteElement(int *p, int size) {
	int i, pos;
	
	printf("\n Enter the position at which element should be deleted: ");
	scanf("%d", &pos);
	
	i = pos;
	while( i<size) {
		*(p+(i-1)) = *(p+i);
		printf("\n %d at %d", *(p+(i-1)), i);
		i++;
	}
	
	return p;
}