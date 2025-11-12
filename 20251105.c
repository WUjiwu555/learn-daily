#include<stdio.h>
/***********
//判断字符种类 
int main(){
	int a;
	scanf("%d",&a);
	getchar();
	while(a--){
	char c;
	c=getchar();
	getchar();
		if(c >= '0' && c <= '9'){
			printf("number\n");
			}
		else if ( (c >= 'A' &&  c  <= 'Z')||(c >= 'a' &&  c  <= 'z')){
			
				printf("letter\n");
			}
			
		else {
		printf("else");
		}
		
	}
	return 0;
} 
************************/
/*****************
//十进制转换为十六进制 
int main1(){
	int n;
	scanf("%d",&n);
	printf("%0x\n",n);
	printf("0x00000000");
	while(n != 0){
		if(n % 16 < 10){
			printf("%d",n%16  );
		}else{
			if(n%16 == 10) printf("A");
			else if(n%16 == 11) printf("B");
			else if(n%16 ==12 ) printf("C");
			else if(n%16 == 13) printf("D");
			else if(n%16 == 14) printf("E");
			else if(n%16 == 15) printf("F");
		}
		printf("\b\b");
		n= n/ 16;
	}
}
**********/
/**********
//交换ab的值 
int main2(){
	int a,b,temp;
	scanf("%d%d",&a,&b);
	temp=b;
	b=a;
	a=temp;
	printf("a=%d\nb=%d\n ",a,b);
}
********/
//斐波拉契数列前8位 
/*****
int main3(){
	int a = 1; //变量的生命周期：在距离最近的{}执行结束后释放 
	int b = 1;
	printf("1  1  ");
	for(int i=0;i<8;i++){
	int temp;
	temp = a + b;
	printf("%d\t",temp);
	a = b;
	b = temp;	
	}
}
********/
//打印对称三角形
 /*****
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
		printf("*");	
			}
	printf("\n");
	}
	for(int i= (n-2);i>=0;i--){
			for(int j=0;j<=i;j++){
		printf("*");	
			}
	printf("\n");
	}
} 
******/
/************
//打印菱形 
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n-i;k++){
				printf(" ");
		}
		for(int j=1;j<=2*i-1;j++){
			printf("*");
		}
			printf("\n");
	}
	for(int i=n-1;i>0;i--){
		for(int k=1;k<=n-i;k++){
				printf(" ");
		}
		for(int j=1;j<=2*i-1;j++){
			printf("*");
		}
			printf("\n");
	}
} 
****************/
/*******************
//break continue语法 
int main(){
	for(int i=0;i<3;i++){
		printf("1\n");
	    printf("2\n");
		printf("3\n");
	}
	printf("5\n");
	for(int i=0;i<3;i++){
		printf("1\n");
		break;//break：结束并跳出‘当前 ’循环 
	    printf("2\n");
		printf("3\n");
	}
	printf("5\n");
	for(int i=0;i<3;i++){
		printf("1\n");
		continue;//continue：跳过以下循环 只执行以上循环 
	    printf("2\n");
		printf("3\n");
	}
	printf("5\n");
} 
***************/
/*******
//switch语法 建立菜单 
int main() {
    int day;
    printf("输入星期数（1-7）：");
    scanf("%d", &day);

    switch (day) {                 //switch语句 
        case 1:  // 当day=1时执行
            printf("星期一\n");
            break;  // 跳出switch 若无break 则会执行case day 以下所有case指令 
        case 2:  // 当day=2时执行
            printf("星期二\n");
            break;
        case 3:
            printf("星期三\n");
            break;
        case 4:
            printf("星期四\n");
            break;
        case 5:
            printf("星期五\n");
            break;
        case 6:
            printf("星期六\n");
            break;
        case 7:
            printf("星期日\n");
            break;
        default:  // 所有case都不匹配时执行
            printf("输入错误！请输入1-7\n");
    }

    return 0;
}
**********/	
/***************
int main(){
	int choice = 1;
	do {
	printf("1：16进制\n");
	printf("2：交换ab\n");
	printf("3：斐波拉契数列前10项\n");
	printf("0：退出\n");
	printf("选择(0-3)\n");
      do{
      	scanf("%d",&choice);
	  if(choice < 0 || choice > 3)	
	  printf("出错了 请重新输入(0-3):");
		} 	while(choice < 0 || choice > 3);
	
	switch(choice){
		case 1:printf("1：16进制\n");main1();break;
		case 2:	printf("2：交换ab\n");main2();break;
		case 3:printf("3：斐波拉契数列前10项\n");main3();break;	
	}
} while(choice != 0);
}
int main1(){
	int n;
	scanf("%d",&n);
	printf("%0x\n",n);
	printf("0x00000000");
	while(n != 0){
		if(n % 16 < 10){
			printf("%d",n%16  );
		}else{
			if(n%16 == 10) printf("A");
			else if(n%16 == 11) printf("B");
			else if(n%16 ==12 ) printf("C");
			else if(n%16 == 13) printf("D");
			else if(n%16 == 14) printf("E");
			else if(n%16 == 15) printf("F");
		}
		printf("\b\b");
		n= n/ 16;
	}
}
int main2(){
	int a,b,temp;
	scanf("%d%d",&a,&b);
	temp=b;
	b=a;
	a=temp;
	printf("a=%d\nb=%d\n ",a,b);
}
int main3(){
	int a = 1; //变量的生命周期：在距离最近的{}执行结束后释放 
	int b = 1;
	printf("1  1  ");
	for(int i=0;i<8;i++){
	int temp;
	temp = a + b;
	printf("%d\t",temp);
	a = b;
	b = temp;	
	}
}
*************/
/**********
//输出成绩等级 
int main(){
	int score;
	scanf("%d",&score);
	switch(score/10){
		case 10: printf("A\n");break;
		case 9: printf("B\n");break;
		case 8: printf("C\n");break;
		case 7: printf("D\n");break;
		case 6: printf("E\n");break;
		default:  printf("F\n");break;
	}
} 
******************/
/******************
/打折计算 
int main(){
	int a;
	scanf("%d",&a);
	switch(a/500){
		case 1:a=a * 0.95 ;break;
		case 2:
		case 3:a=a * 0.9 ;break;
		case 4:
		case 5:a=a * 0.8;break;
	}
	printf("%d",a);
} 
**************/
/*****
int main(){
	int score;
	scanf("%d",&score);
	if(score>= 60)printf("%c\n",'A'+ 10 - score/10);
	else printf("F\n");
	**********/
/**********
int main(){
	char c;
	//加密到后一位 
	do{
	scanf("%c",&c);
	if(c >='a' && c<='y') printf("%c",c+1);
	if(c == 'z') printf("a");
	} while(c != 10);
	printf("\n");
	//加密到原本的后三位 
	scanf("%c",&c);
	while(c != 10){
		c = c + 3;
		if(c> 'z') c -= 'z' - 'a';
		printf("%c",c);
		scanf("%c",&c);
	}
	printf("\n");
}
*************/
int main(){
	char c;
	int count1=0,count2=0,count3=0,count4=0;
	scanf("%c",&c);
	while(c != 10){
			if(c<='9' && c>='0') count1++ ;
 else if(c<='Z' && c>='A') count2++ ;
 else if(c<='z' && c>='a') count3++ ;
	else count4++;
	scanf("%c",&c);
	}
printf("%d%d%d%d\n",count1,count2,count3,count4) ;
}
