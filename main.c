#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "header.h" // Header File

void data_enter(tower array[]) // Inputs Tower Data
{
	int i;
	printf("-- Enter Tower Data --\n");
	for (i = 0; i < count; ++i)
	{
		printf("- Tower %d -\n", i+1);
		printf("Name:\n");
		scanf(" %s", array[i].name);
		printf("Height:\n");
		scanf(" %d", &array[i].height);
		printf("Weight:\n");
		scanf(" %f", &array[i].weight);
	}
}

void write_to_file(tower array[]) // Writes an Array of Towers to a Text File
{
	FILE *fp;
	fp = fopen ("towers.txt", "w");
	int i;
	printf("\n-- Writing to File --\n");
	for (i = 0; i < count; ++i)
	{
		file_print(fp, array[i]);
	}
	fclose(fp);
}

void file_print(FILE *fileptr, tower print) // Writes a single Tower onto a file
{
	fprintf(fileptr, "%s %d %.2f\n", print.name, print.height, print.weight);
}

void print_array(tower array[]) // Prints an Array in the console
{
	int i;
	for (i = 0; i < count; ++i)
	{
		printf("- Tower %d -\n", i+1);
		print_tower(array[i]);
	}
}

void print_tower(tower print) // Prints a single tower in the console
{
	printf("Name: %s\n", print.name);
	printf("Height: %d\n", print.height);
	printf("Weight: %.2f\n", print.weight);
}

void read_file(tower array[]) // Reads a file and puts the values in an array
{
	int i;
	FILE *fp;
	fp = fopen ("towers.txt", "r");
	for (i = 0; i < count; ++i)
	{
		fscanf(fp, "%s %d %f\n", array[i].name, &array[i].height, &array[i].weight);
	}
	fclose(fp);
}

void instructions() 
{
	puts( "\nEnter your choice:\n"
		"1 - Sort Data\n"
		"2 - Search for a Height\n"
		"3 - Create Stack\n"
		"4 - Create Linked List\n"
		"5 - Insert Extra Data\n"
		"6 - Quit\n");
}

int cherror(int choice)
{
	printf("\n- Invalid Entry - \n");
	printf("Redo Choice\n");
	scanf("%d", &choice);
	return choice;
}

int main()
{
	tower array[count];
	int i;

	//data_enter(array); // Enter Data into an Array
	//write_to_file(array); // Write the Array to a file
	read_file(array); // For Testing - Reads a file rather then having to input 
	print_array(array); // For Testing - Prints the array in the console

	int choice;
	instructions(); // Prints the Instructions Menu
	scanf("%d", &choice);

	NodePtr listPtr;
	tower tmp;

	while (choice != 6 ) // Exit on 6
		{
			switch ( choice )
			{
			case 1: // Sorting the Array of Towers
				sorts_main(array);
				print_array(array);
				break;
			case 2: // Searches for a Height (int) in the Array
				intsearch_main(array); 		
				break;
			case 3: // Inputs the Array into a Stack
				stack_main(array); 
				break;	
			case 4: // Inputs the Array into a Linked List
				list_main(&listPtr, array);
				print_list(&listPtr);
				break;								
			case 5:	// Inserts a new tower structure into the list
				printf("\n-- Insert New Tower --\n");
				printf("Name:\n");
				scanf(" %s", tmp.name);
				printf("Height:\n");
				scanf(" %d", &tmp.height);
				printf("Weight:\n");
				scanf(" %f", &tmp.weight);
				insert(&listPtr, tmp);
				print_list(&listPtr);
				break;
			default:
				puts ("Invalid choice.\n" );
				instructions();
				scanf(" %d", &choice);				
				break;
			} 
			printf("\nInsert next menu choice\n");
			scanf( "%d", &choice );
		} 
	puts( "Exiting now.." );
	return 0;
}