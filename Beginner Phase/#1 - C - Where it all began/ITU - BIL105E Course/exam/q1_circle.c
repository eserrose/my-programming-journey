#include "stdio.h"
#include "math.h"

typedef struct point_struct{
    double x, y;
}point;

typedef struct coefficients_struct{
    double A, B, C, D;
}coefficients;

typedef struct circle_struct{
    point center;
    double radius;
}circle;

char* sign(double x){
    return ( x < 0 ? "": "+");
}    

void get_input(point*);
coefficients get_center_coeffs(point, point, point);
circle calc_circle_params(coefficients);

int main(){

    point points[3], p;
    coefficients coeffs; 
    circle params;

    for(int i = 0; i < 3; i++){
        get_input(&p);
        points[i] = p;
    }

    coeffs = get_center_coeffs(points[0], points[1], points[2]);
    params = calc_circle_params(coeffs);
    printf("The parametric circle equation is given as %s%.2lfx^2%s%.2lfy^2%s%.2lfx%s%.2lfy%s%.2lf=0.\n", sign(coeffs.A), coeffs.A, sign(coeffs.A), coeffs.A, sign(coeffs.B), coeffs.B, sign(coeffs.C), coeffs.C, sign(coeffs.D), coeffs.D );
    printf("The cannonical circle equation is (x%s%.2lf)^2+(y%s%.2lf)^2=(%s%.2lf)^2\n", sign(-params.center.x), -params.center.x,sign(-params.center.y), -params.center.y,sign(params.radius), params.radius);
}

void get_input(point *p){

    printf("Enter x and y coordinates for a point: \n");
    scanf("%lf %lf", &p->x, &p->y);

}

coefficients get_center_coeffs(point p1, point p2, point p3){

    coefficients c;

    c.A = p1.x*(p2.y - p3.y) - p1.y*(p2.x - p3.x) + p2.x*p3.y - p3.x*p2.y;
    c.B = (p1.x*p1.x + p1.y*p1.y)*(p3.y - p2.y) + (p2.x*p2.x + p2.y*p2.y)*(p1.y - p3.y) + (p3.x*p3.x + p3.y*p3.y)*(p2.y - p1.y);
    c.C = (p1.x*p1.x + p1.y*p1.y)*(p2.x - p3.x) + (p2.x*p2.x + p2.y*p2.y)*(p3.x - p1.x) + (p3.x*p3.x + p3.y*p3.y)*(p1.x - p2.x);
    c.D = (p1.x*p1.x + p1.y*p1.y)*(p3.x*p2.y - p2.x*p3.y) + (p2.x*p2.x + p2.y*p2.y)*(p1.x*p3.y - p3.x*p1.y) + (p3.x*p3.x + p3.y*p3.y)*(p2.x*p1.y - p1.x*p2.y);

    return c;
}

circle calc_circle_params(coefficients coeffs){

    double g = coeffs.B/coeffs.A/2;
    double f = coeffs.C/coeffs.A/2;
    double c = coeffs.D/coeffs.A;

/*
    point center_point = {
        .x = -g,
        .y = -f
    };

    circle circ = {
        .center = center_point,
        .radius = sqrt(g*g + f*f - c)
    };

*/

    point center_point;
    circle circ;
    center_point.x = -g;
    center_point.y = -f;
    circ.center = center_point;
    circ.radius = sqrt(g*g + f*f - c);

    return circ;
}