#include "PP.hpp"

void PP::run() {
  CreateWindow();
  Loop();
  Destroy();
}

void PP::CreateWindow() {
  
  // Initialize GLFW
  if (!glfwInit()) {
    std::cerr << "ERROR: Could Not Initialize GLFW!" << std::endl;
    return;
  }
  
  // Create Window
  PP::window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_NAME, NULL, NULL);
  
  if (!window) {
    std::cerr << "ERROR: Could Not Create a Window!" << std::endl;
    glfwTerminate();
    return;
  }
  
  std::cout << "MESSAGE: New Window Created!" << std::endl;
  std::cout << "INFORMATION: HEIGHT => " << WINDOW_HEIGHT << std::endl;
  std::cout << "INFORMATION: WIDTH  => " << WINDOW_WIDTH << std::endl;
  std::cout << "INFORMATION: NAME   => " << WINDOW_NAME << std::endl;
  
  // Make current Window context
  glfwMakeContextCurrent(window);
  
}

void PP::Loop() {
  while (!glfwWindowShouldClose(window)) {
    // Render
    glClear(GL_COLOR_BUFFER_BIT);
    
    // Swap front and back buffer
    glfwSwapBuffers(window);
    
    // Poll for the process events
    glfwPollEvents();
  }
}

void PP::Destroy() {
  std::cout << "MESSAGE: Exiting Window!" << std::endl;
  glfwTerminate();
}