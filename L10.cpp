 #include <stdio.h>
 #include <stdlib.h>
/*int main(void){
	int a=5,b=10;
	int* ptr1,* ptr2;
	ptr1=&b;
	ptr2=&a;
	*ptr1=4;
	a=16;
	*ptr2=12;
	ptr2=ptr1;
	*ptr1=19;
	ptr1=&a;
	a=7;
	*ptr2=*ptr1;
	
	printf("a=%2d, b=%2d, *ptr2=%2d\n",a,b,*ptr1,*ptr2);
	printf("ptr1=%p, ptr2=%p\n",ptr1,ptr2);
	
	int a1=100;
	int* ptri;
	float a2=3.2f;
	float* ptrf;
	ptri=&a1;
	ptrf=&a2;
	printf("sizeof(a1)=%d\n",sizeof(a1));
	printf("sizeof(a2)=%d\n",sizeof(a2));
	printf("a1=%d,*ptri=%d\n",a1,*ptri);
	printf("a2=%.lf,*ptrf=%.lf\n",a2,*ptrf);
	return 0;
}*/

/*void address(int *pl);
int main(){
	int a=12;
	int* ptr=&a;
	
	address(&a);
	address(ptr);
	
	return 0 ;
}
void address(int* pl){
	printf("於位址%p內，儲存的變數內容為%d\n",pl,*pl); 
}*/

/*void add10(int* pl);
int main(){
	int a=5;
	
	printf("呼叫add10()之前,a=%d\n",a);
	add10(&a);
	printf("呼叫add10()之後,a=%d\n",a);
	
	return 0;
} 
void add10(int* pl){
	*pl=*pl+10;
}*/

/*void swap(int* ptra,int* ptrb);
int main(){
	int a=5,b=20;
	int* tmp;
	int* ptra=&a;
	int* ptrb=&b;
	printf("before:a=%d,b=%d\n",ptra,ptrb);
	ptra=&b;
	ptrb=&a;
	
	printf("after :a=%d,b=%d\n",ptra,ptrb);
	
	return 0;
}
*/
/* 
void rect(int x,int y,int* p1,int* p2);
int main(){
	int a=5,b=8;
	int area,peri;
	rect(a,b,&area,&peri);
	printf("area=%d,total length=%d\n",area,peri);
	
	return 0 ;
}
void rect(int x,int y,int* p1,int* p2){
	*p1=x*y;
	*p2=2*(x+y);
}*/
/*
int* max(int* ,int*);
int main(){
	int a=12,b=17;
	int* ptr;
	//ptr=max(&a,&b);
	printf("max=%d\n",*max(&a,&b));
	
	return 0;
} 
int* max(int* p1,int* p2){
	if(*p1>*p2)
		return p1;
	else
		return p2;
}*/
/*
int main(){
	int i,a[5]={32,16,35,65,52};
	printf("a=%p\n",a);
	printf("&a=%p\n",&a);
	
	for(i=0;i<5;i++){
		printf("&a[%d]=%p\n",i,&a[i]);
	}
}*/
/*
int main(){
	int a[]={1,2,3};
	printf("a[0]=%d, *(a+0)=%d\n",a[0],*(a+0));
	printf("a[1]=%d, *(a+1)=%d\n",a[1],*(a+1));
	printf("a[2]=%d, *(a+2)=%d\n",a[2],*(a+2));
	
	return 0;
}*/

/*int main(){
	int a[]={5,7,9};
	int i , sum=0 ;
	int* ptr=a;
	for(i=0;i<3;i++){
		sum+=ptr[i];
	}
	printf("sum=%d\n",sum);
}*/

/*void kfc(int*);
int main(){
	int A[]={5,9,8,6,1,2,3};
	kfc(&A[0]);
}
void kfc(int* arr){
	for(int i=0;i<7;i++)
		printf("%d ",*(arr++));
}*/

/*void replace(int [],int,int);
int main(){
	int a[5]={13,32,67,14,95};
	int i,num=24;
	
	replace(a,4,num);
	for(i=0;i<5;i++)
		printf("%3d",a[i]);
	printf("\n");
}
void replace(int inpupu[],int n,int num){
	*(inpupu+n-1)=num;
}*/

/*#define size 5
int* mi(int*);
int main(){
	int a[size]={3,7,1,6,8};
	int i,*ptr;
	printf("array a=");
	for(i=0;i<size;i++)
		printf("%d ",a[i]);
	ptr=mi(a); 
	printf("\nmi=%d\n",*ptr); 
}
int* mi(int* arr){
	int i;
	int* max;
	max=arr;
	for(i=1;i<size;i++){
		if(*max<arr[i])
			max=arr+i;
	}
	return max;
}*/
 
/*int main(){
	char str[]="HOWHOW HOWFUN ?";
	for(int i=0;i<17;i++)
		printf("%s\n",str);	
}*/

/*int main(){
	char name[20];
	char* ptr="how are you";
	printf("What's your name??");
	gets(name);
	printf("HI, %s, ",name);
	puts(ptr);
}*/

/*int main(){
	int i;
	char* pyy[3]={"Vivian","Louis","Mary"};
	for(i=0;i<3;i++)
		printf("%s\n",pyy[i]);
}*/

/*int main(){
	int n=20;
	int* p;
	int** h;
	p=&n;
	h=&p;
	
	printf("n=%d ,&n=%p ,*p=%d ,p=%p ,&p=%p \n",n,&n,*p,p,&p);
	printf("**h=%d ,*h=%p ,h=%p &h=%p",**h,*h,h,&h); 	 
}*/

/*int main(){
	int num[3][4];
	
	printf("num=%p\n",num);
	printf("&num=%p\n",&num);
	printf("*num=%p\n",*num);

	printf("num[0]=%p\n",num[0]);
	printf("num[1]=%p\n",num[1]);
	printf("num[2]=%p\n",num[2]);

	printf("&num[0]=%p\n",&num[0]);
	printf("&num[1]=%p\n",&num[1]);
	printf("&num[2]=%p\n",&num[2]);
}*/
/*int main(){
	int num[3][4]={{12,23,42,18},
				   {43,22,16,14},
				   {31,13,19,28}};
	int m,n;
	for(m=0;m<3;m++){
		for(n=0;n<4;n++){
			if(*(*(num+m)+n)>40)
				*(*(num+m)+n)=40;
			printf("%3d",*(*(num+m)+n));
		}
		printf("\n");
	}
	return 0;
} */





