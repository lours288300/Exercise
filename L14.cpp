 #include <stdio.h>
 #include <stdlib.h>
/*int main(void){
	/*int num,i;
	typedef struct{
		char name[10];
		int score;	
	}Student;
	Student* ptr;
	printf("NUMBER of STUDENT: ");
	scanf("%d",&num);
	
	ptr=(Student*) malloc(num*sizeof(Student));
	
	for(i=0;i<num;i++){
		fflush(stdin);
		printf("NAME for STUDENT %d: ",i+1);
		gets((ptr+i)->name);
		printf("SCORE for STUDENT %d: ",i+1);
		scanf("%d",&ptr[i].score);
	}
	for(i=0;i<num;i++)
		printf("%s's score=%d\n",(ptr+i)->name,(ptr+i)->score);
	
	free(ptr);*/
	
	/*struct Node{
		int data;
		struct Node* next;
	};
	typedef struct Node node;
	
	node a,b,c;
	node* ptr=&a;
	
	a.data=12;
	a.next=&b;
	b.data=30;
	b.next=&c;
	c.data=64;
	c.next=NULL;
	printf("%d",ptr->data);*/
	//	return 0;	
//}
/*	
struct Node{
	int data;
	struct Node* next;	
};
typedef struct Node node;
	
int main(){
	int i,val,num;
	node* first;
	node* current;
	node* previous;
	
	printf("NUMBER OF NODES: ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		current=(node *)malloc(sizeof(node));
		printf("DATA FOR node %d:  ",i+1);
		scanf("%d",&(current->data));
		if(i==0)
			first=current;
		else
			previous->next=current;
			
		current->next=NULL;
		previous=current;		
	}
	current=first;
	while(current!=NULL){
		printf("address=%p, ",current);
		printf("data=%d, ",current->data);
		printf("next=%p\n",current->next);
		current=current->next;
	}
}*/
////////

#include "linklist.h"
int main(){
	node* first,* Node;
	int arr[]={12,38,57};
	first=createlist(arr,3);
	printlist(first);
	
	Node=searchnode(first,77);
	if(Node!=NULL){
		insertnode(Node,46);
		printlist(first);
		freelist(first);
	}
	
	return 0;
}
   //createlist//
node* createlist(int* arr,int len){
	int i;
	node* first;
	node* current;
	node* previous;
	for(i=0;i<len;i++){
		current=(node* )malloc(sizeof(node));
		current->data=arr[i];
		if(i==0)
			first=current;
		else
			previous->next=current;
		current->next=NULL;
		previous=current;
	}
	return first;
}
    //printlist//
void printlist(node* first){
	node* Node=first;
	if(first==NULL)
		printf("List is empty\n");
	else {
		while(Node != NULL){
			printf("%3d",Node->	data);
			Node=Node->next;
		}
		printf("\n");
	}
}
      // freelist//
void freelist(node* first){
	node* current ,* tmp;
	current=first;
	while(current!=NULL){
		tmp=current;
		current=current->next;
		free(tmp); 
	}
}  
      //searchnode//
node* searchnode(node* first, int item){
	node* Node=first;
	while(Node!=NULL){
		if(Node->data==item)
			return Node;
		else
			Node=Node->next;
	}
	return NULL;
}
     //insertnode//
void insertnode(node* Node,int item){
	node* newnode;
	newnode=(node *) malloc(sizeof(node));
	newnode->data=item;
	newnode->next=Node->next;
	Node->next=newnode;
}
