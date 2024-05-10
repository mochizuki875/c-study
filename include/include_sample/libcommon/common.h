extern int sum(int min, int max); // これはプロトタイプ宣言なので多分externなくても良い
extern int diff(int x, int y);
extern int Public; // externをつけることで変数の宣言だけを行う（宣言だけなので他の場所で同じ宣言が行われても問題ない）