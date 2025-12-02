//#include<stdio.h>
//int main(){
//	int arr[100][100];
//	int n,m,num=1;
//	scanf("%d %d",&n,&m);
//	int i=0,j=0,dir=0;
//	while(num <= n * m){
//		arr[i][j] = num++;
//		if(dir == 0){
//		if(j == m-1)	{
//			dir = 1;
//			i++;
//		}
//		else if(i == 0){
//			dir = 1;
//			j++;
//		}
//		else{
//			i--;
//			j++;
//		}
//	}
//		else{
//			if(i == n -1){
//				dir = 0;
//				j++;
//			}
//			else if(j == 0){
//				dir = 0;
//				i++;
//			}
//			else{
//				i++;
//				j--;
//			}
//		}
//		
//	}
//	for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            printf("%d", arr[i][j]);
//            if (j != m - 1) printf(" ");
//        }
//        printf("\n");
//    } 
//    return 0;
//} 
//函数封装  自定义函数 
//void f1(){
//	int x,y;
//	x = 10;
//	y = 20;
//	printf("%d",x+y);
//}
//void f2(int x, int y){
//	printf("%d",x+y);
//}
//int main(){
//	f1();
//}
//int main(){
//	f2(10,20);
//}
//#include<stdio.h>
//void addTwoNumber();
//void addTwoNumber(int x, int y);
//int multiplyTwoNumber();
//int divideTwoNumber(int x, int y);
// int main(){
// 	printf("1.add\n2.minus\n3.multiply\n4.divide\n0.exit\n");
// 	int choice;
// 	printf("enter your choice(0-4):");
// 	scanf("%d",&choice);
// 	int x,y,result;
// 	switch(choice){
// 		case 1: 
//		 addTwoNumber();
//		 break;
// 		case 2: 
//		 scanf("%d %d",&x,&y);
//		 minusTwoNumber(x,y);
//		 break;
// 		case 3:
//		 result = multiplyTwoNumber(x,y);
//		 printf("%d\n",result);
//		  break;
//		case 4:
//		scanf("%d %d",&x,&y);
//		result = divideTwoNumber(x,y);
//		printf("%d / %d = %d\n",x,y,result);
//		 break;
//			
//	 }
// 
// }
//void addTwoNumber(){
//	int x,y;
// 	scanf("%d %d",&x,&y);
// 	printf("%d + %d = %d\n",x,y,x+y);
// }
//void minusTwoNumber(int x, int y){
//    printf("%d - %d = %d\n",x,y,x-y)
// }
// int multiplyTwoNumber(){
// 	int x,y;
// 	scanf("%d %d",&x,&y);
// 	return x*y;
// }
// int divideTwoNumber(int x, int y){
// 	return x / y;
// }
// 
#include<stdio.h>
//int f7(int n){
//	int result = 1;
//	
//	for(int i=2;i<=n;i++){
//		result *= i;
//	}
//	return result;
//}
////递归  n!
//int F7(int n){
//	if(n == 1){
//		return 1;
//	}
//	else{
//		return n * f(n-1);
//	}
//	
//}
//
//int main7(){
//	int n;
//	scanf("%d",&n);
//	printf("%d! = %d\n",n,F7(n));
//
//	 
//}
//斐波拉契数列 
//int f8(int n){
//	int result = 0;
//	int a,b,temp;
//	 a = 1;
//	 b = 1;
//	if(n ==1 || n==2){
//		result = 1;
//	}
//	else{
//	for(int i= 3;i<=n;i++){
//		temp = a + b;
//		a = b;
//		b = temp; 
//	} 
//	result = b;
//}
//return result;
//}
////递归 
//int F8(int n){
//	int result;
//	if(n ==1 || n==2){
//		return 1;
//	}
//	else{
//	 return F8(n-1) + F8(n-2);	
//	}
//}
//
//	
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	printf("%d\n",F8(n));
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	int result = 1;
//	int sum = 0;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=i;j++){
//			result = result * j;
//		}
//		sum = sum + result;
//	}
//	printf("%d",sum); 
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	char A,B,C;
//	if(n == 1){
//		printf("%c->&c\n",A,C);
//	}
//}
#include <stdio.h>
//
//void hanoi(int n, char A, char B, char C) {
//    if (n == 1) {
//        printf("%c -> %c\n", A, C);
//        return;
//    }
//    hanoi(n-1, A, C, B);  // 步骤1：n-1个从A移到B（C辅助）
//    printf("%c -> %c\n", A, C);  // 步骤2：第n个从A移到C
//    hanoi(n-1, B, A, C);  // 步骤3：n-1个从B移到C（A辅助）
//}
//
//int main() {
//    int n;
//    printf("输入盘子个数n：");
//    scanf("%d", &n);
//    printf("移动步骤：\n");
//    hanoi(n, 'A', 'B', 'C');
//    return 0;
//}

//void f9(int arr1[]){
//	arr1[0] = 20;
//}
//int main(){
//	int arr[10] = {1,2,5};
//	f9(arr);
//	printf("%d\n",arr[0]);
//}
#include<stdio.h>
#include <stdlib.h>  // 包含rand()和srand()
#include <time.h>    // 包含time()，用于设置随机种子
#define size 3
int arr[size] = {0};  // 初始化数组，避免使用未赋值元素
    int total = 0;
    int max = -1;
    int num, score;
    
void printMenu();
void inputScore();
void calculateAverage(); 
void outputMax();
void correctScore();
int main(){
    int choice = -1;

    // 循环显示菜单，直到用户选择0退出
    while (choice != 0) {
       printMenu();
        
        printf("请输入选项(0-4): ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                inputScore();  break;
            case 2:
                calculateAverage();break;
            case 3:
                outputMax(); break;
            case 4:
                 correctScore(); break;
            case 0:
                printf("程序退出\n"); break;
            default:
                printf("无效选项，请重新输入\n");
        }
    }
    return 0;
}
void printMenu(){
	 printf("\n1.请输入3个学生成绩\n");
        printf("2.输出平均成绩\n"); 
        printf("3.输出最高成绩\n"); 
        printf("4.修改成绩\n");
        printf("0:退出\n");
        
}
void inputScore(){
	total = 0;  // 重新输入时重置总分
                max = -1;   // 重新输入时重置最高分
                printf("请输入3个成绩: ");
                for(int i=0; i<size; i++){
                    scanf("%d", &arr[i]);
                    total += arr[i];  // 输入时直接计算总分
                    if (arr[i] > max) {
                        max = arr[i];  // 输入时直接计算最高分
                    }
                }
}
void calculateAverage(){
	// 检查是否已输入成绩（避免除以0或使用初始值）
                if (total == 0 && arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
                    printf("请先输入成绩（选择1）\n");
                } else {
                    printf("平均成绩是：%d\n", total / 3);
                }
}
void outputMax(){
	if (max == -1) {  // 未输入成绩时max保持初始值-1
                    printf("请先输入成绩（选择1）\n");
                } else {
                    printf("最高成绩：%d\n", max);
                }
}
void correctScore(){
	if (max == -1) {
                    printf("请先输入成绩（选择1）\n");
                } else {
                    printf("你想修改第几个成绩（0-2）？");
                    scanf("%d", &num); 
                    if (num < 0 || num >= 3) {
                        printf("输入错误，索引应为0-2\n");
                        return;
                    }
                    printf("修改后成绩是：");
                    scanf("%d", &score); 
                    // 先减去旧成绩，再加新成绩更新总分
                    total = total - arr[num] + score;
                    arr[num] = score;
                    // 更新最高分
                    max = -1;  // 重新计算最高分
                    for(int i=0; i<size; i++){
                        if (arr[i] > max) {
                            max = arr[i];
                        }
                    }
                    printf("修改成功\n");
                }
}
