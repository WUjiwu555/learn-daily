//矩阵加法
/************
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[1000][1000];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		scanf("%d",&arr[i][j]);
		}
	}
for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d",arr[i][j] +arr[j][i]);
			if (j != n - 1) {
                printf(" ");
		}
	}
		printf("\n");
		 
}
	return 0;

}
************/
//矩阵求和
/*************
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		scanf("%d",&arr[i][j]);
		}
	}
for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d",arr[i][j] +arr[j][i]);
			if (j != n - 1) {
                printf(" ");
		}
	}
		printf("\n");
		 
}
	return 0;

}
//求矩阵乘积
#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int group = 0; group < n; group++) {
        int A[3][3], B[3][3], C[3][3];

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                scanf("%d", &A[i][j]);
            }
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                scanf("%d", &B[i][j]);
            }
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                C[i][j] = 0;
                for (int k = 0; k < 3; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d", C[i][j]);
                if (j != 2) printf(" ");
            }
            printf("\n");
        }

        if (group != n - 1) printf("\n");
    }

    return 0;
}
**********/
//求矩阵对角线元素之和
//#include<stdio.h>
//int main(){
//	int n;
//	scanf("%d",&n);
//	while(n--){
//		int sum = 0;
//		int arr[5][5];
//		for(int i=0;i<5;i++){
//			for(int j=0;j<5;j++){
//				scanf("%d",&arr[i][j]);
//			}
//		}
//		for(int i=0;i<5;i++){
//				sum += arr[i][i];
//		}
//		printf("%d",sum);
//	}
//	return 0;
//} 
//转置矩阵
//#include<stdio.h>
//int main(){
//	int n,m;
//	int arr[1000][1000];
//	scanf("%d %d",&n,&m);
//	if(n==0 || m==0){
//		printf("NO\n");
//	}
//	else {
//		for(int i=0;i<n;i++){
//			for(int j=0;j<m;j++){
//				scanf("%d",&arr[i][j]);
//			}
//		}
//			for(int i=0;i<n;i++){
//			for(int j=0;j<m;j++){
//				printf("%d",arr[i][j]);
//				if(j != m-1) printf(" ");	
//				}
//				printf("\n");
//			}
//			for(int i=0;i<m;i++){
//			for(int j=0;j<n;j++){
//				printf("%d",arr[j][i]);
//			if(j != n-1) printf(" ");	
//			}
//				printf("\n");
//		}
//		
//		
//	}
//	return 0;
//}
// 数组遍历
//#include <stdio.h>
//int main() {
//    int M, N;
//    scanf("%d %d", &M, &N);
//
//    int grid[10][10];
//    int dp[10][10];
//
//    for (int i = 0; i < M; i++) {
//        for (int j = 0; j < N; j++) {
//            scanf("%d", &grid[i][j]);
//        }
//    }
//
//    dp[0][0] = grid[0][0];
//
//    for (int j = 1; j < N; j++) {
//        dp[0][j] = dp[0][j-1] + grid[0][j];
//    }
//
//    for (int i = 1; i < M; i++) {
//        dp[i][0] = dp[i-1][0] + grid[i][0];
//    }
//
//    for (int i = 1; i < M; i++) {
//        for (int j = 1; j < N; j++) {
//            if (dp[i-1][j] < dp[i][j-1]) {
//                dp[i][j] = dp[i-1][j] + grid[i][j];
//            } else {
//                dp[i][j] = dp[i][j-1] + grid[i][j];
//            }
//        }
//    }
//
//    printf("%d\n", dp[M-1][N-1]);
//    return 0;
//}
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int m, num = 1;
        int arr[100][100];
        scanf("%d", &m);
        
        for (int i = 0; i < m; i++)
            for (int j = 0; j <= i; j++)
                arr[i][j] = num++;
        
        for (int i = 0; i < m; i++) {
            int cnt = m - i;
            for (int j = 0; j < cnt; j++) {
                printf("%d", arr[i + j][j]);
                if (j != cnt - 1) printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int m, n, num = 1;
    int arr[MAX_SIZE][MAX_SIZE];
    scanf("%d %d", &m, &n);
    
    int i = 0, j = 0, dir = 0;
    
    while (num <= m * n) {
        arr[i][j] = num++;
        
        if (dir == 0) {
            if (j == n - 1) {
                i++;
                dir = 1;
            } else if (i == 0) {
                j++;
                dir = 1;
            } else {
                i--;
                j++;
            }
        } else {
            if (i == m - 1) {
                j++;
                dir = 0;
            } else if (j == 0) {
                i++;
                dir = 0;
            } else {
                i++;
                j--;
            }
        }
    }
    
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", arr[i][j]);
            if (j != n - 1) printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
