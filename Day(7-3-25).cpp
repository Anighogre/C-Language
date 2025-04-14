#include<stdio.h>

main()
{
/* Write a C program to print a 3 digit no in reverse order without using loop?
For example 123 reverse is 321 */

int n = 123;

printf("%d reverse is %d",n, n%10); // it gives 3
n = n/10; // it gives 123/10->12 and store in n
printf("%d%d\n", n%10, n/10); // 12%10->2 and 12/10->1

printf("<------X------>\n");

/* In division any one operand is negative then result also negative. 
If both are negative then result is positive. */

printf("%d\n%d\n%d\n", -5/2, 5/-2, -5/-2); // ans->-2, -2, 2

printf("<------X------>");

/* Relational operators [ == (comparison), <, >, <=, >=, != (not equal) ]: */

printf("%d\n", 3==3); // ans->1(3 is equal to 3 is correct(true))
printf("%d\n", 3==23); // ans->0(3 is not equal to 23 false)
printf("%d\n", 3==3.0); // ans->1(3 and 3.0 are equal)
printf("%d\n", 'a'==97); // ans->1(ASCII value of a is 97 so 97 and 97 are equals(true))
printf("%d\n", 'A'>'a'); // ans->0(ASCII value of A->65 and a->97(65>97)-> false)
printf("%d\n", 'A'>=65); // ans->1(ASCII value of A->65 so 65>=65->true)
printf("%d\n", 'A'!='B'); // ans->1(ASCII of A->65 and B->66(65!=66)->true)
printf("%d\n", 'A'+32==97); // ans->1(65+32=97-->97==97-->true)
printf("%d\n", "a"=="a"); // ans->in online compiler and DevC++ --> 1 and in TurboC-->0)

printf("<------X------>\n");

//Operator precedence / Operator priority

printf("%d\n", 5+3/2==4); // ans->0(3/2=1 and 5+1=6--> 6==4-->0)
printf("%d\n", (5+3)/2==4); // ans->1(5+3=8 and 8/2=4 so 4==4-->1)
printf("%d\n", 5-3+2==4); // ans->1(5-3=2 and 2+2=4 so 4==4-->1)
printf("%d\n", 5-(3+2)==4); // ans->0(3+2=5 and 5-5=0 so 0==4-->0)
printf("%d\n", 5*3/2==7); // ans->1(5*3=15 and 15/2=7(int/int=int) so 7==7-->1)
printf("%d\n", 5/3*2==2); // ans->1(5/3=1 and 1*2=2 so 2==2-->1)
printf("%d\n", 2+3*4+5==19); // ans->1(3*4=12 and 2+12=14 and 14+5=19 so 19==19-->1)
printf("%d\n", (2+3)*4+5==25); // ans->1(2+3=5 and5*2=20 and 20+5=25 so 25==25-->1)
printf("%d\n", (2+3)*(4+5)==45); // ans->1(2+3=5 and 4+5=9 and 5*9=45 so 45==45-->1)

printf("<------X------>\n");

//Logical operators:

printf("%d\n", 9==9, 8!=8); // ans->1(Only one %d is given so just first condition print)
printf("%d, %d\n", 9==9, 8!=8); // ans->1, 0(1 is for 9==9 and 0 is for 8!=8)
printf("%d\n", 9==9 && 8!=8); // ans->0(9==9->1 || 8!=8->0 so 1 && 0 --> 0)
printf("%d\n", 9==9 || 8!=8); // ans->1(9==9->1 || 8!=8->0 so 1 || 0 --> 1)
printf("%d\n", !(8!=8)); // ans->1(8!=8-->0 but !0 --> 1)
printf("%d\n", !(8==8)); // ans->0(8==8-->1 but !1-->0)
printf("%d\n", 8==9 && 9==9); // ans->1(8==8->1 && 9==9->1 so 1 && 1 -->1)
printf("%d\n", 8==8 && 9>9); // ans->0(8==8-->1 && 9>9-->0 so 1 && 0 -->0)
printf("%d\n", 8!=8 || 9 >= 9); // ans->1(8!=8-->0 || 9>=9-->1 so 0 || 1 -->1)
printf("%d\n", 1==1 && 2 >= 2 && 3 != 3); // ans->0(1==1-->1 && 2>=2-->1 so 1 && 1 -->1 and then 3!=3-->0 so 1 && 0-->0)





//<------------Day->6-3-25(continue to 7-3-25)--------------->


/* In && operation when left exp false, right exp not
checked.
In || operation when left exp true, right exp not checked. */

printf("%d\n", 1==1 || 2>=2 && 3<3); // ans->2>=2-->1 && 3<3-->0, 1 && 0 ->0 and 1==1-->1 so 1 || 0 -->1
printf("%d\n", (1==1 || 2>=2) && 3<3); // bracket gives 1st priority so 1==1 || 2>= --> 1 || 1-->1 then 1 && 0-->0
printf("%d\n", 5>3>1); // 5>3-->1, 1>1-->0
printf("%d\n", 5>3>0); // 5>3-->1, 1>0-->1
printf("%d\n", 5 && 3); // 5->1 && 3->1, 1 && 1-->1
printf("%d\n", 0 || 'o'); // 0 || 'o'->48->1, 0 || 1-->1
printf("%d\n", 0 && 4); // 4->1 so 0 && 1->0;



int a, b, c;
a = printf("I"); // print I and store a=1(I is one letter)
b = printf("Love"); // print Love and store b=4
c = printf("you"); // print you and store c=3
printf("%d%d%d\n", a, b, c); // ans->ILoveYou143


int a, b, c;
a = printf("I\t"); // print I and store a=2(I is one letter ant tab is 1)
b = printf("Love\t"); // print Love and store b=4+1 tab=5
c = printf("you\t"); // print you and store c=3 + 1 tab = 4
printf("%d%d%d\n", a, b, c); // ans->I	 Love	You	  254


int a, b, c;
a = printf("I\t"); // print I and 1tab space and store a=2
b = a*printf("Love\t"); // print Love and 1tab and b=a*5-->b=2*5-->b=10
c = a+b*printf("You\t"); // print you and 1tab space and c=2+10*4-->2+40-->c=42

printf("%d%d%d\n", a, b, c); // I    Love    You    21042


int a = 0.4, b, c;
a = !a; // !0.4-->1 a = 1 
b = !!a; // !!1-->!0-->1 b = 1
c = !!!a; // !!!1-->!!0-->!1-->0 c = 0
printf("a=%d, b=%d, c=%d\n", a, b, c); // ans--> a=1, b=1, c=0



int a, b, c;
a = !5 && !0.1; // !5->0 && !0.1->1, 0 && 1-->0
b = !!0 || !!1; // !!0->!1->0 || !!1->!0->1, 0 || 1-->1
c = !a && !b; // !a->!0->1 && !b->!1->0, 1 && 0-->0
printf("a=%d, b=%d, c=%d\n", a, b, c);




/* In && operation when left exp false, right exp not
checked.
In || operation when left exp true, right exp not checked. */

printf("I ") || printf("Love "); // I->1 so not checked right side print I
printf("") && printf("Jhanvi kapoor "); // ""->0 so not checked right side so nothing print
printf("Like ") || printf("Rashmika mandana "); // Like->4->1 so not checked right side print Like
printf("") || printf("Shradda kapoor "); // ""->0 but this is || operation do check right side 15->1 so print Shradda kapoor

//output---> I Like Shradda kapoor




0 || printf("I\t"); // 0 and check right side bcz || opr I->1--> so print I and 1 tab space
0 && printf("Miss\t"); // 0 and && operation so dont check right side nothing print
1 && printf("Like\t"); // 1 and && opr so check right side and print Like and 1 tab space
printf("Alia bhatt") || printf("Pooja Hedge"); // first 1 so dont check right side print alia bhatt

//output--> I    Like     Alia bhatt



int a, b, c;
a = !printf("I miss you") / !printf("I like you"); // it print I miss you I liek you Divide erroe(!10->0 / !10->0--> 0/0->infinite/Divide error)
b = !a + printf("Thank you\n");
c = !a && printf("good bye\n");
printf("a=%d, b=%d, c=%d", a, b, c);


int a;
a = !5 > !0; // !5->0 > !0->1 ==> 0 > 1-->0
printf("a=%d\n", a); // ans-->0


}
