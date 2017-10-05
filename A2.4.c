#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "header.h"

void data_enter(tower array[])
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

void write_to_file(tower array[])
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

void file_print(FILE *fileptr, tower print)
{
	fprintf(fileptr, "%s %d %.2f\n", print.name, print.height, print.weight);
}

void print_array(tower array[])
{
	int i;
	for (i = 0; i < count; ++i)
	{
		printf("%s - %d - %.2f\n", array[i].name, array[i].height, array[i].weight);
	}
}

void print_tower(tower print)
{
	printf("Name: %s\n", print.name);
	printf("Height: %d\n", print.height);
	printf("Weight: %.2f\n", print.weight);
}

void read_file(tower array[])
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

	//data_enter(array);
	//write_to_file(array);
	read_file(array);
	print_array(array);

	int choice;
	instructions();
	scanf("%d", &choice);

	NodePtr listPtr;
	tower tmp;

	while (choice != 6 )
		{
			switch ( choice )
			{
			case 1:
				sorts_main(array);
				print_array(array);
				break;
			case 2: 
				intsearch_main(array);		
				break;
			case 3: 
				stack_main(array);
				break;	
			case 4: 
				list_main(&listPtr, array);
				print_list(&listPtr);
				break;								
			case 5:	
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
			} /* end switch*/
			printf("\nInsert next menu choice\n");
			scanf( "%d", &choice );
		} /* end while*/
	puts( "Exiting now.." );
	return 0;
}