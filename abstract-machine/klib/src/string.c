#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
<<<<<<< HEAD
  size_t i = 0;
  for (; s[i]; i ++) ;
  return i;
}

char *strcpy(char *dst, const char *src) {
  assert(dst != NULL);
  size_t i = 0;
  while (*(src + i)) {
    *(dst + i) = *(src + i);
    i ++;
  }
  *(dst + i) = '\0';
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  assert(dst != NULL);
  size_t i = 0;
  for (; i < n; i ++) {
    if (*(src + i) == '\0') break;
    *(dst + i) = *(src + i);
  }
  *(dst + i) = '\0';
  return dst;
}

char *strcat(char *dst, const char *src) {
  assert(dst != NULL);
  size_t base = strlen(dst), i = 0;
  while (*(src + i)) {
    *(dst + base + i) = *(src + i);
    i ++;
  }
  *(dst + base + i) = '\0';
=======
  size_t ans = 0;
  while (*s++ != '\0'){
    ans ++;
  }
  return ans;
}

char *strcpy(char *dst, const char *src) {
  if(dst == NULL){
    return NULL;
  }
  char * ptr = dst;
  while(*src != '\0'){
    *dst = *src;
    dst ++;
    src ++;
  }
  *dst = '\0';
  return ptr;
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
  /*if(dst == NULL){
    return NULL;
  }
  char * ptr = dst;
  while(*src && n--){
    *dst = *src;
    dst ++;
    src ++;
  }
  *dst = '\0';
  return ptr;*/
}

char *strcat(char *dst, const char *src) {
  int i, j;
  for(i = 0; dst[i] != '\0'; i ++);
  for(j = 0; src[j] != '\0'; j ++){
    dst[i + j] = src[j];
  }
  dst[i + j] = '\0';
>>>>>>> temp
  return dst;
}

int strcmp(const char *s1, const char *s2) {
<<<<<<< HEAD
  size_t i = 0;
  for(; *(s1 + i) && *(s2 + i); i ++) {
    if (*(s1 + i) != *(s2 + i)) break;
  }
  return *((unsigned char*)s1 + i) - *((unsigned char*)s2 + i);
=======
  while(*s1){
    if(*s1 != *s2){
      break;
    }
    /*if(*s1 == '\0'){
      return 0;
    }*/
    s1 ++;
    s2 ++;
  }
  return *s1 - *s2;
>>>>>>> temp
}

int strncmp(const char *s1, const char *s2, size_t n) {
  size_t i = 0;
  for(; *(s1 + i) && *(s2 + i) && i < n; i ++) {
    if (*(s1 + i) != *(s2 + i)) break;
  }
  return *((unsigned char*)s1 + i) - *((unsigned char*)s2 + i);
}

void *memset(void *s, int c, size_t n) {
<<<<<<< HEAD
  assert(s != NULL);
  for (size_t i = 0; i < n; i ++) {
    *((char*)s + i) = c;
  }
  return s; 
=======
  /*char * chars = (char *) s;
  while(n-- > 0){
    if(*chars != '\0'){
      *chars++ = c;
    }
  }
  return s;*/
  unsigned char *p = (unsigned char *)s;
  for(size_t i = 0; i < n; i = i + 1){
    *(p + i) = c;
  }
  return s;
>>>>>>> temp
}

void *memmove(void *dst, const void *src, size_t n) {
  assert(dst != NULL);
  for (size_t i = n; i; i --) {
    *((char*)dst + i - 1) = *((char*)src + i - 1);
  }
  return dst;
}

<<<<<<< HEAD
void *memcpy(void *dst, const void *src, size_t n) {
  assert(dst != NULL);
  for (size_t i = 0; i < n; i ++) {
    *((char*)dst + i) = *((char*)src + i);
  }
  return dst;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  for (size_t i = 0; (*((char*)s1 + i) && *((char*)s2 + i)) && i < n; i ++) {
    if (*((char*)s1 + i) != *((char*)s2 + i)) break;
  }
  return *(unsigned char*)s1 - *(unsigned char*)s2;
=======
void *memcpy(void *out, const void *in, size_t n) {
  char* charin = (char* ) in;
  char* charout = (char* ) out;
  while(n--)
  {
    *charout++ = *charin++;
  }
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  char* chars1 = (char*) s1;
  char* chars2 = (char*) s2;
  while(n-- > 0){
    if(*chars1 == *chars2){
      chars1 ++;
      chars2 ++;
    }
    else
    {
      return *chars1 - *chars2;
    }
  }
  return 0;
>>>>>>> temp
}

#endif
