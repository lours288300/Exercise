#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(void){
    /*int a,b,c;
	printf("�п�J�T�ӥ��N��:");
	scanf("%d %d %d",&a,&b,&c);

	if (a>=b && a>=c)
		printf("�̤j�Ƭ�:%d\n",a);

	else if (b>=a && b>=c)
		printf("�̤j�Ƭ�:%d\n",b);

	else
		printf("�̤j�Ƭ�:%d",c);*/

	/*int a=12,b=28,c;

	c=a>b ? (a+b) : (a-b);    // ?=if  :=else
 	printf("%d",c);*/

	/*int a,b;
	char oper;
	printf("�п�J�B�⦡(�Ҧp:3+2):");
	scanf("%d %c %d",&a,&oper,&b);
	switch(oper)
	{
		case '+':
			printf("%d+%d=%d\n",a,b,a=b);
			break;
		case '-':
			printf("%d-%d=%d\n",a,b,a-b);
			break;
		case '*':
			printf("%d*%d=%d\n",a,b,a*b);
			break;
		case '/':
			if (b==0)
				printf("���Ƥ��o���s");
			else
				printf("%d/%d=%.3f\n",a,b,(float)a/b);
			break;
		default:
			printf("�L�k���Ѫ��B�⦡!!\n");
 	}*/

	/*char grade;
	printf("Input grade:");
	scanf("%c",&grade);

	switch(grade){
		case'a':
		case'A':
			printf("Excellent!\n");
			break;
		case'b':
		case'B':
			printf("Good!\n");
			break;
		case'c':
		case'C':
			printf("Be study hard!\n");
			break;
		default:
			printf("Failed!\n");
	}*/

	/*int i=0,sum=0;
	host:
		i++;
		sum+=i;
		printf("%d",i);
		if (i<100000000){
            printf("+");
            goto host;
		}*/

	/*char ch;
	printf("�п�J�@�r��:");
	ch=getche();

	if (ch>47&&ch<58)
		printf("���r���O�Ʀr");
	else if ((ch>96&&ch<123)||(ch>64&&ch<91))
		printf("���r���O�r��"); */

	/*int i;
	prntf("�п�J�@�Ӽ�:");
	scanf("%d",&i);

	if (i%2==0);
		printf("���Ƭ�����");
	else
		printf("���Ƭ��_��");*/

	/*int i ;
	printf("�п�J�@�Ӽ�:");
	scanf("%d",&i);
	if (i>0)
		printf("%d",i);
	else {
		i=i*(-1);
		printf("%d",i);
	}*/

	/*int a,b,c;
	printf("�п�J�T�����:");
	scanf("%d %d %d",&a,&b,&c);
	if (a+b>c && b+c>a && a+c>b){
		if ( (a*a+b*b==c*c) || (a*a+c*c==b*b) || (c*c+b*b==a*a) ){
			printf("���T���ά������T����");
	    }
	    if ( (a*a+b*b<c*c) || (a*a+c*c<b*b) || (c*c+b*b<a*a) ){
	    	printf("���T���ά��w���T����");
		}
		else if ( (a*a+b*b>c*c) || (a*a+c*c>b*b) || (c*c+b*b>a*a) ){
	    	printf("���T���ά��U���T����");
		}
	}*/

	/*int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
	printf("�п�J�Q�Ӧ��Z:");
	scanf("%d %d %d %d %d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10);*/

	/*float x,y;
	printf("�п�J�@�Ӯy��:");
	scanf("%f %f",&x,&y);
	if (x>0.0&&y>0.0)
		printf("�Ĥ@�H��");
	else if (x<0.0&&y>0.0)
		printf("�ĤG�H��");
	else if (x<0.0&&y<0.0)
		printf("�ĤT�H��");
	else if (x>0.0&&y<0.0)
		printf("�ĥ|�H��");
	else if (x==0&&y==0)
		printf("���I�W");
	else if (x==0)
		printf("X�b�W");
	else if (y==0)
		printf("Y�b�W");*/


	/*int h;
	float m;
	printf("�п�J�u�@�ɼ�");
	scanf("%d",&h);
	if (h>75){
		m=(h-75)*75*1.75;
		h=75;
	}
	if (h>=61){
		m=m+(h-61+1)*75*1.25;
		h=60;
	}
	if (h>=0){
		m=m+h*75;
	}
	printf("�u�ꬰ:%g",m);*/


	/*int yyyy;
	printf("�п�J�@�Ӧ~��(�褸�~):");
	scanf("%d",&yyyy);
	if (yyyy%4==0){
		if (yyyy%100==0){
			if 	(yyyy%400==0){
				if 	(yyyy%4000==0)
				printf("���O�|�~");
			}
		}
		else{
		printf("�|�~");
			}
	}
	else
		printf("���O�|�~");

	int y;
	printf("�п�J�@�Ӧ~��(�褸�~):");
	scanf("%d",&y);
	if (y>0){
		if (y%4==0 && y%4000 !=0){
			if (y%400 ==0 || y%100 !=0){
				printf("�|�~");
			}
		}
	else
		printf("���O�|�~");
	}
		*/


	/*int y;
	printf("�п�J�@�Ӧ~��(�褸�~):");
	scanf("%d",&y);
	if ( y%4==0 && y%100 !=0  || y%400 ==0 && y%4000 !=0){
				printf("�|�~");
	}
	else
		printf("���O�|�~");*/

	double a=1,b=2,c=3,x,x2;
	if (b*b-4*a*c==0){
		x=(-b)+sqrt(b*b-4*a*c)/2*a;
		printf("����۲����\n%g\n",x);
		x2=(-b)-sqrt(b*b-4*a*c)/2*a;
		printf("%g",x2);
	}
	if (b*b-4*a*c==0){
		x=b/(-2*a);
		printf("�۵����%g",x);
	}
	if (b*b-4*a*c==0){
		printf("�S�����");
	}



	return 0;
	}
