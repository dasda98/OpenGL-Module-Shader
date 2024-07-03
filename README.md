# OpenGL-Module-Shader

This is an OpenGL module for handling the shaders.
It is one of many modules that can be connected independently of each other.

## Features

### Shader

- [x] Load shaders from file
    - [x] Vertex shader
    - [x] Fragment shader
    - [ ] Geometry shader
- [ ] Set Uniforms
  - [ ] Basic
  - [ ] Vec
  - [ ] Mat

## Usage

Example of use and function calls:

```c++
    ...
    Shader myShader = createShader("../shaders/shader.vert", "../shaders/shader.frag");
    ...
    while (!glfwWindowShouldClose(window)) {
        ...
        // Uniforms
        GLuint viewLoc = glGetUniformLocation(myShader.ID, "view");
        GLuint projectionLoc = glGetUniformLocation(myShader.ID, "projection");
        GLuint modelLoc = glGetUniformLocation(myShader.ID, "model");
        
        // Render
        useShader(&myShader);
        ...    
    }
    
```