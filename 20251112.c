#include<stdio.h>
#include <stdlib.h>  // 包含rand()和srand()
#include <time.h>    // 包含time()，用于设置随机种子
/************
int main(){
    int arr[10] = {0};  // 初始化数组，避免使用未赋值元素
    int total = 0;
    int max = -1;
    int num, score;
    int choice = -1;

    // 循环显示菜单，直到用户选择0退出
    while (choice != 0) {
        printf("\n1.请输入3个学生成绩\n");
        printf("2.输出平均成绩\n"); 
        printf("3.输出最高成绩\n"); 
        printf("4.修改成绩\n");
        printf("0:退出\n");
        
        printf("请输入选项: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                total = 0;  // 重新输入时重置总分
                max = -1;   // 重新输入时重置最高分
                printf("请输入3个成绩: ");
                for(int i=0; i<3; i++){
                    scanf("%d", &arr[i]);
                    total += arr[i];  // 输入时直接计算总分
                    if (arr[i] > max) {
                        max = arr[i];  // 输入时直接计算最高分
                    }
                }
                break;

            case 2:
                // 检查是否已输入成绩（避免除以0或使用初始值）
                if (total == 0 && arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
                    printf("请先输入成绩（选择1）\n");
                } else {
                    printf("平均成绩是：%d\n", total / 3);
                }
                break;

            case 3:
                if (max == -1) {  // 未输入成绩时max保持初始值-1
                    printf("请先输入成绩（选择1）\n");
                } else {
                    printf("最高成绩：%d\n", max);
                }
                break;

            case 4:
                if (max == -1) {
                    printf("请先输入成绩（选择1）\n");
                } else {
                    printf("你想修改第几个成绩（0-2）？");
                    scanf("%d", &num); 
                    if (num < 0 || num >= 3) {
                        printf("输入错误，索引应为0-2\n");
                        break;
                    }
                    printf("修改后成绩是：");
                    scanf("%d", &score); 
                    // 先减去旧成绩，再加新成绩更新总分
                    total = total - arr[num] + score;
                    arr[num] = score;
                    // 更新最高分
                    max = -1;  // 重新计算最高分
                    for(int i=0; i<3; i++){
                        if (arr[i] > max) {
                            max = arr[i];
                        }
                    }
                    printf("修改成功\n");
                }
                break;

            case 0:
                printf("程序退出\n");
                break;

            default:
                printf("无效选项，请重新输入\n");
        }
    }
    return 0;
}
***********/
//斐波拉契数列 
/*******
int main5(){
	int arr[10]={1,1};
	for(int i=2;i<10;i++){
		arr[i] = arr[i-2] + arr[i-1];
		
	}
	for(int i=0;i<10;i++){
	printf("  %d",arr[i]);
}
}
***************/
//随机数 
/************
int main6(){
	    // 用当前时间作为随机种子（确保每次运行生成不同序列）
    srand((unsigned int)time(NULL));

	for(int i=0;i<10;i++){
		printf("%d  ",rand());
	}
} 
****************/
//洗牌发牌 
 /***********
int main(){
	int poker[54];
	int temp,pos;
	int p1[17],p2[17],p3[17];
	for(int i=0;i<54;i++){
		poker[i]= i + 1;
	}
	srand((unsigned int)time(NULL));
	for(int i=0;i<54;i++){
		pos=rand() % 54;
		temp = poker[i];
		poker[i] = poker[pos];
		poker[pos] = temp;
	}
    for (int i = 0; i < 17; i+=1) {
	 	p1[i]=poker[i*3];
	 	p2[i]=poker[i*3+1];
	 	p3[i]=poker[i*3+2];
    }
    /*for(int i=0;i<17;i++){
		printf("%5d  ",p1[i]);
	}
	printf("\n");
	 for(int i=0;i<17;i++){
		printf("%5d  ",p2[i]);
	}
	printf("\n");
	 for(int i=0;i<17;i++){
		printf("%5d  ",p3[i]);
	}
	printf("\n");
    for(int i=51;i<54;i++){
		printf("%5d  ",poker[i]);
	}
	// 打印玩家1的牌（直接在循环中处理花色和牌面）
    printf("玩家1的牌：\n");
    for (int i = 0; i < 17; i++) {
        int num = p1[i];
        if (num == 53) {
            printf("小王  ");
        } else if (num == 54) {
            printf("大王  ");
        } else {
            // 计算花色和牌面
            int suit = (num - 1) / 13;  // 0-3分别对应黑桃、红桃、梅花、方块
            int rank = (num - 1) % 13 + 1;  // 1-13（A-K）

            // 打印花色（用ASCII符号）
           switch (suit) {
                case 0: printf("黑桃"); break;
                case 1: printf("红桃"); break;
                case 2: printf("梅花"); break;
                case 3: printf("方片"); break;
            }

            // 打印牌面（处理A、J、Q、K）
            switch (rank) {
                case 1:  printf("A  "); break;
                case 11: printf("J  "); break;
                case 12: printf("Q  "); break;
                case 13: printf("K  "); break;
                default: printf("%d  ", rank); break;  // 2-10直接输出数字
            }
        }
        if ((i + 1) % 5 == 0) printf("\n");  // 每5张换行
    }

    // 打印玩家2的牌
    printf("\n玩家2的牌：\n");
    for (int i = 0; i < 17; i++) {
        int num = p2[i];
        if (num == 53) {
            printf("小王  ");
        } else if (num == 54) {
            printf("大王  ");
        } else {
            int suit = (num - 1) / 13;
            int rank = (num - 1) % 13 + 1;
           switch (suit) {
                case 0: printf("黑桃"); break;
                case 1: printf("红桃"); break;
                case 2: printf("梅花"); break;
                case 3: printf("方片"); break;
            }
            switch (rank) {
                case 1:  printf("A  "); break;
                case 11: printf("J  "); break;
                case 12: printf("Q  "); break;
                case 13: printf("K  "); break;
                default: printf("%d  ", rank); break;
            }
        }
        if ((i + 1) % 5 == 0) printf("\n");
    }

    // 打印玩家3的牌
    printf("\n玩家3的牌：\n");
    for (int i = 0; i < 17; i++) {
        int num = p3[i];
        if (num == 53) {
            printf("小王  ");
        } else if (num == 54) {
            printf("大王  ");
        } else {
            int suit = (num - 1) / 13;
            int rank = (num - 1) % 13 + 1;
           switch (suit) {
                case 0: printf("黑桃"); break;
                case 1: printf("红桃"); break;
                case 2: printf("梅花"); break;
                case 3: printf("方片"); break;
            }
            switch (rank) {
                case 1:  printf("A  "); break;
                case 11: printf("J  "); break;
                case 12: printf("Q  "); break;
                case 13: printf("K  "); break;
                default: printf("%d  ", rank); break;
            }
        }
        if ((i + 1) % 5 == 0) printf("\n");
    }

    // 打印底牌
    printf("\n底牌：\n");
    for (int i = 51; i < 54; i++) {
        int num = poker[i];
        if (num == 53) {
            printf("小王  ");
        } else if (num == 54) {
            printf("大王  ");
        } else {
            int suit = (num - 1) / 13;
            int rank = (num - 1) % 13 + 1;
            switch (suit) {
                case 0: printf("黑桃"); break;
                case 1: printf("红桃"); break;
                case 2: printf("梅花"); break;
                case 3: printf("方片"); break;
            }
            switch (rank) {
                case 1:  printf("A  "); break;
                case 11: printf("J  "); break;
                case 12: printf("Q  "); break;
                case 13: printf("K  "); break;
                default: printf("%d  ", rank); break;
            }
        }
    }
    printf("\n");

    return 0;
}
***********/
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int temp;
	srand((unsigned int)time(NULL));
	for(int i=0;i<n;i++){
		arr[i]=rand() % 101;
		printf("%6d",arr[i]);
	}
	printf("\n");
   	  // 选择排序：从小到大（修正逻辑）
  /*  for (int i = 0; i < 9; i++) {  // 外层循环：控制轮数（n-1轮）
        int min_idx = i;  // 记录当前最小值的索引（初始化为当前位置）
        
        // 内层循环：找到剩余元素中的最小值索引
        for (int j = i + 1; j < 10; j++) {
            if (arr[j] < arr[min_idx]) {  // 若找到更小的元素，更新索引
                min_idx = j;
            }
        }
        
        // 交换当前位置与最小值位置的元素
        if (min_idx != i) {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
    ************************/
    // 冒泡排序：从小到大
    // 外层循环：控制排序轮数（n个元素需要n-1轮）
    
	for (int i = 0; i < n; i++) {
        // 标记本轮是否发生交换（若未交换，说明数组已有序）
        int swapped = 0;
        // 内层循环：每轮比较相邻元素（每轮少比较i个已排序的元素）
        for (int j = 0; j < n - i -1; j++) {
            if (arr[j] > arr[j + 1]) {  // 前 > 后，交换
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;  // 标记发生交换
            }
        }
        
        // 若本轮无交换，说明数组已有序，提前退出
        if (swapped == 0) {
            break;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%6d", arr[i]);
    }
    printf("\n");
    int left=0;
    int right=n - 1;
    int index=-1;
    int target;
    scanf("%d",&target);
    while(left<=right){
    	int mid = (left + right) / 2;
    	if (arr[mid] == target) {
            index = mid;  // 找到目标，记录索引
            break;        // 退出循环
        } else if (arr[mid] > target) {
            right = mid - 1;  // 目标在左半部分，缩小右边界
        } else {
            left = mid + 1;   // 目标在右半部分，缩小左边界
        }
    }

    // 输出结果
    if (index != -1) {
        printf("找到目标值 %d，索引为 %d\n", target, index);
    } else {
        printf("未找到目标值 %d\n", target);
    }
	}

