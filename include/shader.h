#ifndef SHADER_H
#define SHADER_H

// Structure to hold the shader program ID
typedef struct {
    unsigned int ID; // Shader program ID
} Shader;

/**
 * @brief Function to create a shader program from vertex and fragment shader file paths
 *
 * @param vertexPath - Path to the vertex shader source code file
 * @param fragmentPath - Path to the fragment shader source code file
 * @return Shader - The created shader program
 */
Shader createShader(const char* vertexPath, const char* fragmentPath);

/**
 * @brief Function to activate a shader program
 *
 * @param shader - Pointer to the shader program to be activated
 */
void useShader(Shader* shader);

/**
 * @brief Function to read the contents of a file
 *
 * @param filePath - Path to the file to be read
 * @return char* - Contents of the file
 */
char* readFile(const char* filePath);

/**
 * @brief Function to check for shader compilation and linking errors
 *
 * @param shader - Shader ID to be checked
 * @param type - Type of shader (vertex, fragment, or program)
 */
void checkCompileErrors(unsigned int shader, const char* type);

#endif //SHADER_H
