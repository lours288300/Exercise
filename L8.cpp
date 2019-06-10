#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//int fac(int);

//int main(void){
/*double avg (int a,int b,int d);
int main(void){
	double c = avg(6,5,4);
	printf("%g",c);
	return 0;
 }
double avg (int a,int b,int d){
	return (a+b+d) /3.0;
}*/

/*int p(int a,int n);
int main(void){
	int c = p(2,3);
	printf("%d",c);
	return 0;
 }
int p(int a,int n){
	int i,tal=1;
	for (i=1;i<=n;i++){
		tal=tal*a;
	}
	return tal;
}*/

/*int A(int a,int b);
int V(int a,int b,int h);
int main(void){
	int c = V(3,4,5);
	printf("%d",c);
	return 0;
}
int A(int a,int b){
	return a*b;
}
int V(int a,int b,int h){
	return A(a,b)*h;
}*/
/*	int a;
	scanf("%d",&a);
	printf("fac(%d)=%d\n",a,fac(a));
	system("pause");
	
	return 0;	
}
/*int fac(int n){
	int b;
	if (n>0){
		b=n*fac(n-1);
		printf("b=%d\n",b);
		return b;	
	}
	else
		return 1 ;
}*/

/*int power(int,int);
int main (void){
	int b,n;
	scanf ("%d %d",&b,&n);
	printf("power(b,n)=%d\n",power(b,n));
	system("pause");
	
	return 0 ;
}
int power(int b,int n){
	int a=1;
	if (n==0){
		printf("a=%d\n",a);
		return 1 ;
	}
	else{
		a=b*power(b,n-1);
		printf("a=%d\n",a);
		
		return a;
	}


}*/

/*int fid(int );
int main (void){
	int n;
	for (n=1;n<=10;n++)
		printf("fid(%d)=%d\n",n,fid(n));
		
	system("pause");
	return 0 ;

}

int fid(int n){
	if (n==1||n==2)
		return 1;
	else 
		return (fid(n-1)+fid(n-2));
}*/

/*int axs(int);
int main (void){
	int i ;
	for (i=1;i<=10;i++){
		printf("a=%d\n",axs(i));
	}
	
	return 0 ;
}

int axs(int n){
	int a=1,b=1,c=1 ;
	if (n>2){
		for (int i=3;i<=n;i++){
			a = c + b ;
			c = b ; 
			b = a ;		
		}
		return a ;
	}		
	return 1 ;
} */


/*void func(void);
int a = 50;
int main (){
	printf("a=%d\n",a);
	int a=100;
	
	printf("呼叫 func () 之前 , a=%d\n",a);
	func();
	printf("呼叫 func () 之前 , a=%d\n",a);
	
	return 0 ;
}
void func(void){
	a=a+300;
	printf("於 func () 函數裡, a=%d\n",a);
}*/

/*#define square(x) (x) * (x)

int main (){
	int n ;
	printf("Input an integer:");
	scanf("%d",&n);
	printf("%d*%d=%d\n",n+1,n+1,square(n+1));

}*/

/*int find(int n){
	int i=1 ,time=0;
	while(i!=0){
		if(i%3==2&&i%5==3&&i%7==2){
			time++;
			printf("第%2d個 = %4d\n",time,i);
			if(time==n)
				break;
		}
		i++;
	}	
}
int main(){
	int n=12;
	find(n);
}*/

//梅森尼質數
/*int main(){
	int i,j=2,n,number=0;
	while(number!=8){
		n=pow(2,j)-1;
		for(i=2;i<n;i++){
			if(n%i==0)
				break;
			else if(i+1==n){
				number++;
				printf("第%2d 個梅森尼質數是:%10d 是第%2d次方\n",number,n,j);
			}
		}
		j++; 
	}
}*/

/*double my_fun(int n){
	double out,k;
	for(k=1;;k++){
		out+=1.0/pow(2.0,k);
		if(out>0.99999){
			printf("%g",k);
			break;
		}
	}
	
}
int main (){
	my_fun(3);
}*/

/*double my_fun(int n){
	int i;
	double qwe,sum,wer[100000];
	qwe=0.0;
	sum=1.0;
	for(i=1;i>0;i++){
		sum=sum*i;
		qwe+=1/sum;
		wer[i]=qwe;
		printf("%d  %.15lf\n",i,wer[i]);
		if(wer[i]-wer[i-1]<0.00001&&i!=1){
			printf("%d",i);
			break;
		}
	}
} 
int main(){
	my_fun(0);
} */

/*double my_fun(double x,int n){
	int i;
	double sum ,qwe,wer[10000];
	sum=qwe=1;
	for(i=1;i>n;i++){
		sum*=i;
		qwe=x*qwe;	
		wer[i]+=qwe/sum;
		printf("%d  %.15lf\n",i,wer[i]);
		if(wer[i-1]-wer[i]<0.00001&&i!=1){
			printf("%d",i);
			break;
		}
	}
} 
int main(){
	my_fun(0.1,0);
}*/

/*double my_fun(double x,int n){
	int i;
	double sum=1,qwe=0,wer,fin[100];
	fin[0]=0;
	for(i=1;i>n;i++){
		sum=(2.0*i+1.0)*sum;
		for(int j=1;j<=i;j++){
			qwe=(-1.0)*(-1.0);
		}
		wer=qwe*x*(2.0*i+1.0);
		fin[i]=wer/sum;
		printf("%.15lf\n",fin[i]);
		if(fin[i]-fin[i-1]<0.0001){
			printf("%d",i);
			break;
		}
	}
	//printf("%6.10lf",fin);
} 
int main(){
	my_fun(2.2,0);
	
	return 0;
}*/

int find_k(int n){
	int what=100000,i=0,sam1,k,small=2,si=0;
	for(i=1;sam1<=n;i++){
		sam1=4*i+2;
		if(abs(n-sam1)<small){
			small = abs(n-sam1);
			k=i;
		}
	}
	return k;
}
int main(){
	printf("%d",find_k(19));
}

/* 
int main(void){
	int i,j,a[100]={0},k=0;
	double sum=1.0;
	int b[100]={0};
	for(i=3;i<=100;i++){
		for(j=2;j<=i-1;j++){
			if(i%j==0){
				a[k]=0;
				k--;
				break;
			}
			else 
				a[k]=i;		
		}
		k++;
	}
	
	for(i=0;i<100;i++){
		if((a[i]-1)%2==0 && (a[i]-1)%4!=0){
			b[i]=a[i]-1;
		}
		else
			b[i]=a[i]+1;
	}

	for(i=0;i<100;i++){
		if(a[i]!=0)
			printf("%d  %d\n",a[i],b[i]);
	}
	
	for(i=0;i<10;i++){
		sum*=double(a[i])/b[i];
		printf("%lf\n",sum);
	}
	
}*/ 

/* 
double rpower(double b , int n);
int main(){
	printf("%lf",rpower(2.0,3));
	  
	return 0 ;
}
double rpower(double b , int n){
	if (n==0)
		return  1;
	else
		return b*rpower(b,n-1);
}*/ 

