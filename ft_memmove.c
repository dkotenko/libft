#include <string.h>

void * Memmove(void* dst, const void* src, unsigned int cnt)
{
 
 char *tmp = NULL;
 
 unsigned int uiLoop = 0;
 
 char *pszDest = (char *)dst;
 
 const char *pszSource =( const char*)src;
 
 //allocate memory for tmp array
 tmp = (char *)malloc(sizeof(char ) * cnt);
 if(NULL == tmp)
 {
 return NULL;
 }
 else
 {
 // copy src to tmp array
 for(uiLoop =0;uiLoop < cnt ; ++uiLoop)
 {
 *(tmp + uiLoop) = *(pszSource + uiLoop);
 }
 
 //copy tmp to dst
 for(uiLoop =0 ;uiLoop < cnt ; ++uiLoop)
 {
 *(pszDest + uiLoop) = *(tmp + uiLoop);
 }
 
 free(tmp); //free allocated memory
 }
  
 return dst;
}
	