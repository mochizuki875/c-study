// 型定義

typedef int INT; // int型をINT型として定義

typedef struct{ // x,yをメンバーに持つ構造体型をPoint型として定義
    int x;
    int y;
} Point;


int main(){
    INT a = 10;
    Point p = {1, 2}; // 既存の型のように扱える

    printf("a = %d\n", a);
    printf("p.x = %d\n", p.x);
    printf("p.y = %d\n", p.y);

    return 0;
}