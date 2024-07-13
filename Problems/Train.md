## **H. 火車** ***<font color = '#AAAAAA'> Train </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***
倉鼠帝國有 $N$ 座城市，編號為 $1$ 到 $N$，還有 $M$ 條鐵路，編號為 $1$ 到 $M$。

鐵路 $i$ 連接城市 $A_i$ 和城市 $B_i$，並且是雙向可通行。在時間點 $0$、 $K_i$ 的倍數時，兩個城市都會有一列火車發車，前往另一個城市。這些火車到達目的地所需的時間是 $T_i$。

$hamster$ 住在城市 $X$，並每天搭火車到城市 $Y$ 上學。假設出發時間點為 $0$，請輸出 $hamster$ 到達城市 $Y$ 的最早時間點。如果無法到達城市 $Y$，請輸出 $-1$。

$hamster$ 有瞬間搭火車的超能力，所以轉乘所需的時間可以忽略。

### ***Input***
$N\ M\ X\ Y$
$A_1\ B_1\ T_1\ K_1$
$A_2\ B_2\ T_2\ K_2$
.
.
.
$A_M\ B_M\ T_M\ K_M$


### ***Output***
$Ans$



<div class='page'>


### ***Sample Input 1***
```
3 2 1 3
1 2 2 3
2 3 3 4
```

### ***Sample Output***
```
7
```
在時間點 0 時，$hamster$ 透過鐵路 $1$ 從城市 $1$ 出發，並在時間點 2 時，抵達城市 $2$。

在時間點 4 時，他再透過鐵路 $2$，從城市 $2$ 前往城市 $3$。最後會在時間點 7 時，抵達城市 $3$。

### ***Sample Input 2***
```
3 2 3 1
1 2 2 3
2 3 3 4
```

### ***Sample Output 2***
```
5
```

### ***Sample Input 3***
```
3 0 3 1
```

### ***Sample Output 3***
```
-1
```


<div class='page'>


### ***Sample Input 4***
```
9 14 6 7
3 1 4 1
5 9 2 6
5 3 5 8
9 7 9 3
2 3 8 4
6 2 6 4
3 8 3 2
7 9 5 2
8 4 1 9
7 1 6 9
3 9 9 3
7 5 1 5
8 2 9 7
4 9 4 4
```

### ***Sample Output 4***
```
26
```


### ***Note***
* $2 \leq N \leq 10^5$
* $0 \leq M \leq 10^5$
* $1 \leq X,\ Y \leq N$
* $X \neq Y$
* $1 \leq A_i,\ B_i \leq N$
* $A_i \neq B_i$
* $1 \leq T_i,\ K_i \leq 10^9$
* 輸入皆為整數

### ***Subtask***
 - ***subtask***: $100\\%$ ***As statement***