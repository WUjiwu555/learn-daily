//#include<stdio.h>
/*int main(){
printf("我已认真阅读并知晓以上须知，愿意遵守以上规定，若有违规行为，同意按照有关条款接受处理。");
return 0;
}*/

/*int main(){
int num1,num2;
scanf("%d%d",&num1,&num2);
printf("%d",num1+num2);
return 0;
}*/
/*#include<stdio.h>
int main(){
int num;
scanf("%d",&num);
printf("%d",num);
return 0;
}*/
/*-#include<stdio.h>
int main(){
char c;
scanf("%c",&c); 
printf("%c",c);
return 0;
}*/
/*#include<stdio.h>
int main(){
float r;
scanf("%f",&r);
printf("%.2f",r*r*3.14);
return 0;
}*/
/*#include<stdio.h>
int main(){
	int n;
	scanf("%d",n);
	if(n<0){
		n=-n;
	}
	
}*/
/**#include<stdio.h>
int main(){
	int n,i,a,b;
	scanf("%d", &n);  
	for(i = 0; i < n; i++){
		scanf("%d%d",&a,&b);
		printf("%d\n",a+b);
			}
		return 0;	
}*/
/*#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", num>=0 ? 1 : 0);
    return 0;
}*/
/*include<stdio.h>
int main(){
	int n,i,a;
	scanf("%d", &n);  
	for(i = 0; i < n; i++){
	scanf("%d",&a) ;
	if(a>=100 && a<=999){
	int ge = a % 10;      
    int shi = (a / 10) % 10; 
    int bai = a / 100;  
	printf("%d,%d,%d\n",ge,shi,bai);
	}
	else{
		printf("illegal\n");
	}
}
	return 0;	
}
/*int main() {
    int n;
    scanf("%d", &n);   
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);  
        if (num >= 100 && num <= 999) {
            int ge = num % 10;      
            int shi = (num / 10) % 10; 
            int bai = num / 100;    
            printf("%d,%d,%d\n", ge, shi, bai);
        } else {
            printf("illegal\n");
        }
    }
    
    return 0;
}*/

/*#include <stdio.h>
#include <string.h>

int main() {
    char s[20]; 
    scanf("%s", s);  
    
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        printf("%c", s[i]); 
        if (i != len - 1 && !(i == 0 && s[i] == '-')) {
            printf("-");
        }
    }
    printf("\n");
    
    return 0;
}*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[20];
    scanf("%s", s);
    
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        printf("%c", s[i]);
        
        if (i != len - 1 && !(i == 0 && s[i] == '-')) {
            printf("-");
        }
    }
    printf("\n");
    
    return 0;
}
