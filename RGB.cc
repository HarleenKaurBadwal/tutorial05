#include "RGB.h"

// Helper function
int RGB::ensureValidRange(int value) {

    if (value < 0) return 0;

    if (value > 255) return 255;
    return value;

}

// Default constructor
RGB::RGB() : r(0), g(0), b(0) {

}


// Constructor
RGB::RGB(int red, int green, int blue) {

    r = ensureValidRange(red);
    g = ensureValidRange(green);

    b = ensureValidRange(blue);
}

// Constructor with CuColour value
RGB::RGB(CuColour colour) {
    r = ensureValidRange((colour >> 16) & 0xFF); 

    g = ensureValidRange((colour >> 8) & 0xFF);

    b = ensureValidRange(colour & 0xFF);       
}

// Get mehthods
int RGB::getR() const {

    return r; 
}

int RGB::getG() const {
    return g;


}

int RGB::getB() const {

    return b;
}

CuColour RGB::getColour() {

    return ((r & 0xFF) << 16) | ((g & 0xFF) << 8) | (b & 0xFF);
}

// Set methodsj
void RGB::setR(int red) {

    r = ensureValidRange(red);
}

void RGB::setG(int green) {

    g = ensureValidRange(green);
}void RGB::setB(int blue) {
    b = ensureValidRange(blue);
}

void RGB::setColour(CuColour colour) {
    r = ensureValidRange((colour >> 16) & 0xFF);g = ensureValidRange((colour >> 8) & 0xFF);
    b = ensureValidRange(colour & 0xFF);
}

// Static functions
RGB RGB::WHITE() {
    return RGB(255, 255, 255);
}
RGB RGB::BLACK() {
    return RGB(0, 0, 0);}
RGB RGB::RED() {
    return RGB(255, 0, 0);
}

RGB RGB::GREEN() {
    return RGB(0, 255, 0);
}
RGB RGB::BLUE() {
    return RGB(0, 0, 255);
}
