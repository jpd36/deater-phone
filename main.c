/*# Jonathan Pham
 *# cs2750
 *# 03/30/18
 */

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include "func.h"
#define SIZE 200

int main(int argc, char **argv) {
    char arr[200][200];
    int sum=0;
    int x=0;
    int i;
    for(i=0; i < argc ; i++) {
    	int value;
	int k=0;
        value = atoi(argv[i]);
    if (value == 0){
        x++;
        strncpy(arr[k], argv[i], 200);
        k++;
    }
    else {
        sum += value;
    }
}
    printf("Total integers: %d\n", sum);
    int j;
    for(i=1 ; i<argc ; i++){     
        for(j=i+1 ; j<argc ; j++){
            check(argv[j], argv[i]);
	}
     }
    return 0;
}

