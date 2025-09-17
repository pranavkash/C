#include <stdio.h>
int main() {
    int i=1;
    printf("Hello\n");
    goto label;
    for(int i=4;i<10;i++){// label makes jump to i++ but this scope i is not initialized as jumped directly so i contains garbage value so behavior is unknown. generaly garbage is large value so loop condition mostly fails.
        int i=5;
        printf("%d ",i++);
        label:
    }
    return 0;
}