int Public; // sum.hで宣言だけ行った変数の実態を作成（定義）

int sum(int min, int max) {
    int num;
    num=(min + max) * (max - min + 1) / 2;

    Public = 100;

    return num;
}