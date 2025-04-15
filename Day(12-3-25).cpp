#include<stdio.h>;

main() {
 printf("abcd addr %u\n", "abc"); // abcd addr 4210688
 printf("%d\n", sizeof("abc"+1)); // it return address of the(abc-->4210689-->it default long int so sizeof return 8 byte and print 8)
 printf("Bharathi\n"+1); // B->base addr(Left them) h a r a t h i
 printf(1+"Bharathi"+1); // B->base addr(cause +1) h->base addr(cause 1+) a r a t h i(so left the base addr and print others)
 printf("Bharathi\n"-1); // garbageBharathi or blank space will print
		
		
		
 printf("%d\n"+1, 999); // ans->d(%->base addr because +1(left them) d)
 printf("%d\n"+1);//ans->d(%->base addr because +1(left them) d)
 printf("%d, %d\n", sizeof(100,1.2), sizeof(1.2,100)); // (100-L, 1.2-R-->R(1.2)->sizeof(1.2->long double =8 byte), (1.2-L, 100-R-->R(100)-->sizeof(100-->int(in online int take 4 byte))))
 printf("%d, %d\n", sizeof(100+1.2), sizeof(1.2+100)); //(101.2-->long double(8 byte), (101.2-->long double(8byte))




int a = 9999;
 printf("%d\n", sizeof(++a)); // int-4 byte
 printf("a=%d\n", a); // a = 9999
 printf("%d\n", sizeof(a=5555)); // size of int- 4 byte
 printf("a=%d\n", a); // a = 9999
 printf("%d\n", sizeof("1.23")); // sizeof so count the number 5 so 5 
 printf("%d\n", sizeof(sizeof("sizeof"))); // sizeof->6 letter+1(null va



printf("%d\n", ("")); // ""-> 1 cause null bvalue take 1 byte
printf("%d\n", (" ")) // 1 byet for space and 1 for null-->2 byte





/* Ternary /conditional operator [?:]
Conditional part ? true part : false part;
If condition true, the ? part is executed. If condition false : part is executed. */

//Finding even/odd without using if...else:

int n;
printf("Enter the value :");
scanf("%d", &n);
printf( n%2==0 ? "even" : "odd"); // if n%2==0 print Even otherwise print Odd



//Finding max in 2 no’s without using if..else?

int a,b;
printf("Enter the value of a,b:");
scanf("%d %d", &a, &b);
printf("%d is big", a>b ? a : b);



int a,b;
printf("Enter the value of a,b:");
scanf("%d %d", &a, &b);
printf(a>b?"a is big" :b>a?"b is big":"both are equal");




//Finding +Ve / -Ve /0 without using if..else:

int n;
printf("Enter the value of :");
scanf("%d", &n);
printf(n>0?"+Ve" :n<0?"-Ve":"0");




//Find even/odd without using if..else / ternary op?

int n;
printf("Enter the value of :");
scanf("%d", &n);
n%2==0 && printf("Even") || printf("Odd");



//Finding max in 2 no’s without using ternary/if..ellse:

int a,b;
printf("Enter the value of a,b:");
scanf("%d %d", &a, &b);
a>b && printf("a is big") || b>a && printf("b is big") || printf("Both are equal");



/* Read two numbers and perform arithmetic operation based on the operator without using if..else or ternary operator?

Enter two numbers 4 9
Enter operator: *
Multiplication = 36 */

// without using flushall

int a, b, c;
 char op;
 
 printf("enter a, b values: ");
 scanf("%d%d", &a, &b);
 printf("Enter an operator: [+, -, *, /, %] :");
 scanf(" %c", &op); // when not use the flushall give the space before %c
 
 op == '+' && (c=a+b);
 op == '-' && (c=a-b);
 op == '*' && (c=a*b);
 op == '/' && (c=a/b);
 op == '%' && (c=a%b);
 printf("Result=%d", c);



//with the use of flushall

int a, b, c;
 char op;
 
 printf("enter a, b values: ");
 scanf("%d%d", &a, &b);
 printf("Enter an operator: [+, -, *, /, %] :");
 flushall();
 scanf("%c", &op); 
 
 op == '+' && (c=a+b);
 op == '-' && (c=a-b);
 op == '*' && (c=a*b);
 op == '/' && (c=a/b);
 op == '%' && (c=a%b);
 printf("Result=%d", c);


//without using flushall

int a, b, c;
 char op;
 
 printf("Enter an operator: [+, -, *, /, %] :");
 scanf("%c", &op); 
 printf("enter a, b values: ");
 scanf("%d%d", &a, &b);
 
 op == '+' && (c=a+b);
 op == '-' && (c=a-b);
 op == '*' && (c=a*b);
 op == '/' && (c=a/b);
 op == '%' && (c=a%b);
 printf("Result=%d", c);


//using logical operator in one line

int a, b, c;
 char op;
 
 printf("Enter an operator: [+, -, *, /, %] :");
 scanf("%c", &op); 
 printf("enter a, b values: ");
 scanf("%d%d", &a, &b);
 
 op == '+' && (c=a+b) || op == '-' && (c=a-b) || op == '*' && (c=a*b) || op == '/' && (c=a/b) || op == '%' && (c=a%b);
 printf("Result=%d", c);
  
  
    printf("Hi") == scanf("%d%d")&& printf("True") || printf("False");

  
  
  
}
