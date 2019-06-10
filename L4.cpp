 #include <stdio.h>
 #include <conio.h>
 #include <stdlib.h>
 int main(void){
	//控制欄位寬度或對齊 
	/*int num1=1111, num2=1111, num4=1111, num5=1111;
	float num3=12.3478f,num6=12.3478f,num7=12.3478f;
	printf("num1=%6d公里\n",num1);
	printf("num2=%-6d公里\n",num2);
	printf("num4=%06d公里\n",num4);
	printf("num5=% d公里\n",num5);
	printf("num3=%6f英里\n",num3);
	printf("num6=%10.2f英里\n",num6);
	printf("num7=%010.3f英里\n",num7);*/
	
	//不同進位的形式輸出
	/*printf("42的八進位數是 %o\n",42);
	printf("42的十六進位數是 %x\n",42);*/
	
	//換算二進位練習
	/*int a, b=0;
	printf("請輸入一個數");
	scanf("%d",&a); 
	b=a%2;
    a=a/2;
		
	b=b+((a%2)*10);
	a=a/2;
		
	b=b+((a%2)*100);
	a=a/2;

	b=b+((a%2)*1000);
	a=a/2;
	
	printf("%04d",b);*/
	
	//使用scanf() 由鍵盤輸入
	/*int a,b;
	printf("請輸入一個數");
	scanf("%d",&a); 
	printf("a=%d\n",a);
	
	printf("請輸入兩個數");
	scanf("%d%d",&a,&b); 
	printf("%d+%d=%d\n",a,b,a+b);
	
	printf("請輸入兩個數,以逗點隔開數值:");
	scanf("%d,%d",&a,&b); 
	printf("%d+%d=%d\n",a,b,a+b);*/
	
	//輸入字串 
	/*char name[10];
	printf("What is your name:");
	scanf("%s",name);
	printf("Hi, %s, How are you?\n",name);*/
	
	//讀取數值的方法
	/*int num;
	char str[10];
	printf("請輸入一個數");
	scanf("%d",&num);                        //把非數字字元留在緩衝區 
	printf("num=%d\n",num);
	
	printf("請輸入一個字串:");              //讀取輸入緩衝區
	scanf("%s",str);
	printf("str=%s\n",str);*/
 
	//修正讀取字元的錯誤
	/*int num;
	char ch;
	printf("請輸入一個整數:");
	scanf("%d",&num);
	fflush(stdin);                         //清除緩衝區資料 
	printf("請輸入一個字元:");
	scanf(" %c",&ch);
	printf("num=%d,AS&II OF ch=%d\n",num,ch);*/
	
	//讀取字元
    /*char ch ;
	printf("請輸入一個字元:");
	ch=getchar();
	printf("您輸入的字元是:");
	putchar(ch);
	putchar('\n');
	
	printf("請輸入一個字元:");
	ch=getche();
	printf("您輸入的字元是: %c\n",ch);
	
	printf("請輸入一個字元:");
	ch=getch();
	printf("您輸入的字元是: %c\n",ch);*/
	
	//練習 
	/*char str[25];
	printf("Input a string:");
	scanf("%s",str);
	printf("The string is %s",str);
	scanf("%s",str);
	printf(" %s",str);
	
	char ch1,ch2;
	printf("請輸入第一個數:");
	scanf("%c",&ch1);
	fflush(stdin);
	printf("請輸入第二個數:");
	scanf(" %c",&ch2);
	fflush(stdin);
	printf("chr1=%c, ch2=%c\n",ch1,ch2);*/
	
	
	
	return 0;
 }
