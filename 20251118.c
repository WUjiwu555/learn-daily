//单身数
/****************
#include<stdio.h>
int main(){
	int n,num,dan=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		dan ^= num;
	}
	printf("%d",dan);
	return 0;
} 
*************/
//分析数
/********************** 
#include<stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    
    int digits;
    if (num >= 10000) {
        digits = 5;
    } else if (num >= 1000) {
        digits = 4;
    } else if (num >= 100) {
        digits = 3;
    } else if (num >= 10) {
        digits = 2;
    } else {
        digits = 1;
    }
    printf("%d\n", digits);
    
    switch (digits) {
        case 5:
            printf("%d ", num / 10000);  
        case 4:
            printf("%d ", (num % 10000) / 1000); 
        case 3:
            printf("%d ", (num % 1000) / 100);   
        case 2:
            printf("%d ", (num % 100) / 10);     
        case 1:
            printf("%d ", num % 10);             
    }
    printf("\n");
    
    int temp = num;
    for(int i=0;i<digits;i++){
    	 printf("%d ", temp % 10); 
    	 temp /= 10;
	}
	 printf("\n");

    return 0;
}
**************/
//找不同
/************************ 
#include <stdio.h>

#define MAX 1000

int main() {
    int N;
    scanf("%d", &N);
    
    for (int j = 0; j < N; j++) {
        int n;
        scanf("%d", &n);
        
        int a[MAX];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        int result = 0;
        for (int i = 0; i < n; i++) {
            result ^= a[i];
        }
        
        printf("%d\n", result);
    }
    
    return 0;
}
******************/
//杨辉三角 
/**************
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0 || n > 20) {
        printf("Input Error\n");
        return 0;
    }

    int yanghui[20][20];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                yanghui[i][j] = 1;
            } else {
                yanghui[i][j] = yanghui[i-1][j-1] + yanghui[i-1][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d,", yanghui[i][j]);
        }
        printf("\n");
    }

    return 0;
}
**************/
//排序1
/**************#include <stdio.h>

int main() {
    int arr[10];
    int i, min_idx = 0, max_idx = 0, temp;

    // 读取10个整数
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // 查找最小值索引
    for (i = 1; i < 10; i++) {
        if (arr[i] < arr[min_idx]) {
            min_idx = i;
        }
    }

    // 最小数与第一个数交换
    temp = arr[0];
    arr[0] = arr[min_idx];
    arr[min_idx] = temp;

    // 查找最大值索引（注意：交换后需重新查找）
    for (i = 1; i < 10; i++) {
        if (arr[i] > arr[max_idx]) {
            max_idx = i;
        }
    }

    // 最大数与最后一个数交换
    temp = arr[9];
    arr[9] = arr[max_idx];
    arr[max_idx] = temp;

    // 输出结果
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
****************/
//排序2
/*************
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 从大到小排序
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // 输出前m大的数
    for (int i = 0; i < m; i++) {
        printf("%d", arr[i]);
        if (i != m - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
************/
//判断
/**************
#include <stdio.h>

int main() {
    int a, b, c, d, e;
    while (1) {
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
        if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0) {
            break;
        }

        int is_arith = 0, is_geo = 0, is_fib = 0;

        int d_arith = b - a;
        if (c - b == d_arith && d - c == d_arith && e - d == d_arith) {
            is_arith = 1;
        }

        int ratio = 0;
        if (a != 0 && b != 0 && c != 0 && d != 0 && e != 0) {
            if (b % a == 0) {
                ratio = b / a;
                if (c == b * ratio && d == c * ratio && e == d * ratio) {
                    is_geo = 1;
                }
            }
        }

        if (c == a + b && d == b + c && e == c + d) {
            is_fib = 1;
        }

        if (is_arith) {
            printf("case one\n");
            int next = e + d_arith;
            for (int i = 0; i < 5; i++) {
                printf("%d", next);
                if (i != 4) {
                    printf(" ");
                }
                next += d_arith;
            }
            printf("\n");
        }

        if (is_geo) {
            printf("case two\n");
            int next = e * ratio;
            for (int i = 0; i < 5; i++) {
                printf("%d", next);
                if (i != 4) {
                    printf(" ");
                }
                next *= ratio;
            }
            printf("\n");
        }

        if (is_fib) {
            printf("case three\n");
            int x = d, y = e;
            for (int i = 0; i < 5; i++) {
                int next = x + y;
                printf("%d", next);
                if (i != 4) {
                    printf(" ");
                }
                x = y;
                y = next;
            }
            printf("\n");
        }
    }
    return 0;
}
***************/
//冒泡排序
/**************** 
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n-1;i++){
    	int swapped = 0;
    	for(int j=0;j<n-1-i;j++){
    		if(arr[j] > arr[j+1]){
    			int temp = arr[j];
    			arr[j] = arr[j+1];
    			arr[j+1] = temp;
    			swapped = 1;
			}
	}
	 for (int k = 0; k < n; k++) {
            printf("%d", arr[k]);
            if (k != n - 1) {
                printf(" ");
} 
}
printf("\n");
    if (swapped == 0) {
            break;
        }
}
  return 0;

}
*****************/
//输入字符串并统计其中组成的整数个数
 /**************
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    while (n > 0) {
        char s[1000];
        int i = 0;

        char c;
        while (1) {
            c = getchar();
            if (c == '\n' || c == EOF) {
                break;
            }
            s[i] = c;
            i++;
        }
        s[i] = '\0';

        int nums[100];
        int cnt = 0;
        int current = 0;
        int in_num = 0;

        i = 0;
        while (s[i] != '\0') {
            if (s[i] >= '0' && s[i] <= '9') {
                in_num = 1;
                current = current * 10 + (s[i] - '0');
            } else if (in_num == 1) {
                nums[cnt] = current;
                cnt++;
                current = 0;
                in_num = 0;
            }
            i++;
        }

        if (in_num == 1) {
            nums[cnt] = current;
            cnt++;
        }

        if (cnt == 0) {
            printf("0||NULL\n");
        } else {
            printf("%d||", cnt);
            for (i = 0; i < cnt; i++) {
                printf("%d", nums[i]);
                if (i != cnt - 1) {
                    printf(" ");
                }
            }
            printf("\n");
        }

        n--;
    }

    return 0;
}
***********/
