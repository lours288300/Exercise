 #include <stdio.h>
 #include <stdlib.h>
int main(){
	struct data{
		int math;
		char name[10];
	}student[3];
	for(int i=0;i<sizeof(student)/sizeof(data);i++){
		printf("NAME :");
		gets(student[i].name);
		printf("SCORE:");
		scanf("%d",&student[i].math);
		fflush(stdin);
    }
	for(int i=0;i<3;i++){
		printf("NAME :%s\n",student[i].name);
		printf("SCORE:%d\n",student[i].math);
	}
}

/*int main(){
	struct data{
		char name[10];
		int math;
	}s1={"Mary For",74};
	struct data s2;
	s2=s1;
	s1.math=100;
	printf("NAME:%s\n",s1.name);
	printf("MATH:%d\n",s1.math);
	printf("NAME:%s\n",s2.name);
	printf("MATH:%d\n",s2.math);
}

	return 0;
}*/

/*int main(){
	struct data{
		char name[10];
		int math;
		int eng;
	}student,* ptr;

	ptr=&student;
	printf("STUDENT NAME: ");
	gets(ptr->name);
	printf("MATH GRADE: ");
	scanf("%d",&ptr->math);
	printf("ENGLISH GRADE: ");
	scanf("%d",&ptr->eng);

	printf("MATH GRADE=%d\n",ptr->math);
	printf("ENGLISH GRADE:%d\n",ptr->eng);
	printf("AVERAGE GRADE:%g\n",(ptr->math+ptr->eng)/2.0);

	return 0;
} */

/*#define MAX 5
#include <time.h>
int main(){
	int i, j=0, m ,index=0;
	srand(time(NULL));
	struct data{
		int name[10];
		int math;
	}student[MAX];
	while(j<5){
		m=rand()%41+60;
		if(m>59&&m<101){
			student[j].math=m;
			printf("%d  ",m);
			j+=1;
		}
	}
	m=student[0].math;
	for(i=1;i<MAX;i++){
		if((student+i)->math<m){
			m=(student+i)->math;
			index=i;
		}
	}
	//printf("%s is great\n",student[index].name);
	printf("Its %d !\n",m);
}  */

/*typedef struct {
	char name[10];
	int math;
}Data;
void display(Data st);
int main(){
	Data s1={"Vivian",99};
	display(s1);
	return 0;
}
void display(Data st){
	printf("studentname: %s\n",st.name);
	printf(" mathgrade: %d \n",st.math);
}*/
/*
typedef struct{
	char name[10];
	int math;
}Data;
void swap(Data* p1,Data* p2);
int main(){
	Data s1={"Vivian",99},s2={"Mary",96};

	swap(&s1,&s2);
	printf("after call swap():\n");
	printf("s1.name=%7s ,s1.math=  %d\n",s1.name,s1.math);
	printf("s2.name=%7s ,s2.math=  %d\n",s2.name,s2.math);

	return 0;
}
void swap(Data* p1,Data* p2){
	Data tmp;
	tmp=*p1;
	*p1=*p2;
	*p2=tmp;
}*/
/*#define MAX 3
typedef struct{
	char name[10];
	int math;
}Data;
int maximum(Data arr[]);
int main(){
	int idx;
	Data s1[MAX]={{"Mary",99},{"Vivian",96},{"Jenny",52}};
	idx=maximum(s1);
	printf("%s is great\n",(s1+idx)->name);
	printf("grade is %d \n",(s1+idx)->math);

	return 0;
}
int maximum(Data arr[]){
	int m,i,index;
	m=arr->math;
	for(i=0;i<MAX;i++){
		if((arr+i)->math>m){
			m=(arr+i)->math;
			index=i;
		}
		return index;
	}

}*/

/*int main(){
	typedef enum{
		red,
		green,
		blue
	}Color;
	Color shirt;
	printf("sizeof(shirt)=%d\n",sizeof(shirt));
	printf("red=%d\n",red);
	printf("green=%d\n",green);
	printf("blue=%d\n",blue);
	shirt=green;
	if(shirt==green)
		printf("you chose green shirt");
	else
		printf("no");
	return 0;
} */
/*int main(){
	typedef enum{
		red=114,
		green=103,
		blue=98
	}color;
	int gain;
	color shirt;
	do{
		printf("r , g OR b =>");
		scanf("%c",&gain);
		fflush(stdin);
	}while((gain!=red)&&(gain!=green)&&(gain!=blue));

	switch(gain){
		case red:
			printf("red");
			break;
		case green:
			printf("green");
			break;
		case blue:
			printf("blue");
			break;
	}
	return 0;
}*/


