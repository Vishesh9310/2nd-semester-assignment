//pass the structures defined in question 1 into a function and read
//the structure member and display the values from the function(use structure pointer).

#include <stdio.h>
#include <math.h>

// Define a structure for Cartesian coordinates
struct Point {
    float x;
    float y;
};

// Function to calculate the distance between two points
float calculateDistance(const struct Point *c1, const struct Point *c2) {
   // return sqrt(pow(p2->x - p1->x, 2) + pow(p2->y - p1->y, 2));
   //return sqrt(pow(c2->x - c1->x, 2) + pow(c2->y - c1->y, 2));
  // return sqrt(pow(c2.x - c1.x, 2) + pow(c2.y - c1.y, 2));
     float p=((c2->x-c1->x)*(c2->x-c1->x))+((c2->y-c1->y)*(c2->y-c1->y));
     return sqrt(p);
}

int main() {
    // Declare two points using the structure
    struct Point c1;
    struct Point c2;

    // Read coordinates for point1
    printf("Enter coordinates for Point 1 (x y): ");
    scanf("%f %f", &c1.x, &c1.y);

    // Read coordinates for point2
    printf("Enter coordinates for Point 2 (x y): ");
    scanf("%f %f", &c2.x, &c2.y);

    // Calculate and display the distance between the points using the function
    printf("Distance between Point 1 and Point 2: %.2f\n", calculateDistance(&c1, &c2));

    return 0;
}
