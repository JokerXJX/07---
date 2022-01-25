#define _CRT_SECURE_NO_WARNINGS 1
#include"Point.h"
// 点类
void Point::setX(int x)//Point::  Point作用域下
{
	m_X = x;
}
int Point::getX()
{
	return m_X;
}

void Point::setY(int y)
{
	m_Y = y;
}
int Point::getY()
{
	return m_Y;
}
