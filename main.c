#include <stdio.h>
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

// Start the main Program
int main() {
    
    int shape, option;
    double side, radius, height, radius1, radius2, length, width;

// Ask the user for the desired shape
    printf("Enter the shape you want to calculate the surface area or volume for:\n");
    printf("1. Cube\n");
    printf("2. Sphere\n");
    printf("3. Cylinder\n");
    printf("4. Cuboid\n");
    printf("5. Cone\n");
    printf("6. Hemisphere\n");
    printf("7. Frustrum of a cone\n");
    
 scanf("%d", &shape);

// Ask the user if they want surface area or volume
    printf("Enter your choice:\n");
    printf("1. Surface Area\n");
    printf("2. Volume\n");

    scanf("%d", &option);

    if (shape == 1) {
        printf("Enter the side length of the cube: ");
        scanf("%lf", &side);
        if (option == 1) {
            printf("Surface area of cube: %.2lf\n", surface_area_cube(side));
        } else if (option == 2) {
            printf("Volume of cube: %.2lf\n", volume_cube(side));
        } else {
            printf("Invalid choice. Try again.\n");
        }
    } else if (shape == 2) {
        printf("Enter the radius of the sphere: ");
        scanf("%lf", &radius);
        if (option == 1) {
            printf("Surface area of sphere: %.2lf\n", surface_area_sphere(radius));
        } else if (option == 2) {
            printf("Volume of sphere: %.2lf\n", volume_sphere(radius));
        } else {
            printf("Invalid choice. Try again.\n");
        }
    } else if (shape == 3) {
        printf("Enter the radius of the cylinder: ");
        scanf("%lf", &radius);
        printf("Enter the height of the cylinder: ");
        scanf("%lf", &height);
        if (option == 1) {
            printf("Surface area of cylinder: %.2lf\n", surface_area_cylinder(radius, height));
        } else if (option == 2) {
            printf("Volume of cylinder: %.2lf\n", volume_cylinder(radius, height));
        } else {
            printf("Invalid choice. Try again.\n");
        }
    } else if (shape == 4) {
        printf("Enter the length of the cuboid: ");
        scanf("%lf", &length);
        printf("Enter the width of the cuboid: ");
        scanf("%lf", &width);
        printf("Enter the height of the cuboid: ");
        scanf("%lf", &height);
        if (option == 1) {
            printf("Surface area of cuboid: %.2lf\n", surface_area_cuboid(length, width, height));
        } else if (option == 2) {
            printf("Volume of cuboid: %.2lf\n", volume_cuboid(length, width, height));
        } else {
            printf("Invalid choice. Try again.\n");
    }
    }   else if (shape == 5) {
        printf("Enter the radius of the cone: ");
        scanf("%lf", &radius);
        printf("Enter the height of the cone: ");
        scanf("%lf", &height);
        if (option == 1) {
            printf("Surface area of cone: %.2lf\n", surface_area_cone(radius, height));
        } else if (option == 2) {
            printf("Volume of cone: %.2lf\n", volume_cone(radius, height));
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }   else if (shape == 6) {
        printf("Enter the radius of the hemisphere: ");
        scanf("%lf", &radius);
        if (option == 1) {
            printf("Surface area of hemisphere: %.2lf\n", surface_area_hemisphere(radius));
        } else if (option == 2) {
            printf("Volume of hemisphere: %.2lf\n", volume_hemisphere(radius));
        } else {
            printf("Invalid choice. Try again.\n");
        }

    }   else if (shape == 7) {
        printf("Enter the radius of the first base of the frustum: ");
        scanf("%lf", &radius1);
        printf("Enter the radius of the second base of the frustrum: \n");
    scanf("%lf", &radius2);
        printf("Enter the height of the frustum: ");
        scanf("%lf", &height);
        if (option == 1) {
            printf("Surface area of frustum: %.2lf\n", surface_area_frustum(radius1, radius2, height));
        } else if (option == 2) {
            printf("Volume of frustum: %.2lf\n", volume_frustum(radius1, radius2, height));
        } else {
            printf("Invalid choice. Try again.\n");
        }
    } else {
        printf("Invalid shape. Try again.\n");
    }
} 
