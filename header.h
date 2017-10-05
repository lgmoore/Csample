// Assignment 2 Q4 Header File

// Declarations
	#define count 5 

	typedef struct towertag // The Tower Structure
	{
		char name[30];
		int height;
		float weight;
	}tower;

	struct towerNode 
	{
		tower data;
		struct towerNode *nextPtr;
	};

		typedef struct towerNode Node;
		typedef Node *NodePtr;

// Start Functions
	void data_enter(tower array[]);
	void write_to_file(tower array[]);
	void file_print(FILE *fileptr, tower print);

// Testing Functions
	void print_array(tower array[]);
	void read_file(tower array[]);

// Messages and Errors
	void instructions();
	int cherror(int choice);
	void print_tower(tower print);

// Sort Menu Functions
	void sorts_main(tower array[]);
	void sorts_final(tower array[], int AorD, int HorW, int BorSorI);

// Sort Functions
	// Bubble Sorts
		void BS_A_INT(tower a[]);
		void BS_D_INT(tower a[]);
		void BS_A_FL(tower a[]);
		void BS_D_FL(tower a[]);
	// Selection Sorts
		void SEL_A_INT(tower a[]);
		void SEL_D_INT(tower a[]);
		void SEL_A_FL(tower a[]);
		void SEL_D_FL(tower a[]);
	// Insertion Sorts
		void IN_A_INT(tower a[]); 
		void IN_D_INT(tower a[]);
		void IN_A_FL(tower a[]);
		void IN_D_FL(tower a[]);

// Search Functions
	void intsearch_main(tower array[]);
	int s_prompt(int search);
	void l_search(tower array[], int search);
	void b_search(tower array[], int search);
	void list_char_search(NodePtr startptr, char search[]);
	void list_int_search(NodePtr startptr, int search);

// Stack Functions
	void stack_main(tower array[]);
	void push(NodePtr *topPtr, tower info);

// List Functions
	void list_main(NodePtr *startPtr, tower array[]);
	void insert( NodePtr *sPtr, tower value);
	void print_list(NodePtr *startPtr);