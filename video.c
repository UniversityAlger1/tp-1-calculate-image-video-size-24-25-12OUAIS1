#include <string.h>
#include <stdio.h>
#include "config/video.h"
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
    
    float bitsPerPixel = 24;

    float clrImage = w * h * bitsPerPixel * durationMovie * fps;
    float BImage = w * h * durationCredits * fps;
    float sizeInBits = clrImage + BImage; 
    float size;
    if (strcmp(unit, "bt") == 0) {
        size = sizeInBits; 
    } else if (strcmp(unit, "ko") == 0) {
        size = sizeInBits / (1024); 
    } else if (strcmp(unit, "mo") == 0) {
        size = sizeInBits / (1024 * 1024); 
    } else if (strcmp(unit, "go") == 0) {
        size = sizeInBits / (1024 * 1024 * 1024); 
    } else {
    
        return -1.0f;
    }

    return size / 8;
}
