#include "Sphere.h"
#include "../point/point.h"
#include "../vector/vector.h"
#include "../scene/color.h"
#include <iostream>
#include <math.h>
Sphere::Sphere(Point _center, 
        float _radius, 
        Color _color, 
        float _diffuseCoefficient, 
        float _specularCoefficient,
        float _ambientCoefficient,
        float _reflectionCoefficient,
        float _transmissionCoefficient,
        float _rugosityCoefficient) 
        : 
        center(_center),
        radius(_radius),
        color(_color),
        diffuseCoefficient(_diffuseCoefficient),
        specularCoefficient(_specularCoefficient),
        ambientCoefficient(_ambientCoefficient),
        reflectionCoefficient(_reflectionCoefficient),
        transmissionCoefficient(_transmissionCoefficient),
        rugosityCoefficient(_rugosityCoefficient) {}

double Sphere::intercept(Point &point, Vector &vector) {
        // achar a,b e c
        Vector centerToPoint = Vector(point.x - center.x, point.y - center.y, point.z- center.z);

        double a = vector.dot(vector);
        
        
        double b = 2 * vector.dot(centerToPoint);
        
        double c = centerToPoint.dot(centerToPoint) - radius * radius;
        
        double delta = b * b - 4 * a * c;
        // caso delta < 0, nao intercepta, delta = 0, intercepta em um unico ponto
        // delta > 0, intercepta em dois pontos, nescessario checar qual o ponto
        // interceptado de fora pra dentro.
        if (delta < 0) {
                return -1;
        }
        
        double r1 = (-b - sqrt(delta)) / (2 * a);
        double r2 = (-b + sqrt(delta)) / (2 * a);
        double r;
        
        r = (r1 <= 1 && r2 <= 1) ? 
        -1 : (r1 <= 1 && r2 > 1) ? 
        r2 : (r2 <= 1 && r1 > 1) ? 
        r1 : std::min(r1, r2);

        if (r == -1){
                return -1;
        }

        vector = vector * r;
        double aux = vector.length();
        return aux;


}

int main(){

        Sphere sphere = Sphere(Point(5, 5, 5), sqrt(1.58), Color(0, 0, 0), 0, 0, 0, 0, 0, 0);
        Point p1 = Point(2, 2, 2);
        Point p2 = Point(0, 0, 3);
        Vector v1 = Vector(1, 1, 1);
        Vector v2 = Vector(-4.77, 3.7, 1);

        std::cout << sphere.intercept(p1,v1) << "\n";
        std::cout << sphere.intercept(p2,v2) << "\n"; 
}

