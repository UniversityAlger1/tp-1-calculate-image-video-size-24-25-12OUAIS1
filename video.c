#include <string.h>
#include "config/video.h"
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* u) {
   int totalFramesMovie = fps * durationMovie;
   int totalFramesCredits = fps * durationCredits;
   int sizePerFrameColored = w * h * 24;     
   int sizePerFrameGray = w * h * 8;          
   long long totalBitsMovie = (long long)totalFramesMovie * sizePerFrameColored;
   long long totalBitsCredits = (long long)totalFramesCredits * sizePerFrameGray;
   long long totalBits = totalBitsMovie + totalBitsCredits; 
   if (strcmp(u, "bt") == 0) {
       return (float)totalBits; 
   } else if (strcmp(u, "ko") == 0) {
       return (float)totalBits / (8 * 1024); 
   } else if (strcmp(u, "mo") == 0) {
       return (float)totalBits / (8 * 1024 * 1024);
   } else if (strcmp(u, "go") == 0) {
       return (float)totalBits / (8 * 1024 * 1024 * 1024); 
   }
   return 0;
}
