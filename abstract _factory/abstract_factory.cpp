/*************************************************************
	���󹤳�ģʽ

�������ᵽ�����׶������ģʽϵ�н�������������ģʽ�����ֹ�������ģʽ����һ�����ص����⣺һ�����幤��ֻ�ܴ���һ���Ʒ
����ʵ�ʹ����У�һ������������Ҫ���������Ʒ��Ϊ�˽�����������⣬������ʹ����һ���µ����ģʽ�����󹤳�ģʽ��

���󹤳�ģʽ����Abstract Factory Pattern���ṩһ������һϵ����ػ��໥��������Ľӿڣ�������ָ�����Ǿ�����ࣻ
����Ĺ�������ʵ�־���Ĳ�Ʒʵ����
���󹤳�ģʽ�빤������ģʽ��������: ���󹤳���ÿ���������Դ���������Ĳ�Ʒ������������ÿ������ֻ�ܴ���һ�ࡣ

����ʹ�ó���Ľӿ�������һ����ز�Ʒ��������Ҫ֪�������ʵ���������ľ����Ʒ��ʲô�������Ϳ��ԴӾ����Ʒ�б����

����1�� �������󹤳��࣬������幤���Ĺ����ӿڣ�
����2�� ���������Ʒ���� ����������Ʒ�Ĺ����ӿڣ�
����3�� ���������Ʒ�� ���̳г����Ʒ���ࣩ����������Ʒ�Ĺ����ӿڣ�
����4�� ���������Ʒ�ࣨ�̳г����Ʒ�ࣩ & ���������ľ����Ʒ��
����5��	�������幤���ࣨ�̳г��󹤳��ࣩ�����崴����Ӧ�����Ʒʵ���ķ�����
����6��	�ͻ���ͨ��ʵ��������Ĺ����࣬�������䴴����ͬĿ���Ʒ�ķ���������ͬ�����Ʒ���ʵ��


������С�����������ϼӹ�����A���������������Ʒ��B��������ģ�����Ʒ����
	  ���ſͻ�����ı仯��A�����ڵصĿͻ���ҪҲģ�����Ʒ��B�����ڵصĿͻ�Ҳ��Ҫ�������Ʒ��
��ͻ��û����Դ���ʽ�+��λ���ڵ��طֱ����һ��ע�ֳܷ�
�����������ԭ�е��������ϳ���������������Ĺ��ܣ���A������������+ģ�߲�Ʒ��B����������ģ��+������Ʒ��

**************************************************************/

#include <iostream>
#include "Factory.h"
using namespace std;

//����6���ͻ���ͨ��ʵ��������Ĺ����࣬�������䴴����ͬĿ���Ʒ�ķ���������ͬ�����Ʒ���ʵ��
int main()
{
	//������������
	Factory *mFactoryA = new FactoryA();
	Factory *mFactoryB = new FactoryB();
	
	std::cout << "A��ԭ������������е�ۣ��ͺ�ΪA�ͻ�е��: " << std::endl;
	mFactoryA->ManufactureRobotArm()->Show();
	std::cout << "A�������Ӽ�����������ߣ��ͺ�ΪA�ͼ����: " << std::endl;
	mFactoryA->ManufactureComputer()->Show();

	std::cout << std::endl;

	std::cout << "B��ԭ������������������ͺ�ΪB�ͼ����: " << std::endl;
	mFactoryB->ManufactureComputer()->Show();
	std::cout << "B�������ӻ�е���������ߣ��ͺ�ΪB�ͻ�е��: " << std::endl;
	mFactoryB->ManufactureRobotArm()->Show();

	system("pause");
	return 0;
}