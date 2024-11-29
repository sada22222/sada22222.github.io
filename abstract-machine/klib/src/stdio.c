#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

<<<<<<< HEAD
// int vsprintf(char *out, const char *fmt, va_list ap) {
//     int p = 0;
//     bool isSubstitute = 0;
//     char fillChar = '\0';
//     int  fillWidth = 0;
//     for (int i = 0; fmt[i]; i ++) {
//         if (isSubstitute) {
//             if (fmt[i] == '0' && fillChar == '\0') {
//                 fillChar = fmt[i];
//                 continue;
//             }
//             if (fmt[i] >= '0' && fmt[i] <= '9' && fillChar != '\0') {
//                 fillWidth = fmt[i] - '0';
//                 continue;
//             }
=======
#define BITMASK(bits) ((1ull << (bits)) - 1)
#define BITS(x, hi, lo) (((x) >> (lo)) & BITMASK((hi) - (lo) + 1))

char BITSLookUp(int val){
  switch(val){
    case 0 : return '0';
    case 1 : return '1';
    case 2 : return '2';
    case 3 : return '3';
    case 4 : return '4';
    case 5 : return '5';
    case 6 : return '6';
    case 7 : return '7';
    case 8 : return '8';
    case 9 : return '9';
    case 10: return 'a';
    case 11: return 'b';
    case 12: return 'c';
    case 13: return 'd';
    case 14: return 'e';
    case 15: return 'f';
  }
  return 'N';
}

int printf(const char *fmt, ...) {
  va_list args;
  va_start(args, *fmt);
  while(*fmt != '\0'){
    if(*fmt == '%'){
      fmt ++;
      switch(*fmt){
        case 's':
          char* printCharPtr = va_arg(args, char*);
          while(*printCharPtr != '\0'){
            putch(*printCharPtr);
            printCharPtr ++;
          }
          break;
        case 'd':
          int64_t printIntVal = va_arg(args, int);
          char printInt[21] = {};
          itoa(printIntVal, printInt, 10);
          int di = 0;
          while(printInt[di] != '\0'){
            putch(printInt[di]);
            di ++;
          }
          break;
        case 'p':
        case 'x':
          int64_t printIntHexVal = va_arg(args, int);
          for(int i = 15; i >= 0; i = i - 1){
            putch(BITSLookUp(BITS(printIntHexVal, 4 * i + 3, 4 * i)));
          }
          break;
        case 'o':
          int64_t printIntOctVal = va_arg(args, int);
          for(int i = 22; i >= 0; i = i - 1){
            putch(BITSLookUp(BITS(printIntOctVal, 3 * i + 2, 3 * i)));
          }
          break;
      }
      fmt ++;
    }
    putch(*fmt);
    fmt ++;
  }
  va_end(args);
  return 0;
  //panic("Not implemented");
}
>>>>>>> temp

//             switch (fmt[i]) {
//                 case 's': {
//                     char *s = va_arg(ap, char*);
//                     while(*s) {
//                         out[p ++] = *s, s ++;
//                     }
//                 } break;
//                 case 'd': {
//                     int d = va_arg(ap, int);
//                     if (d < 0) {
//                         d = -d;
//                         out[p ++] = '-';
//                     }
//                     char s[64];
//                     int wid = 0;

//                     do {
//                         s[wid ++] = '0' + d % 10;
//                         d /= 10;
//                     } while(d);

//                     while (wid < fillWidth) {
//                         out[p ++] = fillChar;
//                         fillWidth --;
//                     }
//                     for ( wid --; wid >= 0; wid --) {
//                         out[p ++] = s[wid];
//                     }
//                 } break;
//                 case 'c': {
//                     char ch = va_arg(ap, int);
//                     out[p ++] = ch;
//                 } break;
//             }
//             isSubstitute = 0;
//             fillChar = '\0';
//             fillWidth = 0;
//             continue;
//         }

//         if (fmt[i] == '%') {
//             isSubstitute = 1;
//             continue;
//         }
//         else {
//             out[p ++] = fmt[i];
//         }
//     }

//     out[p] = '\0';
//     return p;
// }

// int printf(const char *fmt, ...) {
//     va_list ap;
//     va_start(ap, fmt); // ap's address start from (&fmt)
//     char buffer[4096];
//     int len = vsprintf(buffer, fmt, ap);
//     for (int i = 0; i < len; i ++) {
//         putch(buffer[i]);
//     }
//     va_end(ap);
//     return len;
//     return 0;
// }

// int sprintf(char *out, const char *fmt, ...) {
//     va_list ap;
//     va_start(ap, fmt); // ap's address start from (&fmt)
//     int len = vsprintf(out, fmt, ap);
//     va_end(ap);
//     return len;
// }



// int snprintf(char *out, size_t n, const char *fmt, ...) {
//   panic("Not implemented");
// }

// int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
//   panic("Not implemented");
// }

int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  char out[4096];
  int length = vsprintf(out, fmt, ap);
  for (int i = 0; i < length; i++) {
    putch(out[i]);
  }
  va_end(ap);
  return length;
}

int sprintf(char *out, const char *fmt, ...) {
<<<<<<< HEAD
  va_list ap;
  va_start(ap, fmt);
  int length = vsprintf(out, fmt, ap);
  va_end(ap);
  return length;
=======
  char* charout = (char *) out;
  va_list args;
  va_start(args, *fmt);
  while(*fmt != '\0'){
    if(*fmt == '%'){
      fmt++;
      switch(*fmt){
        case 's':
          char * processChar = va_arg(args, char *);
          memcpy(charout, processChar, strlen(processChar));
          charout += strlen(processChar);
          break;
        case 'd':
          char processDecimal[8] = {};
          int processVal = va_arg(args, int);
          itoa(processVal, processDecimal, 10);
          memcpy(charout, processDecimal, strlen(processDecimal));
          charout += strlen(processDecimal);
          break;
        default: break;
      }
    }
    else{
      *charout = *fmt;
      charout ++;
    }
    fmt++;
  }
  va_end(args);
  *charout = '\0';
  return 0;
  //panic("Not implemented");
>>>>>>> temp
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int length = vsnprintf(out, n, fmt, ap);
  va_end(ap);
  return length;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  return vsnprintf(out, -1, fmt, ap);
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  int pos = 0;

  for (; *fmt != '\0'; fmt++) {
    while (*fmt != '%' && *fmt != '\0') {
      out[pos++] = *fmt++;
      if (pos > n) {
        return n;
      }
    }

    if (*fmt == '%') {
      fmt++;
    }
    else if (*fmt == '\0') {
      break;
    }

    char padding = ' ';
    if (*fmt == '0') {
      padding = '0';
      fmt++;
    }

    int width = 0;
    while (*fmt >= '0' && *fmt <= '9') {
      width = width * 10 + *fmt++ - '0';
    }

    switch (*fmt) {
      case 's': {
        char *s = va_arg(ap, char *);
        while (*s != '\0') {
          out[pos++] = *s++;
          if (pos > n) {
            return n;
          }
        }
        break;
      }
      case 'd': {
        int d = va_arg(ap, int);
        if (d < 0) {
            d = -d;
            out[pos++] = '-';
            if (pos > n) {
              return n;
            }
        }
        char num[20] = {0};
        int rem = 0;
        int length = 0;

        do {
          rem = d % 10;
          d = d / 10;
          num[length++] = rem + '0';
        } while (d > 0);

        while (length < width) {
          out[pos++] = padding;
          width--;
          if (pos > n) {
            return n;
          }
        }

        length--;
        for (; length >= 0; length--) {
          out[pos++] = num[length];
          if (pos > n) {
              return n;
          }
        }
        break;
      }
      case 'p':
      case 'x': {
          uint32_t d = va_arg(ap, uint32_t);
          char num[20] = {0};
          int rem = 0;
          int length = 0;

          do {
            rem = d % 16;
            d = d / 16;
            if (rem <= 9) {
              num[length++] = rem + '0';
            }
            else {
              num[length++] = rem - 10 + 'a';
            }
          } while (d > 0);

          while (length < width) {
            out[pos++] = padding;
            width--;
            if (pos > n) {
              return n;
            }
          }

          out[pos++] = '0';
          if (pos > n) {
            return n;
          }

          out[pos++] = 'x';
          if (pos > n) {
            return n;
          }

          length--;
          for (; length >= 0; length--) {
            out[pos++] = num[length];
            if (pos > n) {
              return n;
            }
          }
          break;
        }
      }
    }

  if (pos > n) {
    return n;
  }

  out[pos] = '\0';
  return pos;
}

#endif
