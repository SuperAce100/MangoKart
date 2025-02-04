# Mango-Kart
### Implemented in C for the Mango Pi

A Mario-Kart-inspired racing game built on a custom 3D graphics engine, designed for bare metal performance on the Allwinner D1 RISC-V chip.

## Technical Features

### Custom 3D Graphics Engine
- Fully software-rendered 3D graphics pipeline with no hardware acceleration
- Complete vector math library with 2D/3D vector operations
- Perspective projection and camera system with view frustum culling
- Z-buffer based depth sorting for correct object rendering
- Support for wireframe and filled polygon rendering
- Real-time lighting system with face normal calculations

### Game Engine Features
- Object-oriented design with support for complex 3D models
- Efficient object management with vertex, edge, and face primitives
- Dynamic camera system with smooth rotation and movement
- Custom collision detection system
- Accelerometer-based steering controls that mimic real racing wheel movement

### Performance Optimizations
- Custom math implementations optimized for RISC-V architecture
- Efficient triangle rasterization with scanline algorithm
- Smart object culling and clipping against view frustum
- Fast depth sorting of rendered elements

Built as a final project for Stanford's CS107E (Computer Systems from the Ground Up) with @ethanboneh
