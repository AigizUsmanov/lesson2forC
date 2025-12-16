
#include <stdio.h>
#include <stdbool.h>

int main() {
    int x = 20, y = 5;
    
    if ((x == 10 && y < 7) || x == 20)
        printf("Yes\n");
      else  if (x > 100) {
            if(x == 105)
                printf("X is equel 105\n");
          printf("X is greater 100\n");
          
        } else if(x < 5)
            printf("X is less than 5\n");
            else
    printf("No\n");
    
    bool isHasCar = true;
    if(isHasCar == true) // if(isHasCar) это аналогичная запись
    // if(isHasCar == false)  так же аналогично if(!isHisCar)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
