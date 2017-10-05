#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "header.h"

void stack_main(tower array[])
{
	printf("\n-- Inserting into Stack --\n");
	NodePtr stackPtr = NULL;
	int i;
	for (i = 0; i < count; ++i) // Moves through array
	{
		push(&stackPtr, array[i]); // Adds array values to stack
	}	
	printf("Would you like to search for 1. A Name(char) 2. A Height(int) 3. No Search\n");
	int choice = 0;
	scanf("%d", &choice);
	char c_search[30];
	int i_search = 0;
	switch ( choice )
			{
			case 1:
				printf("Enter a Name to search for:\n");
				scanf("%s", c_search);
				list_char_search(stackPtr, c_search);
				break;
			case 2: 
				printf("Enter a Height to search for:\n");
				scanf("%d", &i_search);
				list_int_search(stackPtr, i_search);	
				break;
			case 3: 
				break;	
	}
	int y_n;
	printf("Would you like to output the stack into a txt file? 1.Yes 2.No)\n");
	scanf("%d", &y_n);
	if (y_n == 1)
	{
		FILE *fp;
		fp = fopen ("stack.txt", "w"); // Creates the txt file
		printf("\n-- Writing to File --\n");
		while((stackPtr) != NULL)
		{
			file_print(fp, (stackPtr)->data); // Prints the stack in the file
			stackPtr = (stackPtr)->nextPtr;
		}
	}
}

void push(NodePtr *topPtr, tower info ) // Inserts a Tower into the stack
{
	NodePtr newPtr; 
	newPtr = malloc( sizeof( Node ));

	if(newPtr != NULL)
	{
		newPtr->data = info;
		newPtr->nextPtr = *topPtr;
		*topPtr = newPtr;
	} 
	else  
	{
		printf( "Data not inserted. No memory available.\n");
	}
} 
