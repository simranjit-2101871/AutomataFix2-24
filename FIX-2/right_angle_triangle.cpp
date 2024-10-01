//To check whether it is right triangle or not


//my code
#include <iostream> // Including input-output stream header file
#include <vector>   // Including vector header file for vector container
#include <algorithm> // Including algorithm header file for sorting operations
using namespace std; // Using the standard namespace

int main() { // Start of the main function

    vector<int> triangle_sides(3); // Creating a vector 'triangle_sides' to store 3 integers (sides of a triangle)

    // Inputting 3 integers representing sides of a triangle into the vector
    cin >> triangle_sides[0] >> triangle_sides[1] >> triangle_sides[2];

    // Sorting the sides of the triangle in ascending order
    sort(triangle_sides.begin(), triangle_sides.end());

    // Checking if the given sides form a right-angled triangle using Pythagoras theorem
    if (triangle_sides[0] * triangle_sides[0] + triangle_sides[1] * triangle_sides[1] == triangle_sides[2] * triangle_sides[2]) {
        cout << "Yes" << endl; // If the sides form a right-angled triangle, output "Yes"
    } else {
        cout << "No" << endl; // If not, output "No"
    }

    return 0; // Indicating successful completion of the program
}




//amcat walla
/*int isrighttriangle(Point *p1,Point *p2,Point *p3){
    int a=Point_calcualtingdistance(p1,p2);
    int b=oint_calcualtingdistance(p2,p3);
    int c=oint_calcualtingdistance(p3,p1);

    return a+b > c && a+c > b && b = c > 0;
}
*/

#include<iostream>
#include <cmath>
using namespace std;

struct Point {
    int x;
    int y;
};

int Point_calculatingdistance(Point *p1, Point *p2) {
    return (p1->x - p2->x) * (p1->x - p2->x) + (p1->y - p2->y) * (p1->y - p2->y);
}

bool is_right_triangle(Point *p1, Point *p2, Point *p3) {
    int a2 = Point_calculatingdistance(p1, p2); // a^2
    int b2 = Point_calculatingdistance(p2, p3); // b^2
    int c2 = Point_calculatingdistance(p3, p1); // c^2

    // Check if any permutation of sides satisfies the Pythagorean theorem
    return (a2 + b2 == c2) || (a2 + c2 == b2) || (b2 + c2 == a2);
}

int main() {
    Point p1 = {0, 0};
    Point p2 = {3, 0};
    Point p3 = {0, 4};

    if (is_right_triangle(&p1, &p2, &p3)) {
        printf("The triangle is a right triangle.\n");
    } else {
        printf("The triangle is not a right triangle.\n");
    }

    return 0;
}
