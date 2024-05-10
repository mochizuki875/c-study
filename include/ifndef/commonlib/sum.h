// 最初に、記号_INCLUDE_SUM_が定義されているか調べて、
// 定義されていなかった場合だけ、その後のプログラムをコンパイル

#ifndef _INCLUDE_SUM_

#define _INCLUDE_SUM_  // ifndefに対するフラグ的な役割

int sum(int min, int max);
extern int Public;

#endif