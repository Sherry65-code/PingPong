#include <GLFW/glfw3.h>
#include <iostream>

#define WINDOW_NAME "Ping Pong"
#define WINDOW_WIDTH 500
#define WINDOW_HEIGHT 500

class PP {
    public:
      typedef GLFWwindow* Window;
      void run();
    private:
      PP::Window window;
      void CreateWindow();
      void Loop();
      void Destroy();
};