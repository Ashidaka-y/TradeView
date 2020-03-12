#include <GLFW/glfw3.h>
#include <spdlog/spdlog.h>

int main() {
  // full screen windows
  GLFWwindow* window =
      glfwCreateWindow(640, 480, "My Title", glfwGetPrimaryMonitor(), NULL);
  if (window == NULL) {
    spdlog::error("trade view create fail");
  }
  glfwTerminate();
  return 0;
}
