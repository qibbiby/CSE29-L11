#include <stdint.h>
#include <stdio.h>

int main() {
                    //      H     e     l     l     o     !  \0
  uint8_t hello8[] =   { 0x48, 0x65, 0x6c, 0x6c, 0x6f, 0x21,  0 };
  uint32_t hello32[] = { 0x48, 0x65, 0x6c, 0x6c, 0x6f, 0x21,  0 };
  uint32_t hello32_explicit[] = { 0x00000048, 0x65, 0x6c, 0x6c, 0x6f, 0x21,  0 };

  uint8_t* h2 = (uint8_t*)hello32;

  printf("%s\n", hello8);
  printf("%s\n", hello32);
  printf("%s\n", hello32_explicit);

  printf("%x %x %x %x %x %x\n", h2[0], h2[1], h2[2], h2[3], h2[4], h2[5]);
  printf("%c %c %c %c %c %c\n", h2[0], h2[1], h2[2], h2[3], h2[4], h2[5]);
  
}
