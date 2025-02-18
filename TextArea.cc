#include "TextArea.h"

//constructors
TextArea::TextArea() : rect{0, 0, 100, 50}, id("default"), text(""), fill(RGB::WHITE()), border(RGB::BLACK()) {}

// Constructor with explicit values
TextArea::TextArea(int x, int y, int width, int height, const std::string& id, const std::string& text, const RGB& fill, const RGB& border)

    : rect{x, y, width, height}, id(id), text(text), fill(fill), border(border) {}

// Constructor with a Rectangle object
TextArea::TextArea(const Rectangle& rect, const std::string& id, const std::string& text, const RGB& fill, const RGB& border)

    : rect(rect), id(id), text(text), fill(fill), border(border) {}

// Copy constructor
TextArea::TextArea(const TextArea& other)
    : rect(other.rect), id(other.id), text("DUPLICATE"), fill(other.fill), border(other.border) {}

// Getters
Rectangle TextArea::getRectangle() const {
    
    return rect;
}

std::string TextArea::getId() const {

    return id;
}

std::string TextArea::getText() const {
    return text;
}

RGB TextArea::getFill() const {

    return fill;
}

RGB TextArea::getBorder() const {
    return border;
}

// Set methods
void TextArea::setFill(const RGB& fillColor) {
    fill = fillColor;
}
void TextArea::setBorder(const RGB& borderColor) {
    border = borderColor;
}
void TextArea::setText(const std::string& newText) {

    text = newText;
}

// are the two text areas overlapping
bool TextArea::overlaps(const TextArea& other) const {

    return rect.overlaps(other.rect);
}

// The printing function
void TextArea::print() const {

    std::cout << "TextArea ID: " << id

              << "\nPreferred location: " << rect.x << ", " << rect.y

              << "\nSize: " << rect.width << ", " << rect.height

              << "\nText:\n" << text << "\n"

              << "Fill Color: (" << fill.getR() << ", " << fill.getG() << ", " << fill.getB() << ")\n"

              << "Border Color: (" << border.getR() << ", " << border.getG() << ", " << border.getB() << ")\n";
}
