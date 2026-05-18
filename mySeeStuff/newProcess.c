// WTF COMMENT THE ELSE CONDITON and the program does not terminate with control C ... LOL WHAT!!!
#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        while(1) {
            printf("child\n");
        }
    }
    else {
        while(1) {
            printf("yolo\n");
            // sleep(1);
        }
    }

    return 0;
}