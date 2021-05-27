//#include <stdio.h>
//#include <sys/types.h>
//#include <unistd.h>

#include "print.h"

int myAtoi(char* str)
{
    // Initialize result
    int res = 0;
 
    // Iterate through all characters
    // of input string and update result
    // take ASCII character of corosponding digit and
    // subtract the code from '0' to get numerical
    // value and multiply res by 10 to shuffle
    // digits left to update running total
    for (int i = 0; str[i] != '\0'; ++i)
        res = res * 10 + str[i] - '0';
 
    return res;
}

char* ItoA(int x)
{
    int remainder;
    char Num_str[33];
    Num_str[32]='\0';
    char *ptr = &Num_str[32];

    do
    {
        remainder = x % 10;
        x /= 10;
        *--ptr = (unsigned char)remainder + 48; 	// Add zero(0 = 48<ASCII>) to convert in proper ASCII value			
    }while(x!=0);
    
    return (ptr);
}

void itoa(int num,char *str)
{
    while(num!=0)
    {
        *str=num%10+'0';
        str++;
        num=num/10;
    }
    
    *str='\0';
}

void kernel_main() {
    // fork(); // we can't run this

    print_clear();

    print_set_color(PRINT_COLOR_LIGHT_RED, PRINT_COLOR_BLACK);
    print_str("UPC - Operating System\n");

    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to our 64-bit kernel!\n");

    print_set_color(PRINT_COLOR_LIGHT_GREEN, PRINT_COLOR_BLACK);

    /*
    int num = 321;
    int entero = 321;
    char snum[5];
    //itoa(num, snum, 10);

    //char str[] = "89789";
    //int val = myAtoi(str);
    //num = num + entero; 

    int i = 12345;
    print_str("nums: ");
    print_str(ItoA(i));
    */


    int num = 12;
    int num2 = 5;
    num = num + num2;

    char str[8] = {0};
    itoa(num, str); 
    print_str(str);

    print_str("\n");
    print_str("Let's go\n");

    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    print_str(greeting);
    print_str("\n");

    char greeting2[] = "Hello";
    print_str(greeting2);
}
