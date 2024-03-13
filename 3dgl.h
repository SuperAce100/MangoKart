#ifndef _MY_MODULE_H
#define _MY_MODULE_H

#include <gl.h>

typedef struct
{
    float x, y, z;
} Vec3;

typedef struct
{
    float x, y;
} Vec2;

void say_hello(const char *name);

void gl3d_init(float screenW, float screenH, Vec3 eye, Vec3 center);

void gl3d_draw_triangle(int x1, int y1, int x2, int y2, int x3, int y3, color_t c);

void gl_draw_polygon(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, color_t c);

void gl3d_clear(color_t c);

/*
 * Draw a cube with center at `center` and width `width` with color `c`
 *
 * @param center: the center of the cube
 * @param width: the width of the cube
 * @param c: the color of the cube
 */
void gl3d_draw_cube(Vec3 center, float width, color_t c);

/*
 * Draw axes with length `length`
 *
 * @param length: the length of the axes
 */
void gl3d_draw_axes(float length);

/*
 * Move the camera to the position `eye` and look at the position `center`
 *
 * @param eye: the position of the camera
 * @param center: the position to look at
 */
void gl3d_move_camera(Vec3 eye, Vec3 center);

#endif
