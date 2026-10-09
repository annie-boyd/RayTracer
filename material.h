/* material.h

this code is directly from the book "Ray Tracing in One Weekend",
code can be found at https://raytracing.github.io/books/RayTracingInOneWeekend.html

*/
#ifndef MATERIAL_H
#define MATERIAL_H

#include "hittable.h"

class material {
  public:
    virtual ~material() = default;

    virtual bool scatter(
        const ray& r_in, const hit_record& rec, color& attenuation, ray& scattered
    ) const {
        return false;
    }
};

#endif
