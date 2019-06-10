struct Node{
	int data;
	struct Node* next;
};
typedef struct Node node;

node* createlist(int* ,int);
void printlist(node* );
void freelist(node* );
void insertnode(node* ,int);
node* searchnode(node* ,int);
node* deletenode(node* ,node *); 


