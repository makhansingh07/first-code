#include <stdio.h>
#define PASS_MARKS 33

int isPass(int marks) { return marks >= PASS_MARKS; }
int isEven(int num) { return num % 2 == 0; }

int main() {
    int marks, num;
    
    printf("Marks dalo: ");
    scanf("%d", &marks);
    printf("Result: %s\n", isPass(marks) ? "PASS" : "FAIL");

    printf("\nNumber dalo Even/Odd ke liye: ");
    scanf("%d", &num);
    printf("%d is %s\n", num, isEven(num) ? "EVEN" : "ODD");
    
    return 0;
}
