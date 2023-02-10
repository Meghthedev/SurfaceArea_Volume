#include <math.h>

// Define all surface area and volume formulas so they can be calculated
double surface_area_cube(double side) {
    return 6 * side * side;
}

double volume_cube(double side) {
    return side * side * side;
}

double surface_area_sphere(double radius) {
    return 4 * M_PI * radius * radius;
}

double volume_sphere(double radius) {
    return (4.0 / 3.0) * M_PI * radius * radius * radius;
}

double surface_area_cylinder(double radius, double height) {
    return (2 * M_PI * radius * height) + (2 * M_PI * radius * radius);
}

double volume_cylinder(double radius, double height) {
    return M_PI * radius * radius * height;
}

double surface_area_cuboid(double length, double width, double height) {
    return 2 * (length * width + width * height + height * length);
}

double volume_cuboid(double length, double width, double height) {
    return length * width * height;
}

double surface_area_cone(double radius, double height) {
    return M_PI * radius * (radius + sqrt(height * height + radius * radius));
}

double volume_cone(double radius, double height) {
    return (1.0 / 3.0) * M_PI * radius * radius * height;
}

double surface_area_hemisphere(double radius) {
    return 3 * M_PI * radius * radius;
}

double volume_hemisphere(double radius) {
    return (2.0 / 3.0) * M_PI * radius * radius * radius;
}

double surface_area_frustum(double radius1, double radius2, double height) {
    return M_PI * (radius1 + radius2) * sqrt(height * height + (radius2 - radius1) * (radius2 - radius1));
}

double volume_frustum(double radius1, double radius2, double height) {
    return (1.0 / 3.0) * M_PI * height * (radius1 * radius1 + radius2 * radius2 + radius1 * radius2);
}
