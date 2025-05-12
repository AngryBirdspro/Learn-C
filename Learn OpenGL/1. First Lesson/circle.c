#define GL_SILENCE_DEPRECATION

#include "GLFW/glfw3.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

float circleColor[3] = {1.0f, 0.0f, 0.0f}; // Start red
int windowWidth = 800;
int windowHeight = 600;

void randomizeColor() {
    circleColor[0] = (float)rand() / RAND_MAX;
    circleColor[1] = (float)rand() / RAND_MAX;
    circleColor[2] = (float)rand() / RAND_MAX;
}

void mouse_button_callback(GLFWwindow* window, int button, int action, int mods) {
    if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS) {
        randomizeColor();
    }
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    windowWidth = width;
    windowHeight = height;
    glViewport(0, 0, width, height);

    // Reset orthographic projection to match new size
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, width, 0, height, -1, 1);
    glMatrixMode(GL_MODELVIEW);
}

void drawCircle(float x, float y, float radius, int segments) {
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(circleColor[0], circleColor[1], circleColor[2]);
    glVertex2f(x, y);
    for (int i = 0; i <= segments; i++) {
        float angle = 2.0f * M_PI * i / segments;
        glVertex2f(x + cosf(angle) * radius, y + sinf(angle) * radius);
    }
    glEnd();
}

int main(void)
{
    srand((unsigned int)time(NULL));

    if (!glfwInit()) {
        fprintf(stderr, "Failed to initialize GLFW\n");
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(windowWidth, windowHeight, "Resizable Circle", NULL, NULL);
    if (!window) {
        fprintf(stderr, "Failed to create GLFW window\n");
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    glfwSetMouseButtonCallback(window, mouse_button_callback);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // Set initial projection
    framebuffer_size_callback(window, windowWidth, windowHeight);

    while (!glfwWindowShouldClose(window)) {
        glClear(GL_COLOR_BUFFER_BIT);
        glLoadIdentity();

        float centerX = windowWidth / 2.0f;
        float centerY = windowHeight / 2.0f;
        float radius = (windowWidth < windowHeight ? windowWidth : windowHeight) * 0.4f;

        drawCircle(centerX, centerY, radius, 100);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}