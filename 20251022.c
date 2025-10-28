/************
author:吴家文 
date:2025.10.22
vision:5.11
*************/

#include<stdio.h>
//main函数由操作系统自动调用 
/********
int main(void)
{
//引入整形数据 每个语句以“；”结束	
	int x;
//printf()是输出函数	  \n是换行符 	   \t是水平制表符 
   	/**********
	question:打印1-100 每行打印5个 
	method 1 
	 for(int i=1;i<=100; ++i) {
	printf("%d\t",i);
	//逢5的倍数换一行 实现每行打印5个数 %是求余符合 ==是等于符号
	// =是赋值符号 
	if(i%5==0){
		printf("\n");
	} 
	***********/


//method 2
   /*********
   for(int i=1;i<=100;i=i+5){ 
   printf("%d\t%d\t%d\t%d\t%d\n",i,i+1,i+2,i+3,i+4);
}
    **********/
  /********
  method 3
    int i;
    for(i=0;i<20;i=i+1){
    	printf("%d\t%d\t%d\t%d\t%d\n",i*5+1,i*5+2,i*5+3,i*5+4,i*5+5); 
	}

  printf("//");
   return 0;
} 
**********/
//标识符是由字母，数字和下划线（_）组成的 但不能以数字开头	
//int x=5为初始化 int x; x=5;为赋值 
/******
int main(void)
{
	int x;
	int y;
	int sum;
  printf("请输入第一个整数:"); 
  scanf("%d",&x) ;
  printf("请输入第二个整数:") ;
  scanf("%d",&y);
  sum=x+y;
  printf("sum= %d\n",sum);
}
********/
/*******
int main(){
	int x;
	scanf("%d",&x);
	if(x%2==0){
		printf("yes!\n");
		}
		else
	   printf("no!\n");
	
}
**********/
//Q:输出0-100的偶数
 
/*****
int main(){
	//method 1
  /*********
  	for(int i=0;i<=100;i++){
		if(i%2==0)
		printf("%d\n",i);
	}
	*********/
	//method 2
   /*******
	for(int i=0;i<=100;i=i+2){
		printf("%d\n",i);
	}
	*******/
	//method 3
	/*******
	for(int i=0;i<=50;i++){
		printf("%d\n",i*2);
	}
	  
}
*******/
//运算符号 加+ 减—乘法* 除法/ 取余% 等于== 不等于！=
//question：输出5个数中最大值

/*********
int main(){
	//method 1 
	/*int max=0;
	int a,b,c,d,e;
	printf("请输入第1个整数："); 
	scanf("%d",&a);
	printf("请输入第2个整数：");
	scanf("%d",&b);
	printf("请输入第3个整数：");
	scanf("%d",&c);
	printf("请输入第4个整数：");
	scanf("%d",&d);
	printf("请输入第5个整数：");
	scanf("%d",&e);
	if(a>max)
	max=a;
	if(b>max)
	max=b;
	if(c>max)
	max=c;
	if(d>max)
	max=d;
	if(e>max)
	max=e;
	printf("%d\n",max);
*/
	//method 2
	/*****************
	int x;
	int max=0;
	printf("请输入5个整数：");
	for(int i=1;i<5;i++){
	scanf("%d\n",&x);
	if(x>max)
	max=x;
}
printf("max=%d\n",max);
    
    //easy calculation
	int x=1,a,b;
	for(;x!=0;){
	
    printf("请选择运算类型（输入数字）：\n");
    printf("1. 加法  2. 减法  3. 乘法  4. 除法\n");
    scanf("%d",&x);
     // 若输入 0，直接跳出循环（不执行后续输入和计算）
        if (x == 0) {
            printf("程序已退出！\n");
            break;
        } 
    printf("请输入两个整数");
   scanf("%d %d", &a, &b);
        // 输入无效操作编号（非1-4）
        if (x < 1 || x > 4) {
            printf("错误：请输入1-4之间的数字（0退出）！\n");
            continue;  // 跳过后续步骤，直接进入下一次循环
        }
	 if (x == 1) {
        printf("%d+%d=%d\n", a, b, a + b);
    } else if (x == 2) {
        printf("%d-%d=%d\n", a, b, a - b);
    } else if (x == 3) {
        printf("%d*%d=%d\n", a, b, a * b);
    } else if (x == 4) {
        // 关键：处理除法中除数为0的错误（避免程序崩溃或异常）
        if (b == 0) {
            printf("错误：除数不能为0！\n");
        } else {
            printf("%d/%d=%d\n", a, b, a / b);  // 注意：整数除法会舍弃小数（如5/2=2）
        }
    } 
}
}
    //mine
   /* if(x==1) printf("%d+%d=%d",a,b,a+b);
    if(x==2) printf("%d-%d=%d",a,b,a-b);
    if(x==3) printf("%d*%d=%d",a,b,a*b);
    if(x==4) printf("%d/%d=%d",a,b,a/b);*/
    //question:依次打印一个五位数 
    int main(void){
    	//method 1 
    	/*int x,a,b,c,d,e;
    	printf("请输入一个五位整数:");
    	scanf("%d",&x);
    	a=x/10000;
    	b=x/1000;
    	b=b%10;
    	c=x/100;
    	c=c%10;
    	d=x/10;
    	d=d%10;
    	e=x%10;
    	printf("%d\t %d\t %d\t %d\t %d",a,b,c,d,e);*/
    //method 2
	/************
	int x,a,b,c,d,e;
    	printf("请输入一个五位整数:");
    	scanf("%d",&x);
		a=x/10000;x=x%10000;
		b=x/1000;x=x%1000;
		c=x/100;x=x%100;
		d=x/10;x=x%10;
		e=x/1;
		printf("%d\t %d\t %d\t %d\t %d",a,b,c,d,e);
		********/
	//method 3
	/******************
		int x;
		printf("请输入一个五位整数:");
		scanf("%d",&x);
		int count=10000;
		for(int i=0;i<5;i++){
			printf("%d\t",x/count);
			x=x%count;
			count=count/10;
		}
		
	*******************/		
	}
