// ---------------------------------------------------------
/**
 *  配列をランダムな整値で初期化し、
 *  内容を全て合計した整数を表示するプログラム
 */
#include <stdio.h>
#include <random>
#include <time.h>

// ---------------------------------------------------------
/**
 * @brief          配列の内容をランダムな整数で初期化する
 * @param[in,out]  address     配列の先頭アドレスを持つポインタ
 * @param[in]      size        配列のサイズ
 */
void initalizeArray(int &address, int size) {

    // ランダムな値を利用する為の準備
    srand(time(NULL));

    // ランダムな値で配列の内容を初期化する
    for (int i = 0; i < size; ++i) {
        // 配列の要素のアドレスを p に代入する
        int *p = &address + i;
        // 0 ～ 9 のランダムな整数を初期値として代入する
        *p = (rand() % 10);
    }
}


// ---------------------------------------------------------
/**
 * @brief          配列の総和を計算する
 * @param[in,out]  address     配列の先頭アドレスを持つポインタ
 * @param[in]      size        配列のサイズ
 * @return         配列の総和         
 */
int calcSum(int a[10], int size) {

    int sum = 0;

    for (int i = 0; i < size; ++i) {
        sum = sum + a[i];
    }

    return sum;
}


// ---------------------------------------------------------
// main 関数の定義
// ---------------------------------------------------------
int main() {

    // 整数型の配列を宣言する
    int a[10] = {};

    // 配列を初期化する
    initalizeArray(*a, 10);

    // 配列の総和を計算する
    int total = calcSum(a, 10);

    printf("%d", total);

    return 0;
}