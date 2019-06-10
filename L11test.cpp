 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 typedef enum{
 	add,
 	blueway,
 	ec
 }Kind;
 typedef struct{
	char name[10];
	Kind kind;
	int much;
 }Customer;
 //-----
  typedef struct{
  	char* name;
  	int much1[3];
  }Finish;
 
int main(){
	Customer cm[11]={{"Ken",add,5},
					 {"Mary",blueway,1},
					 {"Jenny",ec,2},
	 				 {"Vivian",ec,1},
					 {"Nick",blueway,3},
					 {"Nick",ec,2}};
	Finish finish[10];
/*	printf("%d",finish[0].much1[cm[0].kind]);*/
	
	for(int i=0;i<(sizeof(cm)/sizeof(Customer));i++){
		for(int j=i+1;j<=sizeof(cm)/sizeof(Customer);j++){
			if(cm[j].name!='\0'&&cm[i].name!='\0'){
				finish[i].name=cm[i].name;
				finish[i].much1[cm[i].kind]+=cm[i].much;
				
				if(strcmp(cm[i].name,cm[j].name)==0){
					cm[j].name[0]='\0';
					finish[i].much1[cm[j].kind]+=cm[j].much;
				}
			}
			else{
				finish[j].name[0]='\0';
			}
		}
	}
	
	printf("NAME      ADD   BLUEWAY   E.C. \n");
	for(int i=0;i<(sizeof(cm)/sizeof(Customer));i++){
		if(finish[i].name[0]!='\0'){
			printf("%-8s",finish[i].name);
			printf("  %d ",finish[i].much1[0]);
			printf("  %d ",finish[i].much1[1]);
			printf("  %d ",finish[i].much1[2]);
		}
	}
	
	
	
	return 0;	
}
