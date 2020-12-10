#define STB_IMAGE_WRITE_IMPLEMENTATION
#include <stb_image_write.h>
#include <stdexcept>
#include <string>
#include <vector>

#include "Save.h"

void SaveImg(std::string filename, std::vector<char> image, int width, int height)
{
    if (filename.substr(filename.find_last_of(".") + 1) != "bmp") {
    throw std::runtime_error(
        "Drawing ne supporte que l'enregistrement d'images au format bmp");
  }
  stbi_write_bmp(filename.c_str(), width, height, 1, image.data());
}