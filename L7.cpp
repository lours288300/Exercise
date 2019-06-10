 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 int main(void){
	/*int i=0,a=0,b=0;
	for(i=0;i<=100;i+=2){
		a=(i-1)+a;
		b=i+b;
	}
	//qq
	for(i=0;i<=100;i+=1){
		if(i%2==0)
			b=i+b;
		else
			a=i+a;

	}
	printf("奇數和:%d\n",a);
	printf("偶數和:%d\n",b);*/

	/*int sa=1,a,n,i;
	while(1){

		printf("\n請輸入一數:");
		scanf("%d",&a);
		printf("請輸入次方:");
		scanf("%d",&n);

		for(i=1;i<=n;i++){
			sa=sa*a;
		}
		printf("答案是:%d",sa);
		sa=1;
	}*/

	/*int b=0,i,a=2;

	for (i=1;i<=10;i++){
		b=b+a;
	}
	printf("%d",b);*/

	/*int i,s,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
	srand( (unsigned)time(NULL) );     //亂數種子 //以時間序列當亂數種子
	for (i=1;i<=10;i++){
		s=(rand()%6+1);
		printf("%d.%d\n",i,s);

		if (s==2)
			a2+=1;
		else if (s==4)
			a4+=1;
		else if (s==6)
			a6+=1;
		else if (s==1)
			a1+=1;
		else if (s==3)
			a3+=1;
		else if (s==5)
			a5+=1;
	}
	printf("1=%d\n2=%d\n3=%d\n4=%d\n5=%d\n6=%d\n",a1,a2,a3,a4,a5,a6);*/

	/*int i,s,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
	srand( (unsigned)time(NULL) );     //亂數種子 //以時間序列當亂數種子
	for (i=1;i<=10;i++){
		s=(rand()%6+1);
		printf("%d.%d\n",i,s);
		switch(s){
			case 1:
				a1+=1;
				break;
			case 2:
				a2+=1;
				break;
			case 3:
				a3+=1;
				break;
			case 4:
				a4+=1;
				break;
			case 5:
				a5+=1;
				break;
			case 6:
				a6+=1;
				break;
		}
	}
	printf("1=%d\n2=%d\n3=%d\n4=%d\n5=%d\n6=%d\n",a1,a2,a3,a4,a5,a6);*/

	/*int a=0,i=0;

	do {
		i++;
		a=a+i;
	}while(i<=5);
	printf("%d",a);*/

	/*int n,i=1,fact=1;
	do{
		printf("請輸入n值 (n>0):");
		scanf("%d",&n);
	}while(n<=0);

	do
		fact*=i++;
	while (i<=n);
	printf("%d!=%d\n",n,fact);*/

	/*int i , g ;
	printf("請輸入一個數:");
	scanf("%d",&i);
	for(g=1;g<=i;g++){
		printf("*");
		if (g%5==0)
			printf("\n");
	}

	int i,g=0,c=5;
	for (i=1;i<=c;i++){
		for (g=1;g<=i;g++){
			printf("*");
		}
		printf("\n");
	}

	int i,g,c=5;
	for (i=c;i>=1;i--){
		for (g=1;g<=i;g++){
			printf("*");
		}
		printf("\n");
	}

	int i,g,c=5;
	for (i=1;i<=c;i++){
		for (g=1;g<=6-i;g++){
			printf("*");
		}
		printf("\n");
	}


	int i,g;
	for (i=1;i<=5;i++){
		for (g=1;g<=i*2-1;g++){
				printf("*");
		}
		printf("\n");
	}

	int o,i,g=0,c=5;
	for (o=1;o<=c;o*2-1){
		for (i=1;i<=c;i++){
			for (g=1;g<=i;g++){
				printf("*");
			}
			printf("\n");
		}
		o++;
	}

	int o,i,g=0,c=5;
	for (i=1;i<=c;i++){
		for (o=1;o<=(c-1)/2;o++){
			for (g=1;g<=i*2-1;g++){
				printf("*");
			}
			printf(" ");
		}
		printf("\n");
	}


	      int i,g=5,h;
	for(h=g;h>1;h--){
		for(i=1;i<=g+1-i;i++){
			printf("*");
		}
		printf("\n");
	}

	int i ;
	for (i=1;i<=2;i++)
		printf(" ");
	for (i=1;i<=1;i++)
		printf("*");
	printf("\n");

	for (i=1;i<=1;i++)
		printf(" ");
	for (i=1;i<=3;i++)
		printf("*");
	printf("\n");

	for (i=1;i<=0;i++)
		printf("0");
	for (i=1;i<=5;i++)
		printf("*");
	printf("\n");*/
    //正三角形
	int i ,g,h=5;
	//printf("請輸入一個數:");
	//scanf("%d",&h);
	for (g=1;g<=h;g++){
		for (i=1;i<=h-g;i++){
			printf(" ");
		}
		for(i=1;i<=g*2-1;i++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
 }
