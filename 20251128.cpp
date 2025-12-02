////找鞍点 
//#include<stdio.h>
//int main(){
//	int arr[50][50];
//	int n,m;
//	int have = 0;
//	scanf("%d %d",&n,&m);
//	for(int i=0;i<n;i++){
//		for(int j=0;j<m;j++){
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	for(int i=0;i<n;i++){
//		int max = arr[i][0];
//		int loc = 0;
//		for(int j=1;j<m;j++){
//			if(arr[i][j] > arr[i][0]){
//				max = arr[i][j];
//				loc = j;
//			}
//		}
//	int saddle = 1;
//	for(int k=0;k<n;k++){
//		if(arr[k][loc] < max){
//			saddle = 0;
//			break;
//		}
//	}
//	if(saddle == 1){
//		printf("a[%d][%d]=%d\n",i,loc,max);
//		have = 1;
//	}
//}
//	if(have !=1){
//		printf("NO\n");
//	}
//	return 0;
//
//}

#include <stdio.h>
#define MAX_N 100005

int arr[MAX_N];
int N, M;

int binarySearch(int x, int left, int right) {
    if (left > right) {
        return -1;
    }
    
    int mid = left + (right - left) / 2;
    
    if (arr[mid] == x) {
        int first_idx = binarySearch(x, left, mid - 1);
        return first_idx != -1 ? first_idx : mid;
    } else if (arr[mid] > x) {
        return binarySearch(x, left, mid - 1);
    } else {
        return binarySearch(x, mid + 1, right);
    }
}

int main() {
    scanf("%d %d", &N, &M);
    
    for (int i = 1; i <= N; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < M; i++) {
        int x;
        scanf("%d", &x);
        int res = binarySearch(x, 1, N);
        printf("%d\n", res);
    }
    
    return 0;
}
#include <stdio.h>  
#include <stdlib.h> 
#define MAX_LEN 1000  

void bubbleSort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {        
        for (int j = 0; j < len - 1 - i; j++) { 
            if (arr[j] > arr[j + 1]) {         
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int window_w, n;  
    int signal[MAX_LEN];  
    int filtered_signal[MAX_LEN];  

    // 输入窗口宽度、信号长度和原始信号
    scanf("%d %d", &window_w, &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &signal[i]);
        filtered_signal[i] = signal[i];  // 初始化：结果先复制原始数据
    }

    // 检查窗口是否为偶数（偶数输出ERROR）
    if (window_w % 2 == 0) {
        printf("ERROR\n");
        return 0;
    }

    // 错误1修正：半宽 = 窗口宽度 / 2（整数除法）
    int half = window_w / 2;  // 比如window_w=3→half=1，window_w=5→half=2
    for(int i=0; i < n; i++){
        // 计算窗口左右边界（基于正确的半宽）
        int left = i - half;
        int right = i + half;
        
        // 窗口完全在信号内（左右边界有效）才滤波
        if(left >= 0 && right < n){
            int window[window_w];  // 存储当前窗口的元素
            // 提取窗口内的元素（从left到right，共window_w个）
            for (int j = 0; j < window_w; j++) {
                window[j] = signal[left + j];
            }
            // 对窗口元素排序
            bubbleSort(window, window_w);
            // 错误2修正：中值索引 = half（窗口半宽）
            filtered_signal[i] = window[half];  // 比如window_w=3→window[1]是中值
        }
    }

    // 输出滤波结果（元素间空格分隔，结尾换行）
    for (int i = 0; i < n; i++){
        if(i != 0){
            printf(" ");
        }
        printf("%d", filtered_signal[i]);
    }
    printf("\n"); 
    return 0;
}
