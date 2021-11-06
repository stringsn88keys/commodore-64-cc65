// /opt/homebrew/Cellar/cc65/2.19/share/cc65/include

#include <stdlib.h>
#include <vic20.h>

#define XOFST 10
#define YOFST 12
#define XPX 22
#define YPX 23

//#define XSCLE (XPX/640.0f)
#define YSCLE 10

// https://github.com/mrdudz/cc65-floatlib/blob/master/float.h

void plot(int x, int y, char c, char color) {
  char *char_ptr = (char *) 7680 + y * 22 + x;
  char *color_ptr = (char *) 38400U + y * 22 + x;

  *color_ptr = color;
  *char_ptr = c;
}

int main(int _argc, char **_argv) {
//  const float xscle=((float)XPX)/640.0f;
//  const int x_limit = (int) ((XPX-1) / XSCLE);
  int x;
  int y;
  char *upper_lower=(char*)53272U;
  (*upper_lower)=21;
  for(x=0; x <= XPX; x++) {
    plot(x,YOFST,(char)'Q', (char)5);
  }
  for(y=0; y <= YPX; y++) {
    plot(XOFST,y,(char)'Q', (char)5);
  }
  return EXIT_SUCCESS;
}
