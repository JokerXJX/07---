#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

////设计一个圆类，求圆的周长
////周长公式：2*PI*半径
//const double PI = 3.14;
////代表设计一个类，后面紧跟类的名称
//class Circle
//{
//	//访问权限
//	//公共权限
//public:
//	//属性
//	int m_R;//半径
//	//行为
//	//获取周长
//	double claculateZC()
//	{
//		return 2 * PI * m_R;
//	}
//};
//
//int main()
//{
// //属性和行为成为成员
// //属性  成员属性，成员变量
// //行为  成员函数，成员方法
//	//通过圆类创建具体的圆(对象)
// //实例化：通过一个类创建一个对象的过程
//	Circle c1;
//	//给圆对象的属性进行赋值
//	c1.m_R = 10;
//	cout << "圆的周长为：" << c1.claculateZC() << endl;
//	system("pause");
//	return 0;
//}

#include<string.h>
//class Stu
//{
//public:
//	string m_Name;
//	int m_ID;
//	void ShowStu()
//	{
//		cout << "姓名：" << m_Name << " " << "学号：" << m_ID << endl;
//	}
//
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//
//	void setID(int ID)
//	{
//		m_ID = ID;
//	}
//};
//int main()
//{
//	Stu s;
//	//s->ShowStu();
//	s.setName("李四");
//	s.setID(23124);
//	s.ShowStu();
//	system("pause");
//	return 0;
//}

//访问权限
//公共  public     成员  类内可访问,类外也可访问
//保护  protected  成员  类内可访问,类外不可访问  儿子可以访问父亲中保护的内容
//私有  private    成员  类内可访问,类外不可访问  儿子不能访问父亲中保护的内容

//class Person
//{
//public:
//	公共
//	string m_Name;
//	保护
//protected:
//	string m_Car;
//	私有
//private:
//	int m_Password;
//
//public:
//	void func()
//	{
//		m_Name = "张三";
//		m_Car = "拖拉机";
//		m_Password = 123456;
//	}
//};
//int main()
//{
//	实例化
//	Person p1;
//	p1.m_Name = "李四";
//	//p1.m_Car = "奔驰";//保护权限内外不可访问
//	//p1.m_Password = 123;//私有权限内外不可访问
//	system("pause");
//	return 0;
//}

//sturct 默认权限是公共
//class 默认权限是私有
//class C1
//{
//	int m_A;//默认私有
//};
//
//struct C2
//{
//	int m_B;//默认公共
//};
//int main()
//{
//	C1 c1;
//	//c1.m_A = 100;//错误
//	C2 c2;
//	c2.m_B = 100;
//	system("pause");
//	return 0;
//}


//成员属性设为私有
//1.可以自己控制读写权限
//2.对于写可以检测数据的有效性
//class Person
//{
//public:
//	//设置姓名
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//获取姓名
//	string getName()
//	{
//		return m_Name;
//	}
//
//	int getAge()
//	{
//		m_Age = 0;//初始化
//		return m_Age;
//	}
//
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//
//private:
//	string m_Name;//可读可写
//	int m_Age;//只读
//	string m_Lover;//只写
//};
//int main()
//{
//	Person p;
//	p.setName("张三");
//	cout << "姓名为：" << p.getName() << endl;
//
//	cout << "年龄为：" << p.getAge() << endl;
//
//	p.setLover("霉霉");
//
//	system("pause");
//	return 0;
//}


//立方体类
//创建类
//设计属性
//设计行为  获取立方体面积体积
//分别利用全局函数，成员函数判断两个立方体是否相等

//class Cube
//{
//public:
//	//设置长宽高，获取长宽高
//	void setL(int l)
//	{
//		m_L = l;
//	}
//	int getL()
//	{
//		return m_L;
//	}
//
//	void setW(int w)
//	{
//		m_W = w;
//	}
//	int getW()
//	{
//		return m_W;
//	}
//
//	void setH(int h)
//	{
//		m_H = h;
//	}
//	int getH()
//	{
//		return m_H;
//	}
//
//	//获取面积体积
//	int calS()
//	{
//		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
//	}
//
//	int calV()
//	{
//		return m_L * m_W * m_H;
//	}
//
//	//利用成员函数判断立方体是否相等
//	bool isSameByClass(Cube& c)
//	{
//		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
//		{
//			return true;
//		}
//		return false;
//	}
//
//private:
//	int m_L;
//	int m_W;
//	int m_H;
//};
//
////利用全局函数判断两个立方体是否相等
//bool isSame(Cube& c1, Cube& c2)
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//	cout << "c1的面积：" << c1.calS() << endl;
//	cout << "c1的体积：" << c1.calV() << endl;
//
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//	//利用全局函数(传两个)
//	bool ret = isSame(c1, c2);
//	if (ret)
//		cout << "c1与c2相等" << endl;
//	else 
//		cout << "c1与c2不相等" << endl;
//	
//	//利用成员函数(传一个)
//	ret = c1.isSameByClass(c2);
//	if (ret)
//		cout << "成员函数判断c1与c2相等" << endl;
//	else
//		cout << "成员函数判断c1与c2不相等" << endl;
//	system("pause");
//	return 0;
//}


//点和圆关系
// 点类
//class Point
//{
//public:
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	int getX()
//	{
//		return m_X;
//	}
//
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};
//圆类
//class Circle
//{
//public:
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	int getR()
//	{
//		return m_R;
//	}
//
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//	
//private:
//	int m_R;
//	Point m_Center;
//};

#include"Circle.h"
#include"Point.h"
//判断关系
void isInCircle(Circle& c, Point& p)
{
	//计算两点距离，半径的平方
	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	int rDistance = c.getR() * c.getR();

	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}
int main()
{
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	Point p;
	p.setX(10);
	p.setY(10);

	isInCircle(c,p);
	system("pause");
	return 0;
}