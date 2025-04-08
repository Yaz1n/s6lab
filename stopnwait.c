#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

#define TOTAL_PACKETS 6
#define LOSS_PROB 20
#define TIMEOUT 3

int main()
{ 
  srand(time(0));

  int packet=1;
  while(packet<=TOTAL_PACKETS)
  {
    printf("Sender:Sending packet %d\n",packet);

    if(rand()%100 > LOSS_PROB)
    {
      printf("Reciever:ACK for packet %d recieved\n\n",packet);
      packet++;
    }

    else
    {
      printf("Reciever:ACK lost for packet %d.Retransmitting...\n\n",packet);
      sleep(TIMEOUT);
    }
  }

  printf("All packets send and acknowledged successfully\n");
  return 0;
}

