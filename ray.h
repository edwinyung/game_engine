//
// Created by Edwin Yung on 4/28/20.
//

#ifndef GAME_ENGINE_RAY_H
#define GAME_ENGINE_RAY_H

#include "vec3.h"

class ray {
public:
    ray() {}
    ray(const vec3& origin, const vec3& direction)
            : orig(origin), dir(direction)
    {}

    vec3 origin() const    { return orig; }
    vec3 direction() const { return dir; }

    vec3 at(double t) const {
        return orig + t*dir;
    }

public:
    vec3 orig;
    vec3 dir;
};

#endif //GAME_ENGINE_RAY_H
