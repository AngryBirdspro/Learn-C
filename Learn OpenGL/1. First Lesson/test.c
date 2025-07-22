#define GL_SILENCE_DEPRECATION

#include "GLFW/glfw3.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int windowWidth = 800;
int windowHeight = 600;

// Circle properties
float circleX = 400.0f;  // Start in center
float circleY = 300.0f;
float circleRadius = 20.0f;  // Diameter 40px

float speed = 500.0f; // Pixels per second

// Keyboard state
int keys[1024] = {0};

void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    windowWidth = width;
    windowHeight = height;
    glViewport(0, 0, width, height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, width, 0, height, -1, 1);
    glMatrixMode(GL_MODELVIEW);
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods) {
    if (key >= 0 && key < 1024) {
        if (action == GLFW_PRESS)
            keys[key] = 1;
        else if (action == GLFW_RELEASE)
            keys[key] = 0;
    }
}

void drawCircle(float x, float y, float radius, int segments) {
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 1.0f, 0.0f); // Yellow
    glVertex2f(x, y);
    for (int i = 0; i <= segments; i++) {
        float angle = 2.0f * M_PI * i / segments;
        glVertex2f(x + cosf(angle) * radius, y + sinf(angle) * radius);
    }
    glEnd();
}

void updatePosition(float deltaTime) {
    float dx = 0.0f, dy = 0.0f;

    if (keys[GLFW_KEY_LEFT] || keys[GLFW_KEY_A]) dx -= speed * deltaTime;
    if (keys[GLFW_KEY_RIGHT] || keys[GLFW_KEY_D]) dx += speed * deltaTime;
    if (keys[GLFW_KEY_UP] || keys[GLFW_KEY_W]) dy += speed * deltaTime;
    if (keys[GLFW_KEY_DOWN] || keys[GLFW_KEY_S]) dy -= speed * deltaTime;

    circleX += dx;
    circleY += dy;

    // Clamp to window bounds
    if (circleX - circleRadius < 0) circleX = circleRadius;
    if (circleX + circleRadius > windowWidth) circleX = windowWidth - circleRadius;
    if (circleY - circleRadius < 0) circleY = circleRadius;
    if (circleY + circleRadius > windowHeight) circleY = windowHeight - circleRadius;
}

int main(void)
{
    if (!glfwInit()) {
        fprintf(stderr, "Failed to initialize GLFW\n");
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(windowWidth, windowHeight, "Move the Circle", NULL, NULL);
    if (!window) {
        fprintf(stderr, "Failed to create GLFW window\n");
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);
    glfwSetKeyCallback(window, key_callback);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    framebuffer_size_callback(window, windowWidth, windowHeight);

    float lastTime = (float)glfwGetTime();

    while (!glfwWindowShouldClose(window)) {
        float currentTime = (float)glfwGetTime();
        float deltaTime = currentTime - lastTime;
        lastTime = currentTime;

        updatePosition(deltaTime);

        glClear(GL_COLOR_BUFFER_BIT);
        glLoadIdentity();

        drawCircle(circleX, circleY, circleRadius, 100);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}
