/**
 * @file main.cpp
 * @author Siddharth Chenrayan and Jack Gladowsky
 * @brief Entrypoint for the project mitosis stl parser and (eventually) slicer.
 * @version 0.1
 * @date 2023-01-30
 * 
 */

#include <iostream>
#include <fstream>
#include <string>

/**
 * 1. Open STL file
 * 2. Read the STL file
 *  UINT8[80]    – Header                 -     80 bytes
    UINT32       – Number of triangles    -      4 bytes
    foreach triangle                      - 50 bytes:
        REAL32[3] – Normal vector             - 12 bytes
        REAL32[3] – Vertex 1                  - 12 bytes
        REAL32[3] – Vertex 2                  - 12 bytes
        REAL32[3] – Vertex 3                  - 12 bytes
        UINT16    – Attribute byte count      -  2 bytes
    end
    3. Write each triangle to a .txt file
*/

struct Facet {
    float normal[3];
    float v1[3];
    float v2[3];
    float v3[3];
};


int main() {

    // open the binary STL file
    std::ifstream STL_FILE ("../files/Smooth Sango-Hango.stl");

    // create .txt file to write to
    std::ofstream TXT_FILE ("../files/triangles.txt");

    // read the STL file by character
    if (STL_FILE.is_open()) {
        char myChar;

        while (STL_FILE) {
            myChar = STL_FILE.get();

            TXT_FILE << myChar;
        }

    }
}
