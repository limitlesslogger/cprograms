#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int ch;
    printf("enter choice\n\
    1. chappati\n\
    2.Mandhi\n\
    3.Puri\n\
    4.samosa\n\
    5.ghee roast ");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
            printf("selected chappati");
            break;
        case 2:
            printf("selected mandhi");
            break;
        case 3:
            printf("selected puri");
            break;
        case 4:
            printf("selected samosa");
            break;
        case 5:
            printf("selected ghee roast");
            break;
        default:
            printf("sorry");
    }
    return EXIT_SUCCESS;
}
//if ch is 3 switch straight goes to 3 switch has better performance
/*Comparison Chart
Basic Terms	If-else	Switch-case
Check the testing expression	An if-else statement can test expression based on a range of values or conditions.	A switch statement tests expressions based only on a single integer, enumerated value, or string object.
Ideal for	if-else conditional branches are great for variable conditions that result into Boolean.	Switch statements are ideal for fixed data values.
Creation of jump table	In the if-else case, we do not create a jump table, and all cases are executed at runtime.	In switch case, we create jump table on compiled time only selected case is executed on runtime.
Type of search	If else implements linear search.	Switch implements binary switch.
Condition & expression	Having different conditions is possible.	We can only have one expression.
Evaluation	If-else statement evaluates integer, character, pointer or floating-point type or Boolean type.	Switch statement evaluates only character or integer value.
Sequence of execution	It is either if-statement will be executed, or else-statement is executed.	Switch case statement executes one case after another till a break statement appears or until the end of the switch statement is reached.
Default execution	If the condition inside if statements are false, then by default, the else statement is executed if created.	If the condition inside switch statements does not match with any of the cases, for that instance, the default statement is executed if created.
Values	Values are based on the constraint.	Values are based on user choice.
Use	It is used to evaluate a condition to be true or false.	It is used to test multiple values of the same variable or expression like 1, 2, 3, etc.
Editing	It is difficult to edit the if-else statement if the nested if-else statement is used	It is easy to edit switch cases as they are recognized easily.*/