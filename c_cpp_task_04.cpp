#include <stdio.h>
#include <random>
#include <time.h>
// "�v���C���[","�G","���̑�"�̓�����P��I�у����_���ȃX�e�[�^�X�����߂�v���O����
struct Parameter {
    char* name = NULL;
    int hp = 0;
    int speed = 0;
    int attack = 0;
    int defense = 0;
};
void func(Parameter* parameter) {
    char names[][32] = {
        "�v���C���[",
        "�G",
        "���̑�",
    };
    int nameIndex = rand() % 3; //3�̖��O�̂������烉���_���łP���߂�     --
    int hp = rand() % 100;      //hp �� 100 �܂ł̐��l�������_���ő������     |
    int speed = rand() % 10;    //speed �� 10 �܂ł̐��l�������_���ő������   |-[���_]�������0���܂�ł���
    int attack = rand() % 20;   //attack �� 20 �܂ł̐��l�������_���ő������  |
    int defense = rand() % 20;  //defense �� 20 �܂ł̐��l�������_���ő������--
    parameter->name = names[nameIndex];
    parameter->hp = hp;
    parameter->speed = speed;
    parameter->attack = attack;
    parameter->defense = defense;
};

int main() {
    srand(time(NULL));
    Parameter parameters[5] = {};
    int s = sizeof(parameters) / sizeof(Parameter);
    for (int i = 0; i < s; ++i) {
        func(&parameters[i]);
    }
    return 0;
}