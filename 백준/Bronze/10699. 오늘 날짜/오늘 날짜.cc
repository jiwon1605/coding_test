#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void){
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer); 
    
    printf("2025-03-20");
  
    return 0;
}