#include<stdio.h>
#include"Template.h"

int main() {
	/*�N���X������^���l����<>�̒����`*/
	TemplateClass<int, float> intFloatTemplate(10, 50.0f);
	TemplateClass<int, double> intDoubleTemplate(80, 13.0);
	TemplateClass<float, int> floatIntTemplate(2.0f, 9);
	TemplateClass<float, double> floatDoubleTemplate(11.0f, 3.5);
	TemplateClass<double, int> doubleIntTemplate(666.0, 333);
	TemplateClass<double, float> doubleFloatTemplate(435.8, 563.5f);

	std::cout << "int(10)�� float(50.0f) ���ׂ����ɏ����������o���F" << intFloatTemplate.Min() << std::endl;
	std::cout << "int(80)�� double(13.0) ���ׂ����ɏ����������o���F" << intDoubleTemplate.Min() << std::endl;
	std::cout << "float(2.0f)�� int(9) ���ׂ����ɏ����������o���F" << floatIntTemplate.Min() << std::endl;
	std::cout << "float(11.0f)�� double(3.5) ���ׂ����ɏ����������o���F" << floatDoubleTemplate.Min() << std::endl;
	std::cout << "double(666.0)�� int(333) ���ׂ����ɏ����������o���F" << doubleIntTemplate.Min() << std::endl;
	std::cout << "double(435.8)�� float(563.5) ���ׂ����ɏ����������o���F" << doubleFloatTemplate.Min() << std::endl;
	return 0;
}