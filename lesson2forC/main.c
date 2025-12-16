#include <stdbool.h>
#include <stdio.h>

int main() {
//   for(int i = 1; i <= 10; i++)
//       printf("%d\n", i);
 
 
//    bool isHasCar = true;
//    int x = 0;
//    while(isHasCar) {
//        printf("Введите число: ");
//        scanf("%d", &x);
//        if(x == 1)
//           isHasCar = false;
// }
    
//
//    float i = 100;
//    while (i > 2) {
//        printf("%.2f\n", i);
//        i /= 2;
//    }
    
    
//    bool isHasCar = false;
//    do {
//        printf("Yes\n");
//    } while(isHasCar);
    
    for(int x = 0; x < 10; x++) {
        if(x == 7)
            break;
        
        if(x % 2 ==0)
            continue;
            
        printf("%d\n", x);
    }
    return 0;
}
