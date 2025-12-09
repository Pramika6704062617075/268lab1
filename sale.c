#include<stdio.h>
int main (){
	int a,b,c ;
	float a1 ,a2, d, d1 ,d3,d4, d2 , e1 , e2, e, a3, a4,e3,e4;
	scanf("%d" ,&a);
	a1 = a*5/100 ;
	a2 = a - a1 ;
	a3 = a2*7/100 ;
	a4 = a2 + a3 ;
	printf("%.2f\n" ,a4);
	
	
	scanf("%d" ,&b);
	d = a + b ;
	d1 = d*15/100 ;
	d2 = d - d1 ;
	d3 = d2*7/100 ;
	d4 = d2 + d3 ;
	printf("%.2f\n" ,d4);
	
	
	scanf("%d" ,&c);
	e = a+b+c ;
	e1 = e*30/100 ;
	e2 = e - e1 ;
	e3 = e2*7/100 ;
	e4 = e2 + e3 ;
	printf("%.2f\n" ,e4);
	
	return 0 ;
}



