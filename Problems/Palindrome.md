## **E. 迴文** ***<font color = '#AAAAAA'> Palindrome </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***

給定一棵以$0$為根的樹，每個邊上都會有一個**小寫字母**，求有幾個點對$(u, v)$使得：

- $u < v$
- 出現在 $u$ 到 $v$ 的簡單路徑的字母經由隨意排列後可以組成迴文

### ***Input***

$n$
$p_1, ..., p_{n-1}$
$s$

- $n$ 為樹的節點數量
- $p_i$為點$i$的父節點
- $s$為一字串
    - $s_i$ 為$(i, \; p_i)$之間所連的邊的**小寫字母**
    - $0$為根，因此可直接忽略$s_0$

### ***Output***

$ans$

- 符合上述條件的點對數量

### ***Sample Input***

```
6
0 0 1 1 2
acaabc
```

### ***Sample Output***

```
8
```

<div class='page'>


### ***Explanation***
![graph](https://hackmd.io/_uploads/rJ2wMS6DC.png)

- 點對$(3, 5)$即為答案之一，因為字串"$acac$"可以重新排列成迴文字串"$acca$"

### ***Note***

- $1 \le n \le 2 \times 10^5$
- $0 \le p_i \le n - 1$
- $|s| = n$, 且只包含**小寫字母**

### ***Subtask***

 - ***subtask1***: $5\\%$ $n \le 10^2$
 - ***subtask2***: $15\\%$ $n \le 10^3$
 - ***subtask3***: $80\\%$ ***As statement***
