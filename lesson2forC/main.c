
#include <stdio.h>

int main() {
    int x = 70;
    
    switch (x) {
        case 10:
            printf("10");
            break;
        case 12:
            printf("12");
            break;
        case 15:
            printf("15");
            break;
        case 20:
            printf("20");
            break;
        default:  // выполняется это действие если предыдущие все не сработали
            printf("Error\n");
            break;
    }
    
    return 0;
}
