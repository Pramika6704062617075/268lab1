#include<stdio.h>
int main (){
	int a,b,c ;
	float a1,b1,c1 ,a2,b2,c2 , d, d1 , d2 , e1 , e2, e;
	scanf("%d" ,&a);
	a1 = a*5/100 ;
	a2 = a - a1 ;
	printf("%.2f" ,a2);
	
	
	scanf("%d" ,&b);
	d = a + b ;
	d1 = d*15/100 ;
	d2 = d - d1 ;
	printf("%.2f" ,d2);
	
	
	scanf("%d" ,&c);
	e = a+b+c ;
	e1 = e*30/100 ;
	e2 = e - e1 ;
	printf("%.2f" ,e2);
	
	return 0 ;
}
