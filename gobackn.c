#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define TOTAL_FRAMES 10
#define WINDOW_SIZE 4
#define LOSS_PROB 30  // Probability (in %) that ACK is lost

int main() {
    srand(time(0));
    int base = 0;
    int nextseq = 0;

    while (base < TOTAL_FRAMES) {
        // Send frames within the window
        while (nextseq < base + WINDOW_SIZE && nextseq < TOTAL_FRAMES) {
            printf("Sender: Sending frame %d\n", nextseq);
            nextseq++;
        }

        // Process ACKs
        for (int i = base; i < nextseq; i++) {
            if (rand() % 100 < LOSS_PROB) {
                printf("Receiver: ACK lost for frame %d. Resending from frame %d...\n", i, i);
                nextseq = base = i;
                break;
            } else {
                printf("Receiver: ACK received for frame %d\n", i);
                base++;
            }
        }

        // Optional: Sleep to simulate delay
        // usleep(500000); // 500ms delay
    }

    printf("All packets sent and acknowledged.\n");
    return 0;
}
