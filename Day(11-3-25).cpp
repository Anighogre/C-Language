#include<stdio.h>

main() {
	
//	<----------Address operators:----------->

//	int a = 100;
//	int *p;
//	p = &a;
//	
//	printf("a value is %d\n", a); // a value is 100
//	printf("a addr is %d\n", &a); // a addr is 6487572
//	printf("p value is %d\n", p); // p value is 6487572	


//<----------( ) and , separators:--------->

//int a = (1, 2, 3); // a=3-->1,2(1-L, 2-R)-->R(2), 2,3(2-L, 3-R)-->R(3) so R-->3 ans
//printf("a=%d", a);




//int a;
//a = 1, 2, 3; // priority--->=, ,-->a=1
//printf("a=%d", a);




//int a;
//a = 1, (2), 3; // priority-->(), = , ,-->1, 2, 3--> a=1
//printf("a=%d", a);



//int a;
//a = (1, 2), (3, 4); // (1,2)->2, (3,4)->4, a = 2, 4 --> a=2
//printf("a=%d", a);


//int a;
//a = printf("I "), printf("Hate "), printf("You "); // a = 2,5,4--> a=2--->I Hate You 2
//printf("%d", a);



//int a;
//a = (printf("I "), printf("Hate "), printf("You ")); // a = (2,5,4)--> a=4--->I Hate You 4
//printf("%d", a);



//<-------sizeof(): It return the no of bytes taken by a 1. Variable 2. Value 3. Data type------->
//
//int a = 100; float b = 1.2; char c = 'X';
//
//printf("%d,%d,%d\n", sizeof(a), sizeof(b), sizeof(c)); // --> 4,4,1
//printf("%d,%d,%d\n", sizeof(int), sizeof(float), sizeof(char)); // -->4,4,1
//printf("%d,%d\n", sizeof(-5), sizeof(5)); // -->4,4
//printf("%d,%d\n", sizeof(32767), sizeof(32768)); // After 32767 every int is long i.e 4 bytes-->4,4
//printf("%d,%d\n", sizeof(32768u), sizeof(32768u)); // suffix-->may or may not be casting if possible-->4,4
//printf("%d,%d\n", sizeof((int)32768), sizeof((unsigned)32768)); // prifix-->100% converting-->4,4
//printf("%d,%d\n", sizeof(5L), sizeof((long)5)); // -->4,4 
//printf("%d,%d\n", siz*/eof(100000u), sizeof((int)100000)); // 100000u-->if possible then converted butg (int)100000-->100% converted-->4,4



//int f = 1.2;
//int a = 100000;
//
//printf("%d,%d\n", sizeof(a), sizeof((float)100)); // -->4,4
//printf("%d,%d\n", sizeof((char)100), sizeof((int)10.50)); // 1,4
//printf("%d,%d\n", sizeof(f), sizeof(1.2)); // the default floating type is double i.e 8 byet-->4,8
//printf("%d,%d\n", sizeof(1.2f), sizeof((float)1.2)); // -->4,4
//printf("%d,%d\n", sizeof(1.2l), sizeof(1.2L)); // -->16,16



//printf("%d", sizeof(1.2u)); // error cant convert float to int

}
