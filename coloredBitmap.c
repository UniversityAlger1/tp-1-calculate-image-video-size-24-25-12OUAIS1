#include <string.h>
#include "config/coloredBitmap.h"
float coloredBitmap(int w, int h, char* u) {
   int totalPixels = w * h;
   int totalBits = totalPixels * 24;
   if (strcmp(u, "bt") == 0) {
       return totalBits; 
   } else if (strcmp(u, "ko") == 0) {
       return (float)totalBits / (8 * 1024);
   } else if (strcmp(u, "mo") == 0) {
       return (float)totalBits / (8 * 1024 * 1024);
   } else if (strcmp(u, "go") == 0) {
       return (float)totalBits / (8 * 1024 * 1024 * 1024); 
   }
   return 0;
}

