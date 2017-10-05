#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "header.h"

void intsearch_main(tower array[])
{
	int choice, search;
	printf("\n -- Interger Search --\n");
	search = s_prompt(search);
	printf("Search with 1. Linear Search or 2. Binary Search\n");
	scanf("%d", &choice);
	if(choice == 1)
	{
		l_search(array, search);
	}
	if(choice == 2)
	{
		BS_A_INT(array);
		b_search(array, search);
	}
}

int s_prompt(int search)
{
	printf("What Number(int) would you like to search for?\n");
	scanf("%d", &search);
	return search;
}

void l_search(tower array[], int search) // Linear Search
{
	int i;
	for (i = 0; i < count; ++i)
	{
		if (array[i].height == search)
		{
			printf("- Result Found -\n");
			print_tower(array[i]);
		}
		if (i == count)
		{
			printf("Not found! %d is not present\n", search);
		}
	}
}

void b_search(tower array[], int search) // Binary Search
{
    int c, first, last, middle;
 
    first = 0;
    last = count - 1;
    middle = (first+last)/2;
 
    while (first <= last) 
    {
      if (array[middle].height < search)
      {
         first = middle + 1;    
      }
      else if (array[middle].height == search) 
      {
      	 printf("- Result Found -\n");
         print_tower(array[middle]);
         break;
      }
      else
      {
         last = middle - 1;
      }
      middle = (first + last)/2;
    }
   if (first > last)
   {
      printf("Not found! %d is not present\n", search);
   }
}

void list_char_search(NodePtr startptr, char search[]) // Searches a List or Stack for a char[]
{
	int r_bool = 10;
	while(startptr != NULL)
	{
		r_bool = strcmp(startptr->data.name, search);
		if(r_bool == 0)
		{
			printf("- Result Found -\n");
			print_tower(startptr->data);
			break;
		} 
		startptr = startptr->nextPtr;
	}
	if (r_bool != 0)
	{
		printf("Not found! %s is not present\n", search);
	}
}

void list_int_search(NodePtr startptr, int search) // Searches a List or Stack for a int
{
	int result = 0;
	while(startptr != NULL)
	{
		if(startptr->data.height == search)
		{
			printf("- Result Found -\n");
			print_tower(startptr->data);
			result = 1;
			break;
		} 
		startptr = startptr->nextPtr;
	}
	if (result != 1)
	{
		printf("Not found! %d is not present\n", search);
	}
}