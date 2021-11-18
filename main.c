#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[])
{
  time_t now = time(NULL) + 60 * 60 * 8; // transform to beijing time
  int wait_time = 66600 - (now % 86400);
  if (wait_time < 0)
    printf("Have a good night\n");
  else {
    printf("%d H : %d M : %d S\n", wait_time / 3600,
        (wait_time - (wait_time / 3600) * 3600) / 60,
        wait_time % 60);
    return 0;
  }
}
