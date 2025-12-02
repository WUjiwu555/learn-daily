/*********
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int num1,num2,min;
		scanf("%d %d",&num1,&num2);
		if(num1>=0&&num2>=0){
		
		min = num1 > num2 ? num2 : num1;
		printf("%d\n",min);
	}
}
	return 0;
} 
************/
/************
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int x;
		scanf("%d",&x);
	  if(x<0){
			printf("no\n");
		}
		else if( (x % 4 ==0 &&x %100 !=0) || x % 400 ==0){
			printf("yes\n");
		}
		else{
		printf("no\n");
		}
	}
	return 0;
}
****************/
/*****************
#include<stdio.h>
int main(){
	int day;
	scanf("%d",&day);
	switch(day){
		case 1:printf("Monday\n");break;
		case 2:printf("Tuesday\n");break;
		case 3:printf("Wednesday\n");break;
		case 4:printf("Thursday\n");break;
		case 5:printf("Friday\n");break;
		case 6:printf("Saturday\n");break;
		case 7:printf("Sunday\n");break;
		default:printf("Input Error\n");
	}
	return 0;
}
************/
/*************
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int num;
		int count = 0;
	    scanf("%d",&num);
	    if(num == 0){
	    	count = 1;
		}
	    while(num > 0){
	    	num = num /10;
	    	count++;
		} 
	    printf("%d\n",count);	
		}
	return 0;
}
***************/
/*************
#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	for(int num=1;num<=x;num++){
		int ture = 1;
		if(num <= 1){
			ture = 0;
		}
		else{
		for(int i=2;i*i<=num;i++){
			if(num % i == 0){
				ture = 0;
				break;
			}
		}
	}
	if(ture == 1){
		printf("%d ",num);
	}
}
  printf("\n");
  return 0;
}
**********/
/**************
#include<stdio.h>
int main(){	
	for(int num=100;num<1000;num++){
		int ge = num %10;
		int shi = (num /10) % 10 ;
		int bai = num /100;
		if(num == ge*ge*ge + shi*shi*shi +bai*bai*bai){
			printf("%d\n",num);
		}
	}
	return 0;
}
*************/
/***************
#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	for(int i=0;i<=x;i++){
		for(int j=1;j<=i;j++){
			printf("%d*%d=%2d ",j,i,j*i);
		}
		printf("\n");
	}
	return 0;
}
**********************/
/************
#include<stdio.h>
int main(){
	int sun = 1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			sum = sum * j;
		}
	}
}
****************/
/**************
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int n;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	int count5 = 0;
	int count6 = 0;
	srand(time(NULL));
	for(int i=0;i<10000;i++){
		n = rand() % 6 + 1;
		if(n == 1){
			count1++;
		}
		if(n == 2){
			count2++;
		}
		if(n == 3){
			count3++;
		}
		if(n == 4){
			count4++;
		}
		if(n == 5){
			count5++;
		}
		if(n == 6){
			count6++;
		}
	
	}
	printf("%d %d %d %d %d %d",count1,count2,count3,count4,count5,count6);
}
******************/
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int n;
	int arr[6] = {0};
	srand(time(NULL));
		for(int i=0;i<10000;i++){
				n = rand() % 6 + 1;
				arr[n-1]++;	
			}
		
	for(int i = 0; i < 6; i++){
        printf("点数%d：", i + 1);  // 输出点数
        // 按比例输出星号（次数/20，取整数）
        for(int j = 0; j < arr[i] / 20; j++){
            printf("*");
        }
        printf(" （共%d次）\n", arr[i]);  // 补充显示实际次数
    }

}*/
/*
int main(){
	int arr1[30];
	int arr2[30];
	int arr3[30]={0};
	int i= -1;
	char c;
	for(int i=0;i<30;i++){
		arr1[i] = -1;
		arr2[i] = -1;
	}
	scanf("%d",&c);
	while(c>='0'&&c<='9'){
		i++;
		arr1[i]= c - '0';
		scanf("%d",&c);
	}
	printf("%d",arr[i]);
	printf("%d",arr[0]);
	for(int i=0;i<30;i++){
		if(arr[i] != -1)
		printf("%d",arr[i]);
		else 
		break;
	}
	printf("\n");
}
*/
/*
int main(){
	int arr[3][4]={{1,2,3,4},
	               {2,3,4,5},
	               {5,6,7,8}};
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			printf("%5d",arr[j][i]);
		}
		printf("\n");
	}
}
*/
/*****************
int main(){
	int arr1[3][4]={{1,2,3,4},
	               {2,3,4,5},
	               {5,6,7,8}};
	int arr2[3][4]={{13,32,43,14},
	               {22,34,41,55},
	               {57,96,87,48}};               
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
		printf("%5d",arr1[i][j] + arr2[i][j])  ;
		}
		printf("\n");
	}	
}
*****************/
/****************
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int score[10][3]={{0}};
	srand(time(NULL));
	for(int i=0;i<10;i++){
		for(int j=0;j<3;j++){
			score[i][j] = rand()%101;
			
		}
	}
		for(int i=0;i<10;i++){
			printf("student %d:",i+1);
		 int sum = 0;
		for(int j=0;j<3;j++){
			printf("\t%d",score[i][j]);
			sum += score[i][j];
		}
		printf("\t%.1f",sum/3.0); 
		printf("\n");
	}
	
	
	printf("1:math\n2:Chinese\n3:english\n");
	printf("choose the average of which subject\n");
	
	
	int choice;
	scanf("%d",&choice);
	switch(choice){
		case 1:	{
		int sum1=0;
		for(int i=0;i<10;i++){
			sum1 = sum1 + score[i][0];
		} 
		printf("%d",sum1/10);
			break;

		}
		case 2:{
		int sum2=0;
		for(int i=0;i<10;i++){
			sum2 = sum2 + score[i][1];
		} 
		printf("%d",sum2/10);
			break;
		} 
		case 3 :{
		int sum3=0;
		for(int i=0;i<10;i++){
			sum3 = sum3 + score[i][2];
		} 
		printf("%d",sum3/10);
			break;
		} 
	}
}
**********************/
#include<stdio.h>
int main(){
	int row,col;
	int row1,col1;
	int arr[3][3]={0};
	row = 0;
	col = 1;
	for(int i=1;i<=9;i++){
		arr[row][col] = i;
		row1 = row -1;
		col1 = col + 1;
	if(row1 <0 && col1 >2) {
		row1 =row + 1;
		col1 = col;
	} 
	else if(row1<0) row1 =2;
	else if(col1>2) col1 = 0;
	else if(arr[row1][col1] != 0) {
	    row1 =row + 1;
		col1 = col;
	}
	 row = row1;
        col = col1;
}
 printf("3x3数组填充结果：\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
