#include "makeWindow.h"

int makeWindow() {
    GLFWwindow* openWindow = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Hello World", NULL, NULL);

    if (!glfwInit())
        return -1;

    if (!openWindow)
    {
        glfwTerminate();
        return -1;
    }
    
    while (!glfwWindowShouldClose(openWindow))
    {
        //add close on input logic
    }

    glfwTerminate();
    return 0;
}

