// ---------------------------------------------------------
/**
 *  Parameter を一律で n 倍するプログラム、
 */
#include <stdio.h>


 // ---------------------------------------------------------
 /**
  * @brief パラメータ構造体
  */
struct Parameter
{
    int hp = 100;  // HP
    int speed = 10;   // 素早さ
    int attack = 20;   // 攻撃力
    int defense = 20;   // 防御力
};


// ---------------------------------------------------------
/**
 * @brief          Parameter が持つ全ての内容を n 倍する
 * @param[in,out]  param   n 倍させたい Parameter 型変数のアドレス
 * @param[in]      n       倍率
 */
void buff(Parameter *param, int n) {

    param ->hp *= n;
    param ->speed *= n;
    param ->attack *= n;
    param ->defense *= n;

}

// ---------------------------------------------------------
/**
 * @brief          Parameter 型が持つ各パラメータを表示する
 * @param[in]      param   表示させたい Parameter 型変数のアドレス
 */
void dispParameter(Parameter *param) {

    printf("HP     : %d\n", (*param) .hp);
    printf("素早さ : %d\n", (*param) .speed);
    printf("攻撃力 : %d\n", (*param).attack);
    printf("防御力 : %d\n", (*param).defense);
}


// ---------------------------------------------------------
// main 関数の定義
// ---------------------------------------------------------
int main() {

    // Parameter 型の変数を宣言する
    Parameter parameter   = {};

    // 強化前のパラメータを表示する
    dispParameter(&parameter);

    // 全パラメータを 3 倍に強化する
    buff(&parameter, 3);

    printf("---------強化後---------\n");
    // 強化後のパラメータを表示する
    dispParameter(&parameter);

    return 0;
}