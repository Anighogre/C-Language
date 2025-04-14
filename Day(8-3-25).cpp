#include<stdio.h>
 main(){
 	
// 	Increment / Decrement operators [ ++ / -- ]:

int a = 4, b = 10;
a++;
b--;
printf("a=%d, b=%d\n", a, b); // ans->a++-->5 and b-- -->4


printf("<------X------>");

int a = 4, b = 10;
++a;
--b;
printf("a=%d, b=%d\n", a, b); // in ++/-- only varaible is used , pre and post are same


printf("<------X------>");

int a = 4, b;
b = a++;
printf("a=%d, b=%d\n", a, b); // ans->b=a-->b=4 and then  a++ =5(a=5, b=4)-->priority(=,a++)
a = 4;
b = ++a;
printf("a=%d, b=%d\n", a, b); // ans->++a=5 and b=a-->b=5(a=5, b=5)-->priority(++a, =)


printf("<------X------>");

int a = 4, b;
b = a--;
printf("a=%d, b=%d\n", a, b); // ans->b=a-->b=4 and then  a-- =3(a=3, b=4)-->priority(=,a--)
a = 4;
b = --a;
printf("a=%d, b=%d\n", a, b); // ans->--a=3 and b=a-->b=3(a=3, b=3)-->priority(--a, =)


printf("<------X------>");

printf("<------X------------X------------Problem------------X------------X------>\n");
int a = 4, b;
b = a++ + a++ + a++;
printf("a=%d, b=%d\n", a , b); // asn->7, b=15

a = 4;
b = ++a + ++a + ++a;
printf("a=%d, b=%d\n", a, b); // ans->a=7, b=19


printf("<------X------>");

int a = 4, b;
b = ++a + a++ * ++a;
printf("a=%d, b=%d\n", a, b); // ans->a=7, b=42(priority-->++a,*,+,=,a++)++a=5, ++a=6==>a=6 
                                        // b=a+a*a==>6+6*6=42 b=42 a++==>7
printf("<------X------------X------------Problem------------X------------X------>\n");
int a = 4, b;
b = ++a + a-- + --a + a++;
printf("a=%d, b=%d\n", a, b);


printf("<------X------>");

printf("<------X------------X------------Problem------------X------------X------>\n");
int a = 1, b = 2;
a = a++ + ++b;
b = ++a + b++;
printf("a=%d, b=%d\n", a, b);


printf("<------X------>");

int a = 10;
a++/2;
printf("a=%d\n", a); // ans->a=10(priority->/,a++) a/2->10/2-->5[5 not stored bcz of = noyt used i.e a still 10] a++ -->11
++a/2;
printf("a=%d\n", a); // ans->12(pri->++a,/) ++a(11)->12 then a/2->12/2->7[6 not stored bcz of = noyt used i.e a still 12]


printf("<------X------>");

printf("<------X------------X------------Problem------------X------------X------>\n");
int a = 10;
a = a++/2;
printf("a=%d\n", a); // ans->a=5 a++-->11 and 11/2-->5
a = ++a/2;
printf("a=%d\n", a); // ans->a=3 ++a-->6 and 6/2-->3


printf("<------X------>");

int a = 10;
printf("a=%d\n", a++/2); // ans->a=5(priority->/,printf,a++)
printf("a=%d\n", ++a/2); // ans->6(priority->++a,/,printf)
printf("%d", a);


printf("<------X------>");

int a = 10;
printf("a=%d\n", a++); // ans->10(priority->printf,a++)
printf("a=%d\n", ++a); // ans->12(priority->++a,printf)


printf("<------X------>");

//in printf execution order right to left and printing left to right
printf("<------X------------X------------Problem------------X------------X------>\n");

int a = 1;
printf("%d, %d, %d, %d, %d\n", ++a, a++, a--, --a, ++a); // ans->2, 0, 1, 2, 2
printf("%d, %d, %d, %d, %d\n", ++a, a*10, a=10, a++, ++a); // ans->11, 100, 11, 3, 11

 }
