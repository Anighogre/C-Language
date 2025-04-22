// Online C compiler to run C program online
#include <stdio.h>
 #include<conio.h>

main() {
    // HOTEL BILL GENERATION:
    
    int qty, amt=0, op;
    
    start:
//    clrscr();
    puts("______________________________________________________________");
    puts("\t\t\t HOTEL SAI BALAJI - VEG");
    puts("\t\t\t AMEERPET  -  HYDERABAD");
    puts("______________________________________________________________");
    
    puts("\t\t 1. Tea-10/-");
puts("\t\t 2. Coffee/Milk/Boost/Lemon tea/Water- 20/-");
puts("\t\t 3. Idly/poha/upma/plain dosa-30/-");
puts("\t\t 4. Poori/wada/Onion dosa - 40/-");
puts("\t\t 5. sambar wada / curd rice / lemon rice - 50/-");
puts("\t\t 6. Veg biryani/ Paneer dosa - 60/-");
puts("\t\t 7. Bill");
puts("\t\t 8. Cancel");
puts("\t\t 9. Close");

puts("___________________________________________________________________");

printf("\t\t\tEnter ur option[ ]\b\b");
scanf("%d", &op);

if(op>=1 && op<=6) {
    printf("Enter the quantity :");
    scanf("%d", &qty);
}
    switch(op) {
        case 1: amt =amt+qty*10;break;
        case 2: amt =amt+qty*20;break;
        case 3: amt =amt+qty*30;break;
        case 4: amt =amt+qty*40;break;
        case 5: amt =amt+qty*50;break;
        case 6: amt =amt+qty*60;break;
        case 7: printf("Ur billed amount = %d",amt); getch(),amt=0;break;
        case 8: printf("Your order canclled", amt=0);getch();break;
        case 9: return 0 ;
    }
    goto start;
    
    getch();
//    return ;
}
