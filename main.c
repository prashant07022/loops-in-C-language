//We study loops in C language like (for, while, do-while)
//for loop basic program (print 1 to 5 number)
#include <stdio.h>
int main() 
{
    // A basic for loop to print numbers from 1 to 5
    for (int i = 1; i <= 5; i++) 
    {
        printf("%d\n", i);
    }
    return 0;
}

//While loop basic program (print 1 to 5 number)
#include <stdio.h>
int main() 
{
    // 1. Initialization: Set up the starting value
    int i = 1; 
    // 2. Condition: The loop runs as long as this remains true
    while (i <= 5)
    {
        printf("Number: %d\n", i);
        // 3. Updation: Change the variable so the loop eventually ends
        i++; 
    }
    return 0;
}

//Do-While loop basic program (print 1 to 5 number)
#include <stdio.h>
int main() 
{
    int i = 1; // Initialization
    do {
        printf("Number: %d\n", i);
        i++; // Increment counter
        } while (i <= 5); // Condition check
    return 0;
}
