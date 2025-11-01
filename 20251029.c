/*给你一个正整数 n。

返回 大于等于 n 且二进制表示仅包含 置位 位的 最小 整数 x 。

置位位指的是二进制表示中值为 1 的位。*/
//#include<stdio.h>
/*****************************
int smallestNumber(int n) {
    int x = 1;
    while (x<n){
        x = x*2 + 1;
    }
    return x;
}
int main(){
	int num;
	
	printf("请输入一个整数：");
	scanf("%d" , &num);
	
	int result = smallestNumber(num);  // 调用函数计算结果
    printf("大于等于%d的最小形如2^k-1的数是：%d\n", num, result);
    return 0;
	
}
******************************/
/*int main( ){

顺序结构 
	int x = 10;
	int y = 5;
	int z = 20;
//分支结构 
	if(x > y)
	  printf("x = %d\n",x);
	else
	printf("y = %d\n",y);
//**?**:**:条件运算符 
	x>y?printf("x = %d\n",x):	printf("y = %d\n",y);
//嵌套？：求三个数最大值		
	printf("max = %d\n",(x>y?x:y)>z?(x>y?x:y):z);
//循环结构 for循环为计数控制循环 1初始化计数变量2计数条件3更新计数变量，while循环 
    for(int i=0;i<10;i++){
    	x = x+1;
    	
	}//
	printf("x = %d\n",x);
int g;
printf("请输入你的成绩：\n");
scanf("%d", &g) ;
if (g >= 90 )
printf("A\n");
else if(g < 90 && g >= 80)
printf("B\n");
else if(g < 80 && g >= 70)
printf("C\n");
else if(g < 70 && g >= 60)
printf("D\n");
else
printf("E\n");
 
}*/
/*int counter;
float grade,total;
counter = 0;
total = 0.0; 
 while(counter<10){
	printf("输入成绩：");
	scanf("%d",&grade);
	total = total + grade;
	counter = counter + 1; 
}

for(counter = 0;counter < 10;counter++){
	printf("输入成绩：");
	scanf("%d",&grade);
	total = total + grade;
}
**********************/
/*int counter;
float grade,total;
counter = 0;
total = 0.0; 
while(grade != -1){
	printf("输入成绩：");
	scanf("%f", &grade);
	if(grade != -1 && grade >= 0 && grade <= 100){
	total = total + grade;
	counter = counter + 1;
	} 
}
if(counter!=0){
     printf("%.1f\n",total / counter);
}
else {
     printf("没有输入有效成绩\n");

}

}*/
#include<stdio.h>
/*int main(){
	int i;
	int sum = 0;
while(i<=100){
	sum +=  i;
	i++;
	if( i % 3 == 0)
	printf("%d\n",i);
} 
printf("%d\n",sum);
	
} */
int main(){
	int i = 2;
	int flag = 0;
	printf("2\n");
	while(i<=100){
		if(i % 3 != 0){
		
		flag=0;
		for(int j= 2;j*j <= i;j++){
			if(i % j == 0)
			flag= 1;//i能被j整除则不是质数 
		}
	}
		if(flag==0)
		printf("%d\n",i);
		i ++;
	}
	int x,y;
	printf("输入一个整数：");
	scanf("%d",&x) ;
	printf("0000000000");
	while(x != 0){
		printf("%d",x%2);
		printf("\b\b");
		x= x/2;
	}
	while(x % y != 0){
		x=y;
		y=x % y;
				}
	printf("%d",y);
	}


