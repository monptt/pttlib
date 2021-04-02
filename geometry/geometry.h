// 幾何
#include <functional>

namespace pttgeometry{

class Point{
public:
    double x;
    double y;
    Point(double x, double y){
        this->x = x;
        this->y = y;
    }
};

template<class T> T distance(Point P,  Point Q){
    return std::sqrt((P.x-Q.x)*(P.x-Q.x) + (P.y-Q.y)*(P.y-Q.y));
}

}