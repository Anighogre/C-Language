#include<stdio.h>

main() {
//	int a=2, b=3, c=10;
//	c = a+++b; // (c=a++ +b)(pri-->+,=,a++) c=a+b-->c=2+3-->c=5,a++-->a=a+1-->a=2+1=3 and b remain same
//	printf("a=%d, b=%d, c=%d", a, b, c);
	
	
	
//	int a=2, b=3, c=10;
//	c=(a++ +b)++; // a+b=5,a++->5++-->5=5+1(Lvalue error  5-constant)
//	printf("a=%d, b=%d, c=%d", a, b, c);
//	c=++(++a +b);// same error
//	printf("a=%d, b=%d, c=%d", a, b, c);
	
	
//	printf("%d", 2++); // 2++-->2=2+1,2 is a constant
//	printf("%d", ++2);// ++2-->2=2+1,2 is a constant
	
	
//	int a = 2;
//	printf("%d\n", a=5, ++a); // here only one %d present so printing left to right gone a=5
//	printf("%d, %d, %d\n", a++, ++a, a=printf("Good morning\n")); // execution right to left-->
//	printf("%d\n", ++a);
	
	
//	int a, b, c, d;
//	a=b=c=2;
//	
//	d = a++ >= 2 && ++b != c++; // d = a++(a++=3)->2>=2-->1 && 3(++b) != 2(c++=3) ==>3 != 2--->1 && 1--->1
//	printf("a=%d,b=%d,c=%d,d=%d", a, b, c, d); // ans--> a=3, b=3, c=3, d=1
	
	
//	int a, b, c, d;
//	a=b=c=2;
//	
//	d = a++ >= 2 && ++b == c++; // d = a++(a++=3)->2>=2-->1 && 3(++b) == 2(c++=3) ==>3==2=0 --->1 && 0--->0
//	printf("a=%d,b=%d,c=%d,d=%d", a, b, c, d); // ans--> a=3, b=3, c=3, d=0
	
	
	
	int a, b, c, d;
	a=b=c=2;
	
	d = a++ >= 2 || ++b == c++; // d = a++(a++=3)->2>=2-->1 in || operation left exp true then right exp not checked
	printf("a=%d,b=%d,c=%d,d=%d", a, b, c, d); // ans--> a=3, b=2, c=2, d=1
	
	
	
	
	
}
