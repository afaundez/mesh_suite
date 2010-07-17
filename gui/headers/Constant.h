#ifndef CONSTANT_H
#define CONSTANT_H

namespace Constant{
    enum GLTriangleType{ SELECTED, NOT_SELECTED};
    enum IncludeCase{ NOT_INCLUDED, INCLUDED, BORDER_INCLUDED, CORNER_INCLUDED};
    enum PreProcess{ NO_PREPROCESS, FIX_ENCROACHED_VERTEXS};
    enum TriangleSelection{ MANUAL, SMALLEST_INTERNAL_ANGLE, SMALLEST_EDGE, SMALLEST_EDGE_BORDER_TRIANGLE_FIRST};
    enum NewPoint{ MIDPOINT_LONGEST_EDGE, CENTROID, CIRCUMCENTER, OFF_CENTER, LEPP_BISECTION, RUPPERT, LEPP_CENTROID, LEPP_DELAUNAY, UNGOR};
    enum OutsideNewPoint{ OUTSIDE_MIDPOINT_LONGEST_EDGE, MIDPOINT_ENCROACHED_BORDER };
    enum InsideInsertion{ BASIC, FLIP_DIAGONAL, CAVITY };
    enum RestrictedType{ NOT_RESTRICTED, ONE_RESTRICTED, TWO_RESTRICTED, THREE_RESTRICTED};
    enum OneEdgeRestrictedInsertion{ONE_BASIC};
    enum TwoEdgeRestrictedInsertion{TWO_BASIC};
    enum ThreeEdgeRestrictedInsertion{THREE_NONE, THREE_BASIC};
    const double pi =  3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127;
}

#endif // CONSTANT_H
