#pragma once
#include <stdio.h>
#include <iostream>

/*�N���X���uTemplateClass�v�ŕ����N���X�e���v���[�g���`*/
template<typename Type, typename Type2>
class TemplateClass {
public:
	//�R���X�g���N�^�i�����o�ϐ�Number1,Number2������number1,number2�ŏ������j
	TemplateClass(Type number1, Type2 number2) :
		Number1(number1), Number2(number2) {}

	Type Min() {
		if (Number1 > Number2/*Number1���Number2��������������H*/) {
			return static_cast<Type>(Number2);
		}
		else {
			return static_cast<Type2>(Number1);
		}
	};
private:
	/*Type,Type2���g����Number1��2���`*/
	Type Number1;
	Type2 Number2;
};

