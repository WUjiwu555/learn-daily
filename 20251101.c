/***************
图形的显示在很多实践中显得尤为重要，现需要输出倒三角形。给出三角形的层数 
n，输出相应的倒三角形

#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m); 
    
    while (m--) {
        scanf("%d", &n);  

        for (int i = 0; i < n; i++) {
         
            for (int j = 0; j < i; j++) {
                printf(" ");
            }
          
            for (int k = 0; k < 2 * (n - i) - 1; k++) {
                printf("*");
            }
          
            printf("\n");
        }
    }
    
    return 0;
}
************************/
/************************
输入两个正整数 m,n 输出两者的最大公约数 
#include <stdio.h>

int main() {
    int T;         
    scanf("%d", &T);  
    
    while (T--) {    
        int m, n;
        scanf("%d %d", &m, &n);  
        
        
        int a = m, b = n;
        int c;
        
        if (a < b) {
            c = a;
            a = b;
            b = c;
        }
       
        while (b != 0) {
            c = a % b;  
            a = b;         
            b = c;      
        }
        
        printf("%d\n", a);
    }
    
    return 0;
}
******************************/
/********************************
将一个三位正整数的个位，十位，百位分离开，分别依次输出
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int num;
		scanf("%d",&num);
		if(num>=100 && num<=999){
			int ge = num % 10;
			int shi = (num / 10 ) %10;
			int bai = num / 100;
			
			printf("%d,%d,%d\n",ge, shi, bai);
		}
		else
		printf("illegal\n");
	}
	return 0;
}
*************************/
/**************************
输入一个正整数，输出它的二进制中包含几个1

#include <stdio.h>

int main() {
    int n;          
    scanf("%d", &n);  
    
    while (n--) {    
        int num;
        scanf("%d", &num);  
        
        int counter = 0;     
        int temp = num;   
        
        while (temp > 0) {
            if (temp % 2 == 1) { 
                counter++; //计数1的个数 
            }
            temp = temp / 2;      
        }
        
        printf("%d\n", counter);  
    }
    
    return 0;
}
***********************/
/******************************
判断字符类型 
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();  
    while (n--) {
        char c = getchar();
        getchar();  
        
        if (c >= '0' && c <= '9') {
            printf("number\n");
        } else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            printf("letter\n");
        } else {
            printf("else\n");
        }
    }
    
    return 0;
}
***************************/
/********************
计算三位数和 
#include<stdio.h>
int main(){
		int num;
		scanf("%d",&num);
	
			int ge = num % 10;
			int shi = (num / 10 ) %10;
			int bai = num / 100;
			
			printf("%d\n",ge + shi + bai);
	return 0; 
	}
	***********************/
	/************************
	输入一个正整数n， 求sum = 1!+2!+…+n!的值并输出。
#include<stdio.h>
int main(){
	int n;
	int sum= 0;
	int temp= 1; 
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
        temp *= i;    // temp=temp*i
        sum += temp;  //sum=sum+temp 循环n遍 
		}
	printf("%d\n",sum);
	return 0;
	}
	***********************/
	/*************************
	统计1~10000范围内有多少整数可以同时被13和17整除。
#include<stdio.h>
int main(){
	int counter= 0;
	for(int i=1;i<=10000;i++){
		if(i % 13 == 0 && i % 17 == 0)
		counter++;
	}
	printf("%d\n",counter);
	return 0;
}
*****************************/
