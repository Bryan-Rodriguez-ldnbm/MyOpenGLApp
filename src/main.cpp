#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/gtc/matrix_transform.hpp>

int main()
{
    // initialize GLFW
    if (!glfwInit())
    {
        return -1;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // create a window pointer
    GLFWwindow* window = glfwCreateWindow(640, 480, "finally", NULL, NULL);

    if (window == NULL)
    {
        std::cout << "Could not create window." << std::endl;
        return -1;
    }

    glfwMakeContextCurrent(window);

     if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        return -1;
    }

    while (!glfwWindowShouldClose(window))
    {
        glClearColor(0.529f, 0.808f, 0.922f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    return 0;
}
