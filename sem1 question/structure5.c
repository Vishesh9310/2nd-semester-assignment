//write a program to show programming examples with union and enumerations

#include <stdio.h>

// Enumeration for different shapes
enum ShapeType {
    CIRCLE,
    SQUARE,
    TRIANGLE
};

// Union to represent different shapes and their attributes
union Shape {
    double radius;   // For circle
    double sideLength;  // For square
    double base;      // For triangle
    double height;    // For triangle
};

// Structure to combine shape type and shape attributes
struct ShapeInfo {
    enum ShapeType type;
    union Shape attributes;
};

int main() {
    // Example 1: Creating a circle
    struct ShapeInfo circleInfo;
    circleInfo.type = CIRCLE;
    circleInfo.attributes.radius = 5.0;

    // Example 2: Creating a square
    struct ShapeInfo squareInfo;
    squareInfo.type = SQUARE;
    squareInfo.attributes.sideLength = 4.0;

    // Example 3: Creating a triangle
    struct ShapeInfo triangleInfo;
    triangleInfo.type = TRIANGLE;
    triangleInfo.attributes.base = 3.0;
    triangleInfo.attributes.height = 6.0;

    // Displaying information about shapes
    printf("Circle - Radius: %.2f\n", circleInfo.attributes.radius);
    printf("Square - Side Length: %.2f\n", squareInfo.attributes.sideLength);
    printf("Triangle - Base: %.2f, Height: %.2f\n", triangleInfo.attributes.base, triangleInfo.attributes.height);

    return 0;
}
