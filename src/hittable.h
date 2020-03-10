#pragma once

#include "RAY.h"
#include "vec3.h"

struct hit_record
{
    float t;
    vec3 p;
    vec3 normal;
};

class hittable  {
    public:
        virtual bool hit(const ray& r, float t_min, float t_max, hit_record& rec) const = 0;
};