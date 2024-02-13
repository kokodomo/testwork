#include <stdio.h>

int getValue(char symbol) {
    switch (symbol) {
        case 'A': return 1;
        case 'B': return 5;
        case 'Z': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'R': return 1000;
        default: return 0;
    }
}

int alienToInteger(char alien[]) {
    int re = 0;
    
    for (int i = 0; alien[i] != '\0'; i++) {
        int current = getValue(alien[i]);
        int next = getValue(alien[i + 1]);
        
        if (next > current) {
            re += (next - current);
            i++; 
        } else {
            re += current;
        }
    }

    return 	re;
}

int main() {
    char alien[100];

    printf("Enter an Alien : ");
    scanf("%s", alien);

    int sumALL = alienToInteger(alien);

    printf("The sum is : %d\n", sumALL);

    return 0;
}