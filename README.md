# C言語学習

苦しんで覚えるＣ言語
https://9cguide.appspot.com/index.html

Ｃ言語プログラミング入門  
https://satowiki.github.io/merry/SEMI_C/c_langtop.html


コンパイル
```bash
$ gcc -o foo foo.c
```

## ライブラリについて
Linuxでは標準ライブラリは`/usr/include`にある。
ヘッダファイルには宣言のみが記載されているので関数の設計書的な役割もある。

```c
#include<stdio.h> // /usr/include からヘッダファイルを読み込む
#include "./common/common.h" // 任意の場所からヘッダファイルを読み込む
#include "./common/types.h" // 任意の場所からヘッダファイルを読み込む
```

プリプロセッサ
https://satowiki.github.io/merry/SEMI_C/SECTION13/section13_1.html

ライブラリ関数
https://satowiki.github.io/merry/SEMI_C/SECTION14/section14_1.html