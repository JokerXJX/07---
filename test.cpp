#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

////���һ��Բ�࣬��Բ���ܳ�
////�ܳ���ʽ��2*PI*�뾶
//const double PI = 3.14;
////�������һ���࣬��������������
//class Circle
//{
//	//����Ȩ��
//	//����Ȩ��
//public:
//	//����
//	int m_R;//�뾶
//	//��Ϊ
//	//��ȡ�ܳ�
//	double claculateZC()
//	{
//		return 2 * PI * m_R;
//	}
//};
//
//int main()
//{
// //���Ժ���Ϊ��Ϊ��Ա
// //����  ��Ա���ԣ���Ա����
// //��Ϊ  ��Ա��������Ա����
//	//ͨ��Բ�ഴ�������Բ(����)
// //ʵ������ͨ��һ���ഴ��һ������Ĺ���
//	Circle c1;
//	//��Բ��������Խ��и�ֵ
//	c1.m_R = 10;
//	cout << "Բ���ܳ�Ϊ��" << c1.claculateZC() << endl;
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
//		cout << "������" << m_Name << " " << "ѧ�ţ�" << m_ID << endl;
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
//	s.setName("����");
//	s.setID(23124);
//	s.ShowStu();
//	system("pause");
//	return 0;
//}

//����Ȩ��
//����  public     ��Ա  ���ڿɷ���,����Ҳ�ɷ���
//����  protected  ��Ա  ���ڿɷ���,���ⲻ�ɷ���  ���ӿ��Է��ʸ����б���������
//˽��  private    ��Ա  ���ڿɷ���,���ⲻ�ɷ���  ���Ӳ��ܷ��ʸ����б���������

//class Person
//{
//public:
//	����
//	string m_Name;
//	����
//protected:
//	string m_Car;
//	˽��
//private:
//	int m_Password;
//
//public:
//	void func()
//	{
//		m_Name = "����";
//		m_Car = "������";
//		m_Password = 123456;
//	}
//};
//int main()
//{
//	ʵ����
//	Person p1;
//	p1.m_Name = "����";
//	//p1.m_Car = "����";//����Ȩ�����ⲻ�ɷ���
//	//p1.m_Password = 123;//˽��Ȩ�����ⲻ�ɷ���
//	system("pause");
//	return 0;
//}

//sturct Ĭ��Ȩ���ǹ���
//class Ĭ��Ȩ����˽��
//class C1
//{
//	int m_A;//Ĭ��˽��
//};
//
//struct C2
//{
//	int m_B;//Ĭ�Ϲ���
//};
//int main()
//{
//	C1 c1;
//	//c1.m_A = 100;//����
//	C2 c2;
//	c2.m_B = 100;
//	system("pause");
//	return 0;
//}


//��Ա������Ϊ˽��
//1.�����Լ����ƶ�дȨ��
//2.����д���Լ�����ݵ���Ч��
//class Person
//{
//public:
//	//��������
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//��ȡ����
//	string getName()
//	{
//		return m_Name;
//	}
//
//	int getAge()
//	{
//		m_Age = 0;//��ʼ��
//		return m_Age;
//	}
//
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//
//private:
//	string m_Name;//�ɶ���д
//	int m_Age;//ֻ��
//	string m_Lover;//ֻд
//};
//int main()
//{
//	Person p;
//	p.setName("����");
//	cout << "����Ϊ��" << p.getName() << endl;
//
//	cout << "����Ϊ��" << p.getAge() << endl;
//
//	p.setLover("ùù");
//
//	system("pause");
//	return 0;
//}


//��������
//������
//�������
//�����Ϊ  ��ȡ������������
//�ֱ�����ȫ�ֺ�������Ա�����ж������������Ƿ����

//class Cube
//{
//public:
//	//���ó���ߣ���ȡ�����
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
//	//��ȡ������
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
//	//���ó�Ա�����ж��������Ƿ����
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
////����ȫ�ֺ����ж������������Ƿ����
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
//	cout << "c1�������" << c1.calS() << endl;
//	cout << "c1�������" << c1.calV() << endl;
//
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//	//����ȫ�ֺ���(������)
//	bool ret = isSame(c1, c2);
//	if (ret)
//		cout << "c1��c2���" << endl;
//	else 
//		cout << "c1��c2�����" << endl;
//	
//	//���ó�Ա����(��һ��)
//	ret = c1.isSameByClass(c2);
//	if (ret)
//		cout << "��Ա�����ж�c1��c2���" << endl;
//	else
//		cout << "��Ա�����ж�c1��c2�����" << endl;
//	system("pause");
//	return 0;
//}


//���Բ��ϵ
// ����
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
//Բ��
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
//�жϹ�ϵ
void isInCircle(Circle& c, Point& p)
{
	//����������룬�뾶��ƽ��
	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	int rDistance = c.getR() * c.getR();

	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
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