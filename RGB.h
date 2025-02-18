#ifndef RGB_H
#define RGB_H

#include "defs.h"

class RGB {
private:
    int r; // Red 
    int g; // Green 
    int b; // Blue 

    // Helper function 
    int ensureValidRange(int value);

public:
    // Constructors
    RGB();    


    RGB(int red, int green, int blue); 
    RGB(CuColour colour);         

    // Get methods
    int getR() const;                    
    int getG() const;                    
    int getB() const;                    
    CuColour getColour();          

    // Set methods
    void setR(int red);             
    void setG(int green);    

    void setB(int blue);  

    void setColour(CuColour colour); 

    // Static functions
    static RGB WHITE();

    static RGB BLACK();static RGB RED();

    static RGB GREEN();
    static RGB BLUE();
};

#endif
