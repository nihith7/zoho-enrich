#include <stdio.h>
#include <unistd.h>
int main()
 {
    int i = 0;
    char str[20] = "HAPPY PONGAL";
while (str[i] != '\0') 
{
  putchar(str[i]);
  usleep(100000);
  i++;
}
    return 0;
}
