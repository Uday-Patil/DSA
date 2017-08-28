/*
 ============================================================================
 Name        : ArrDSOperations.c
 Author      : Uday Patil
 Version     :
 Copyright   : Your copyright notice
 Description : Insertion Operation
			   Insert operation is to insert one or more data elements into
			   an array. Based on the requirement, a new element can be added
			   at the beginning, end, or any given index of array. Here, we
			   see a practical implementation of insertion operation, where
			   we add data at the end of the array
 ============================================================================
 */

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
int * insertElement(int *p, int element, int size, int pos) {
	int i;
	
	if(pos <= size) {
		for(i=size-1; i>= pos-1; i--)
		{
			*(p+(i+1)) = *(p+i);
		}
	} 
	else {
		printf("\n Position out of bound");
	}
	*(p+(pos-1)) = element;
	return p;
}

/* function to delete an element from the passed array to the provided index */
int * deleteElement(int *p, int pos, int size) {
	int i=pos;
	
	while( i<size) {
		*(p+(i-1)) = *(p+i);
		printf("\n %d at %d", *(p+(i-1)), i);
		i++;
	}
	
	return p;
}