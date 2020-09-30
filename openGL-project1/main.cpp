/**
 * ����һ�� GLFWwindow ʵ������Ϊ�����ñ���ɫ
 * 1. ��ʼ�� GLFW �⣻
   2. ʵ���� GLFWwindow��
   3. ��ʼ�� GLEW �⣻
   4. ����һ�� init() ������
   5. �ظ����� display() ������

   ��ʼ��������� init() �����У�
   ���ڻ��� GLFWwindow �Ĵ������ display ������
 */

#include<GL/glew.h>
#include<GLFW/glfw3.h>
#include<iostream>


using namespace std;
void init(GLFWwindow* window) {}

/*
 glClearColor() ָ�����������ʱ�õ���ɫֵ����1�� 0�� 0�� 1�������ɫ
*/
void display(GLFWwindow* window, double currentTime) {
	glClearColor(1.0, 0.0, 0.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
}