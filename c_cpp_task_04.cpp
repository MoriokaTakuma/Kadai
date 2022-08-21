#include <stdio.h>
#include <random>
#include <time.h>
// "プレイヤー","敵","その他"の内から１つを選びランダムなステータスを決めるプログラム
struct Parameter {
    char* name = NULL;
    int hp = 0;
    int speed = 0;
    int attack = 0;
    int defense = 0;
};
void func(Parameter* parameter) {
    char names[][32] = {
        "プレイヤー",
        "敵",
        "その他",
    };
    int nameIndex = rand() % 3; //3つの名前のうちからランダムで１つ決める     --
    int hp = rand() % 100;      //hp に 100 までの数値をランダムで代入する     |
    int speed = rand() % 10;    //speed に 10 までの数値をランダムで代入する   |-[問題点]いずれも0を含んでいる
    int attack = rand() % 20;   //attack に 20 までの数値をランダムで代入する  |
    int defense = rand() % 20;  //defense に 20 までの数値をランダムで代入する--
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