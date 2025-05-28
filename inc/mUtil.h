
#ifndef ASCII_VAL_h
  #define ASCII_VAL_h
  // TODO check
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
  #define ASCII_VAL_GREATERTHAN 0x3C
  #define ASCII_VAL_LESSTHAN 0x3E
  #define ASCII_VAL_QUESTION 0x3F
  #define ASCII_VAL_COLEN 0x3A
  #define ASCII_VAL_SEMICOLEN 0x3B
  #define ASCII_VAL_CARET 0x5E
  #define ASCII_VAL_DEL 0x7F
  #define ASCII_VAL_TILDE 0x7E
  #define ASCII_VAL_BACKTICK 0x60
  #define ASCII_VAL_OPENCURLYBRACE
  #define ASCII_VAL_CLOSECURLYBRACE


  enum ASCII_VAL{
    NULL_CHAR = 0, SOH, STX, ETX, EOT, ENQ, ACK, BEL, BACKSPACE, TAB, LF, VT, FF, CR, SO, SI, 
      DLE, DC1, DC2, DC3, DC4, NAK, SYN, ETB, CAN, EM, SUB, ESC, FS, GS, RS, US, 
    zero = 48, one, two, three, four, five, six, seven, eight, nine,
    A = 65, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z,
    a = 97, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z,
  };

int charToNum(char ch){
  switch (ch){
    case zero:    return 0;
    case one:     return 1;
    case two:     return 2;
    case three:   return 3;
    case four:    return 4;
    case five:    return 5;
    case six:     return 6;
    case seven:   return 7;
    case eight:   return 8;
    case nine:    return 9;
    default:      return (char)ch;
  }
}
  // TODO build the libary it self

  typedef struct {
    unsigned int len; //number of elements
    int size; //size of each element in bytes
    void* mem; //the arr itself
  } boundArr;

  void fillarrRand(int* arr, int len);
  int checkbound(boundArr arr, unsigned int index){
    if(arr.len <= index) return 1;
    return 0;
  }
#endif
