#ifndef SAVE_H
#define SAVE_H

#define STB_IMAGE_WRITE_IMPLEMENTATION
//#include <stb_image_write.h>
#include <stdexcept>
#include <string>
#include <vector>

void SaveImg(std::string filename, std::vector<char> image, int width, int height);

#endif //SAVE_H