//韩信点兵
/*************
#include<stdio.h>
int main(){
	int n,a,b,c;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d %d",&a,&b,&c);
		int x,found = 0;
		for(x=10;x<=100;x++){
		if(x % 3 == a && x % 5== b && x % 7== c){
		found = 1;
		break; 
		}
		}
		if(found){
		printf("%d\n",x);
		} 
		else{
				printf("Impossible\n") ;
		}
	}
	return 0;
}
************************/
//水仙花数
/******************** 
#include<stdio.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int count=0;
		int m,n;
		scanf("%d %d",&m,&n);
		for(int num=m;num<=n;num++){
			int a=num / 100;
			int b=(num / 10) % 10;
			int c=num % 10;
			if(a*a*a+b*b*b+c*c*c == num){
				if(count){
					printf(" ");
				}
				printf("%d",num);
				count++;
			}
		}
			if(count == 0){
				printf("-1");
			}
			printf("\n");
		
	}
     return 0;
}
**********************/
//给定一个整数a（0<=a<=5），求出a到a+4之间所有数的排列组合。
/***************************
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);  
    
    while (n--) {
        int a;
        scanf("%d", &a);  
        int num[5] = {a, a+1, a+2, a+3, a+4};
        
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (j == i) continue; 
                for (int k = 0; k < 5; k++) {
                    if (k == i || k == j) continue; 
                    for (int l = 0; l < 5; l++) {
                        if (l == i || l == j || l == k) continue;  
                        for (int m = 0; m < 5; m++) {
                            if (m != i && m != j && m != k && m != l) {
                                printf("%d%d%d%d%d\n", 
                                       num[i], num[j], num[k], num[l], num[m]);
                            }
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}
***************/
//乘法表
/*******************
#include<stdio.h>
int main(){
	for(int m=1;m<=9;m++){
		for(int n=1;n<=m;n++){
			printf("%d*%d=%d ",m,n,m*n);
		}
	printf("\n");	
	}
	return 0;
}
***************/
//给定两个整数，求解这两个整数范围内的所有整数的倒数的总和。注意遇到整数0时，直接加上0。
/**********************
#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);  
    for (i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        int start,end;
        if(a<=b){
        	start = a;
        	end = b;
		} 
		else{
			start = b;
			end = a;
		}
		double sum= 0.0;
		for(int i=start;i<=end;i++){
			if(i==0){
				sum += 0.0;
			}
			else{
				sum += 1.0 /i;
			}
		}
		printf("%.3f\n",sum);    
    }
    return 0;
}
***********************/
//输入若干个整数，求解其中绝对值最大的两个整数。
/**************
#include <stdio.h>
#include <stdlib.h> 

int main() {
    int m;
    scanf("%d", &m);
    
    while (m--) {
        int n;
        scanf("%d", &n);   
        int num[100];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &num[i]);
        }
        
        int first, second;
        
        if (abs(num[0]) > abs(num[1])) {
            first = num[0];
            second = num[1];
        } else if (abs(num[0]) < abs(num[1])) {
            first = num[1];
            second = num[0];
        } else {
            first = (num[0] > num[1]) ? num[0] : num[1];
            second = (num[0] < num[1]) ? num[0] : num[1];
        }
    
        for (int i = 2; i < n; i++) {
            int current = num[i];
            int curr_abs = abs(current);
            int first_abs = abs(first);
            int second_abs = abs(second);
            
            if (curr_abs > first_abs) {
                second = first;
                first = current;
            } else if (curr_abs == first_abs) {
                if (current > first) {
                    second = first;
                    first = current;
                } else if (current > second || curr_abs > second_abs) {
                    second = current;
                }
            } else if (curr_abs > second_abs) {
                second = current;
            } else if (curr_abs == second_abs) {
                if (current > second) {
                    second = current;
                }
            }
        }
        int temp;
    if(first <0 && second < 0){
    	if(first < second){
    		temp = first;
    		first = second;
    		second = temp;
		}
	}
        printf("%d %d\n", first, second);
    }
    
    return 0;
}
*******************/
//找丑数
/*************************
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int num;
        scanf("%d", &num);
        int is_ugly = 0;
        
        if (num > 0) {
            while (num % 2 == 0) {
                num /= 2;
            }
            while (num % 3 == 0) {
                num /= 3;
            }
            while (num % 5 == 0) {
                num /= 5;
            }
            if (num == 1) {
                is_ugly = 1;
            }
        }
        
        printf("%s\n", is_ugly ? "true" : "false");
    }
    return 0;
} 
***************************/
//猜数字
/************
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int x = -1;
        int start = ((1000 + a - 1) / a) * a;
        for (int candidate = start; candidate <= 9999; candidate += a) {
            if ((candidate + 1) % b == 0 && (candidate + 2) % c == 0) {
                x = candidate;
                break;
            }
        }
        if (x != -1) {
            printf("%d\n", x);
        } else {
            printf("Impossible\n");
        }
    }
    return 0;
}
*******************/ 
