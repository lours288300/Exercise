 #include <stdio.h>
 #include <stdlib.h>
 #define SIZE 6 
// void show(int arr[]);
/*int main(void){
	/*int i ;
	int score[] = {78,55,92,80};
	for (i=0;i<=4;i++){
		score[i]+=125;
		printf("score[%d]=%d\n",i,score[i]); 
	}*/
	
	/*int i , a ;
	int money[]={1000,500,100,50,10,5,1} ;
	scanf("%d",&a);
	for (i=0;i<sizeof(money)/sizeof(int);i++){
		printf("%d = %d \n",money[i],a/money[i]);
		a=a%money[i];
	}*/
	
	
	//***非常之********重要********之重點******
	/*double data[4];
	printf("陣列元素所佔的位元組:%d\n",sizeof(data[1]));
	printf("整個陣列所佔的位元組:%d\n",sizeof(data));
	printf("陣列元素的個數:%d\n",sizeof(data)/sizeof(double));
	*/
	
	/*int i , age[3];
	for(i=0;i<3;i++){
		printf("請輸入age[%d]的值:",i);
		scanf("%d",&age[i]);
	}
	for(i=0;i<3;i++)
		printf("age[%d]=%d\n",i,age[i]); 
	*/
	
	/*int A[]={74,48,30,17,62};
	int i ,max=A[0] ,min=A[0] ;
	for(i=0;i<5;i++){
		if (A[i]>max)
			max=A[i];	
		if (A[i]<min)
			min=A[i];
	}
	printf("MAX=%d\n",max);
	printf("MIN=%d",min);
*/
	/*int i  ;
	int score[5];
	for(i=1;i<=4;i++){
		printf("第%d筆成績:",i);
		scanf("%d",&score[i]);
		score[0]+=score[i];
	}
	printf("總平均:%g",score[0]/4.0);
	*/
	
/*	int i,num,j;
	int A[SIZE]={33,75,69,41,33,19};
	
	printf("陣列A元素的值為:");
	for(i=0;i<SIZE;i++)
		printf("%d ",A[i]);
	
	printf("\n輸入想搜尋的整數:");
	scanf("%d",&num);
	
	for(i=0,j=0;i<SIZE;i++)
		if(A[i]==num){
			printf("找到了! A[%d]=%d\n",i,A[i]);
			j++;
		}
	if(j==0)
		printf("沒有找到相同的值!!\n");
*/	
	
	/*int i,j,sale[2][4],sum=0;
	
	for(i=0;i<2;i++)
		for(j=0;j<4;j++){
			printf("業務員%d的第%d季成績:",i+1,j+1);
			scanf("%d",&sale[i][j]);
		}
	
	printf("***OUTPUT****");
	for(i=0;i<2;i++){
		printf("\n業務員%d的業績分別為:",i+1);
		for(j=0;j<4;j++){
			printf("%d ",sale[i][j]);
			sum+=sale[i][j];
		}
	}
	
	printf("\n2004年銷售量為%d部車",sum);
	*/
	
	/*int i,j,k;
	int A[2][2]={4,3,2,1};
	int B[2][2]={1,2,3,4};
	int C[2][2] = {0};
	for (i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				C[i][j]+=A[i][k]*B[k][j];
				
			}
		}
	}
	for (i=0;i<2;i++){
		for(j=0;j<2;j++)
			printf("%3d ",C[i][j]);

	}*/
	
/*	int i ;
	int A[SIZE]={5,6,7,8,0,6};
	
	for (i=0;i<SIZE;i++){
		printf("%3d",A[i]);
	}
	printf("\n");
	show(A);
	printf("\n"); 
	for (i=0;i<SIZE;i++){
		printf("%3d",A[i]);
	}
	
	return 0;	
}
void show(int arr[]){
	int i ;
	arr[2]=10;
	for (i=0;i<SIZE;i++){
		printf("%3d",arr[i]);
	}
	
	
}*/
/*void func(int eorr[]);
int main(void){
	int A[SIZE]={0,1,2,3,4,5};
	printf("A[0]=%d,位子=%p\n",A[0],&A[0]);
	func(A);
	
	return 0 ;
}
void func(int eorr[]){
	printf("eorr[0]=%d,位子=%p",eorr[0],&eorr[0]);
}*/

//氣泡排序法
/*void show(int a[]);
void bubble(int a[]);
int main(void){
	int data[SIZE]={26,81,58,12,5,66};
	
	printf("排序前...\n");
	show(data);
	bubble(data);
	printf("排序後...\n");
	show(data);
	
	return 0; 
} 
void show(int a[]){
	int i ;
	for(i=0;i<SIZE;i++){
		printf("%3d",a[i]);
	}
	printf("\n");
}
void bubble(int a[]){
	int i , j ,sum ;
	for(i=1;i<SIZE;i++){
		for(j=0;j<(SIZE-1);j++){
			if(a[j]<a[j+1]){
				sum=a[j];
				a[j]=a[j+1];
				a[j+1]=sum;
			}
		}
	} 
}*/

/*int main(void){
	int i,j,sum;
	int A[SIZE]={12,21,54,56,65,98};
	printf("排序前...\n");
	for (i=0;i<SIZE;i++)
		printf("%3d",A[i]);
	printf("\n排序後...\n");
	for(i=1;i<SIZE;i++){
		for(j=0;j<(SIZE-1);j++){
			if(A[j]<A[j+1]){
				sum=A[j];
				A[j]=A[j+1];
				A[j+1]=sum; 
			}
		}
	}
	for(i=0;i<SIZE;i++)
		printf("%3d",A[i]);
		
	return 0;
}*/ 
//氣泡改良版 
/*int main(void){
	int data[SIZE]={12,21,54,56,65,98};
	int i,j,sum;
	int flag = 1;
	
	printf("BEFORE...\n");
	for(i=0;i<SIZE;i++){
		printf("%3d",data[i]);
	}
	printf("\nAFTER...\n");
	for(i=1;(i<SIZE) && (flag=1);i++){
		flag = 0;
		for(j=0;j<(SIZE-1);j++)
			if(data[j]>data[j+1]){
				sum=data[j];
				data[j]=data[j+1];
				data[j+1]=sum;
			}
	}
	for(i=0;i<SIZE;i++){
		printf("%3d",data[i]);
	}
} */ 

/*#define ROW 4
#define COL 3
void search(int a[][COL],int b[]);
int main(void){
	int a[ROW][COL]={{26, 5, 7},
					 {10, 3,47},
					 { 6,76, 8},
					 {40, 4,32}};
	int i,j,b[2];
	printf("裡面:\n");
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++)
			printf("%02d ",a[i][j]);
		printf("\n");
	}
	search(a,b);
	printf("BIG:=%02d\n",b[0]);
	printf("SMALL:=%02d\n",b[1]);
	
	return 0 ;
}
void search(int arr[][COL],int p[]){
	int i,j;
	p[0]=p[1]=arr[0][0];
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			if(p[0]<arr[i][j])
				p[0]=arr[i][j];
			else if(p[1]>arr[i][j])
				p[1]=arr[i][j];
		}
	}
} */

/*int main(void){
	int row=4 ,col=3,i,j;
	int max, small;
	int end[row][col]={ {26, 5, 7},
				  	    {10, 3,47},
				  	    { 6,76, 8},
				  	    {40, 4,32} };
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
			printf(" %02d",end[i][j]);
		printf("\n");
	}
	max=small=end[0][0];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(max<end[i][j])
				max=end[i][j];
			else if(small>end[i][j])
				small=end[i][j];
		}
	}
	printf(" MAX =%02d\n",max);
	printf("SMALL=%02d",small);
	
} */

/*int main(void){
	int a,b,i,j;
	int ans[9][9];
	printf("橫列==>") ;
	scanf("%d",&a);
	printf("直列==>");
	scanf("%d",&b);
	
	for(i=0;i<9;i++){
		for(j=0;j<9;j++)
			ans[i][j]=(i+1)*(j+1);
	}
	printf("索引值為:%d",ans[a-1][b-1]);
}*/

/*int main(void){
	char ch='a';
	char str1[]="a";
	char str2[]="Sweet home";
	printf("ch所佔位元=%d\n",sizeof(ch));
	printf("str1所佔位元=%d\n",sizeof(str1));
	printf("str2所佔位元=%d\n",sizeof(str2));
	
	return 0 ;
}*/

/*int main(void){
	char cut[10];
	puts("Hello What's your name?");
	gets(cut);
	printf("Welecome %s",cut);
	gets()
}*/

/*#include <string.h>
int main(void){
	char play[27];
	gets(play);
	printf("%s",strrev(plagets(y));
}*/
/* 
void rev1(char [], int , char []);
void rev2(char [], int);
int main(void){
	char ch1[]={"123456789"};
	char ch2[]={"abcdefghi"};
	int len=sizeof(ch1)/sizeof(char)-1;
	char er[len]="";
	
	int i;
	printf("%d\n",len);
	rev1(ch1,len,er);
	rev2(ch2,len);
	
	printf("第一種方式==>%s\n",er);
	printf("第二種方式==>%s\n",ch2);
	
	return 0;
}
void rev1(char ch1[], int len ,char er[]){
	int i;
	for(i=0;i<len;i++){
		er[len-1-i]=ch1[i];
	}
}
void rev2(char ch2[], int len){
	
	int i;
	for(i=0;i<len/2;i++){
		char tmp;
		tmp=ch2[i];
		ch2[i]=ch2[len-1-i];
		ch2[len-1-i]=tmp;
	}
}*/ 
/*
int main(void){
	int i;
	char arr[3];
	gets(arr);
	for(i=0;i<3;i++)
		printf("%c",arr[i]);
	
}*/
/*
int main(void){
	int arr[4],i;
	for(i=0;i<5;i++){
		printf("%d",arr[i]=i+1);
	}
	
}*/
/*
int main(void){
	int i,j,sale[2][4],sum=0;
	
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			printf("業務員%d的第%d季成績:",i+1,j+1);
			scanf("%d",&sale[i][j]);
		}
	}
	printf("***OUTPUT****");
	for(i=0;i<2;i++){
		printf("\n業務員%d於2004年的銷售業績為:",i+1);
		for(j=0;j<4;j++){
			sum+=sale[i][j];
		}
		printf("%d 部車",sum);
		sum=0;
	}
}*/
/*
#define row 4
#define col 3
int main(void){
	int i,j;
	int A[row][col]={{1,2,3},
					 {4,5,6},
					 {7,8,9},
					 {10,11,12}};
	int B[row][col]={{1,2,3},
					 {4,5,6},
					 {7,8,9},
					 {10,11,12}};
	printf(" A + B =\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++)
			printf("%4d",A[i][j]+B[i][j]);
		printf("\n");
	}
	return 0;
}*/
/*
int main(void){
	int arr[3][3]={{75,38,67},
				   {25,51,85},
				   {45,47,93}};
	int row,col;
	int small=arr[0][0],i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(small>arr[i][j]){
				small=arr[i][j];
				row=i;
				col=j;
			}
		}
	}
	printf("small=%d\n",small);
	printf("列:%d 行:%d",row,col);
	printf("arr[%d][%d]=%d",row,col,small);
}*/

int main(){
	 
	int sole[3][5]={{33,32,56,45,33},
					{77,33,68,45,23},
					{43,55,43,67,65}};
	int i,j,spent[5]={12,16,10,14,15};
	int money,p[3],u[5];
	for(i=0;i<3;i++){
		for(j=0;j<5;j++)
			money+=(sole[i][j]*spent[j]);
		p[i]=money;
		printf("soler %d => %d\n",i+1,money);
	}
	printf("\n");
	for(i=0;i<5;i++){
		money=0;
		for(j=0;j<3;j++)
			money+=sole[j][i]*spent[i];
		u[i]=money;
		printf("produ %d total=>%d\n",i+1,money);
	}
	printf("\n");
	if(p[0]>p[1]&&p[0]>p[2])
		printf("the best is soler 1");
	else if(p[1]>p[0]&&p[1]>p[2])
		printf("the best is soler 2");
	else
		printf("the best is soler 3");
	printf("\n");
	if(u[0]>u[1]&&u[0]>u[2]&&u[0]>u[3]&&u[0]>u[4])
		printf("produ 1 is best");
	else if(u[1]>u[0]&&u[1]>u[2]&&u[1]>u[3]&&u[1]>u[4])
		printf("produ 2 is best");
	else if(u[2]>u[0]&&u[2]>u[1]&&u[2]>u[3]&&u[2]>u[4])
		printf("produ 3 is best");
	else if(u[3]>u[0]&&u[3]>u[2]&&u[3]>u[1]&&u[3]>u[4])
		printf("produ 4 is best");
	else
		printf("produ 5 is best");
}

