#include <stdio.h>
#include <math.h>
#include "functions.h"

// Start the main Program
int main() {
    
    int shape, option,normorcomb,optioncomb;
    double side, radius, radius1, radius2, height, height1, height2, length, width, slant_height;

printf("Do you want normal surface area and volume of 3d shape or combination of multiple 3d shapes?\n");
printf("1. Singular shape\n");
printf("2. Combination of shapes\n");
scanf("%d",&normorcomb);
if (normorcomb == 1)
{
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
    else {
    printf("Enter the Combination of shape you want to calculate the surface area and volume for:\n");
    printf("1. Cone and hemisphere\n");
    printf("2. Cylinder and Cone\n");
    printf("3. Cylinder and hemisphere\n");
    printf("4. cylinder with 2 cones\n");
    
    scanf("%d",&optioncomb);

    if (optioncomb == 1) {
        printf("Enter the radius of the cone: ");
        scanf("%lf", &radius);
        printf("Enter the height of the cone: ");
        scanf("%lf", &height);
        printf("Surface area of the cone and hemisphere: %lf\n", surface_area_cone_hemisphere(radius,height));
        printf("Volume of the cone and hemisphere: %lf\n", volume_cone_hemisphere(radius, height));
    } else if (optioncomb == 2) {
        printf("Enter the radius of the cylinder: ");
        scanf("%lf", &radius);
        printf("Enter the height of the cylinder: ");
        scanf("%lf", &height);
        printf("Enter the height of the cone: ");
        scanf("%lf", &slant_height);
        printf("Surface area of the cylinder and cone: %lf\n", surface_area_cylinder_cone(radius, height, slant_height));
        printf("Volume of the cylinder and cone: %lf\n", volume_cylinder_cone(radius, height, slant_height));
    } else if (optioncomb == 3) {
        printf("Enter the radius : ");
        scanf("%lf", &radius);
        printf("Enter the height of the cylinder: ");
        scanf("%lf", &height);
        printf("Surface area of the Cylinder and hemisphere: %lf\n", surface_area_cylinder_hemisphere(radius, height));
        printf("Volume of the cylinder and hemisphere: %lf\n", volume_cylinder_hemisphere(radius, height));
    }
     else if (optioncomb == 4) {
        printf("Enter the radius: ");
        scanf("%lf", &radius);
        printf("Enter the height of the cone 1: ");
        scanf("%lf", &height);
        printf("Enter the height of the cone 2: ");
        scanf("%lf", &slant_height);
        printf("Surface area of the cylinder and 2 cones: %lf\n", surface_area_cylinder_2_cones(radius, height1, height2));
        printf("Volume of the cylinder and cone: %lf\n", volume_cylinder_2_cones(radius, height1, height2)); 
    }
}
}

