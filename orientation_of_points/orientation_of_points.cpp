// orientation_of_points.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>

typedef CGAL::Exact_predicates_inexact_constructions_kernel Kernel;
typedef Kernel::Point_2 Point2;


using namespace std;
int main()
{
    double x1, x2, x3, y1, y2, y3;
    do {
        cout << "Give three points (6 coordinates, separated by spaces).\n";
        cout << ">> " << std::flush;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if (!cin)
            break;
        Point2 p1(x1, y1), p2(x2, y2), p3(x3, y3);
        switch (CGAL::orientation(p1, p2, p3)) {
        case CGAL::LEFT_TURN:
            cout << "Left turn.";
            break;
        case CGAL::RIGHT_TURN:
            cout << "Right turn.";
            break;
        case CGAL::COLLINEAR:
            cout << "The three points lie on a line.";
            break;

        }
        cout << "\n\n";

    } while (1);
  
    }