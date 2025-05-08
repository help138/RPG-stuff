//may be probmatic. 
#pragma once 

#ifndef ASCII_VAL
  #define ASCII_VAL_TAB 0x9
  #define ASCII_VAL_AND 0x26
  #define ASCII_VAL_STAR 0x2A
  #define ASCII_VAL_PLUS 0x2B
  #define ASCII_VAL_TACK 0x2D
  #define ASCII_VAL_SPACE 0x20
  #define ASCII_VAL_QUOTE 0x27
  #define ASCII_VAL_COMMA 0x2C
  #define ASCII_VAL_SLASH 0x2F
  #define ASCII_VAL_PERIOD 0x2E
  #define ASCII_VAL_NEWLINE 0xA
  #define ASCII_VAL_PERCENT 0x25
  #define ASCII_VAL_BACKSLASH 0x5C
  #define ASCII_VAL_DOLLARSIGN 0x24
  #define ASCII_VAL_EXCLAMATION 0x21
  #define ASCII_VAL_DOUBLEQUOTE 0x22
  #define ASCII_VAL_OPENBRACKET 0x28
  #define ASCII_VAL_CLOSEDBRAKET 0x29
  #define ASCII_VAL_EQUALS 0x2E
  #define ASCII_VAL_GREATERTHAN 0x2E
  #define ASCII_VAL_LESSTHAN 0x2E
  #define ASCII_VAL_PERIOD 0x2E


  enum ASCII_VAL{
  shift = 32,
  a = 65, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z,
  zero = 48, one, two, three, four, five, six, seven, eight, nine,
  };
#endif

typedef struct {
  unsigned int len; //number of elements
  int size; //size of each element in bytes
  void* mem; //the arr itself
} boundArr;

int checkbound(boundArr arr, unsigned int index){
  if(arr.len <= index) return 1;
  return 0;
}

