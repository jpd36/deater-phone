/*# Jonathan Pham
 *# cs2750
 *# 03/30/18
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void check(char *a , char *b){
    if(strstr(a,b)!=NULL){
        printf("%s is a substring of %s\n",b,a);
    }
}


