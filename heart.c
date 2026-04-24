#include <stdio.h>
#include <math.h>
#include <windows.h> // Correct header for Windows "Sleep"

int main() {
    float x, y, size;
    
    // The "Pulse" loop
    for (size = 1.1; size >= 0.8; size -= 0.01) {
        // This clears the terminal screen nicely on Windows
        system("cls"); 
        
        for (y = 1.5; y > -1.5; y -= 0.1) {
            for (x = -1.5; x < 1.5; x += 0.05) {
                // Heart Curve Equation
                float formula = pow(x*x + y*y - size, 3) - x*x * pow(y, 3);
                
                if (formula <= 0.0) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
        
        printf("\n       Happy Birthday! <3\n");
        
        // Sleep for 50 milliseconds
        Sleep(50); 
        
        // Loop reset for infinite beating
        if (size <= 0.81) size = 1.1; 
    }

    return 0;
}