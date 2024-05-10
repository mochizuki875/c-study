# ファイルを分割した際のコンパイル

## まとめてコンパイルする方法

複数ファイルから実行ファイルを作成
```bash
$ $ gcc -o main main.c libcommon/sum.c libcommon/diff.c libmsg/message.c 
```

## 静的ライブラリファイルをリンクする方法
分割したファイルからライブラリを作成し、ソースコードをコンパイルする際に静的リンクする。

オブジェクトファイルの作成
```bash
$ cd libcommon
$ gcc -c sum.c diff.c

$ file sum.o
sum.o: ELF 64-bit LSB relocatable, x86-64, version 1 (SYSV), not stripped

$ gcc -c message.c
```

オブジェクトファイルをまとめてライブラリファイルを作成
```bash
$ ar -r libcommon.a libcommon/sum.o libcommon/diff.o
ar: creating libcommon.a

$ file libcommon.a
libcommon.a: current ar archive

$ ar -r libmsg.a libmsg/message.o
ar: creating libmsg.a
```

`-l`でリンクする静的ライブラリを指定（`lib`および`.a`は省略可能）
`-L`は静的ライブラリが存在するディレクトリを指定
```bash
$ gcc -o main main.c -L. -lcommon -lmsg
```

`stdio.h`とかで明示的にリンクする必要がないのは、おそらく`gcc`が自動的にリンクしているから。

## 参考

gcc コンパイルオプション備忘録  
https://qiita.com/seriru13/items/c2f5192615162c4c3f47