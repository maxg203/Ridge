#include <GLFW/glfw3.h>
#include <iostream>

using namespace std;

int increment(int a, int b) {
    return a + b;
}

int main() {
	cout << increment(2, 3) << endl;
	cout << "Hello world!" << endl;
	if (glfwInit()) {
        cout << "glfw loaded!" << endl;
    }

    // std::cin.get();
    return 0;
}
