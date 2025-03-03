#include <stdio.h>

int max_activities(int X) {
    int activities[] = {1, 2, 4};
    int count = 0;
    
    // Iterate through the activity durations
    for (int i = 0; i < 3; i++) {
        if (X >= activities[i]) {
            X -= activities[i];
            count++;
        } else {
            break;
        }
    }
    
    return count;
}

int main() {
    int X;
    
    scanf("%d", &X);
    
    printf("%d\n", max_activities(X));
    
    return 0;
}
