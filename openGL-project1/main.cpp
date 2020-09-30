/**
 * 创建一个 GLFWwindow 实例，并为其设置背景色
 * 1. 初始化 GLFW 库；
   2. 实例化 GLFWwindow；
   3. 初始化 GLEW 库；
   4. 调用一次 init() 函数；
   5. 重复调用 display() 函数；

   初始化任务放在 init() 函数中；
   用于绘制 GLFWwindow 的代码放入 display 函数中
 */

#include<GL/glew.h>
#include<GLFW/glfw3.h>
#include<iostream>


using namespace std;
void init(GLFWwindow* window) {}

/*
 glClearColor() 指定了清除背景时用的颜色值，（1， 0， 0， 1）代表红色
*/
void display(GLFWwindow* window, double currentTime) {
	glClearColor(1.0, 0.0, 0.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
}