#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(void){
    /*int a,b,c;
	printf("請輸入三個任意數:");
	scanf("%d %d %d",&a,&b,&c);

	if (a>=b && a>=c)
		printf("最大數為:%d\n",a);

	else if (b>=a && b>=c)
		printf("最大數為:%d\n",b);

	else
		printf("最大數為:%d",c);*/

	/*int a=12,b=28,c;

	c=a>b ? (a+b) : (a-b);    // ?=if  :=else
 	printf("%d",c);*/

	/*int a,b;
	char oper;
	printf("請輸入運算式(例如:3+2):");
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
				printf("除數不得為零");
			else
				printf("%d/%d=%.3f\n",a,b,(float)a/b);
			break;
		default:
			printf("無法辨識的運算式!!\n");
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
	printf("請輸入一字元:");
	ch=getche();

	if (ch>47&&ch<58)
		printf("此字元是數字");
	else if ((ch>96&&ch<123)||(ch>64&&ch<91))
		printf("此字元是字母"); */

	/*int i;
	prntf("請輸入一個數:");
	scanf("%d",&i);

	if (i%2==0);
		printf("此數為偶數");
	else
		printf("此數為奇數");*/

	/*int i ;
	printf("請輸入一個數:");
	scanf("%d",&i);
	if (i>0)
		printf("%d",i);
	else {
		i=i*(-1);
		printf("%d",i);
	}*/

	/*int a,b,c;
	printf("請輸入三個邊長:");
	scanf("%d %d %d",&a,&b,&c);
	if (a+b>c && b+c>a && a+c>b){
		if ( (a*a+b*b==c*c) || (a*a+c*c==b*b) || (c*c+b*b==a*a) ){
			printf("此三角形為直角三角形");
	    }
	    if ( (a*a+b*b<c*c) || (a*a+c*c<b*b) || (c*c+b*b<a*a) ){
	    	printf("此三角形為鈍角三角形");
		}
		else if ( (a*a+b*b>c*c) || (a*a+c*c>b*b) || (c*c+b*b>a*a) ){
	    	printf("此三角形為銳角三角形");
		}
	}*/

	/*int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
	printf("請輸入十個成績:");
	scanf("%d %d %d %d %d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10);*/

	/*float x,y;
	printf("請輸入一個座標:");
	scanf("%f %f",&x,&y);
	if (x>0.0&&y>0.0)
		printf("第一象限");
	else if (x<0.0&&y>0.0)
		printf("第二象限");
	else if (x<0.0&&y<0.0)
		printf("第三象限");
	else if (x>0.0&&y<0.0)
		printf("第四象限");
	else if (x==0&&y==0)
		printf("原點上");
	else if (x==0)
		printf("X軸上");
	else if (y==0)
		printf("Y軸上");*/


	/*int h;
	float m;
	printf("請輸入工作時數");
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
	printf("工資為:%g",m);*/


	/*int yyyy;
	printf("請輸入一個年份(西元年):");
	scanf("%d",&yyyy);
	if (yyyy%4==0){
		if (yyyy%100==0){
			if 	(yyyy%400==0){
				if 	(yyyy%4000==0)
				printf("不是閏年");
			}
		}
		else{
		printf("閏年");
			}
	}
	else
		printf("不是閏年");

	int y;
	printf("請輸入一個年份(西元年):");
	scanf("%d",&y);
	if (y>0){
		if (y%4==0 && y%4000 !=0){
			if (y%400 ==0 || y%100 !=0){
				printf("閏年");
			}
		}
	else
		printf("不是閏年");
	}
		*/


	/*int y;
	printf("請輸入一個年份(西元年):");
	scanf("%d",&y);
	if ( y%4==0 && y%100 !=0  || y%400 ==0 && y%4000 !=0){
				printf("閏年");
	}
	else
		printf("不是閏年");*/

	double a=1,b=2,c=3,x,x2;
	if (b*b-4*a*c==0){
		x=(-b)+sqrt(b*b-4*a*c)/2*a;
		printf("有兩相異實根\n%g\n",x);
		x2=(-b)-sqrt(b*b-4*a*c)/2*a;
		printf("%g",x2);
	}
	if (b*b-4*a*c==0){
		x=b/(-2*a);
		printf("相等實根%g",x);
	}
	if (b*b-4*a*c==0){
		printf("沒有實根");
	}



	return 0;
	}
