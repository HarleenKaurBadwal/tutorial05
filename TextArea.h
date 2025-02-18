#ifndef TEXTAREA_H
#define TEXTAREA_H

#include <string>
#include <iostream>
#include "RGB.h"
#include "defs.h"

class TextArea {
private:
    Rectangle rect;
    std::string id;
    
    std::string text;
    RGB fill;
    RGB border;

public:
    // Constructors
    TextArea(); 

    TextArea(int x, int y, int width, int height, const std::string& id, const std::string& text, const RGB& fill = RGB::WHITE(), const RGB& border = RGB::BLACK());

    TextArea(const Rectangle& rect, const std::string& id, const std::string& text, const RGB& fill = RGB::WHITE(), const RGB& border = RGB::BLACK());

    TextArea(const TextArea& other); 

    // Get methods
    Rectangle getRectangle() const;

    std::string getId() const;

    std::string getText() const;

    RGB getFill() const;
    RGB getBorder() const;

    // Set methods
    void setFill(const RGB& fillColor);

    void setBorder(const RGB& borderColor);

    void setText(const std::string& newText);

    bool overlaps(const TextArea& other) const;

    void print() const;
};

#endif
