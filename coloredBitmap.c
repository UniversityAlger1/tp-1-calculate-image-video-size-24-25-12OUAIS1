#include <string.h>
#include "config/coloredBitmap.h"


float coloredBitmap(int w, int h, char* unit) {


long totalSize = (long)w * h * 3; 

    if (strcmp(unit, "bt") == 0) return totalSize;                  
    if (strcmp(unit, "ko") == 0) return totalSize / 1024.0;             
    if (strcmp(unit, "mo") == 0) return totalSize / (1024.0 * 1024);    
    if (strcmp(unit, "go") == 0) return totalSize / (1024.0 * 1024 * 1024);

    

   return 0;
}