## **C. 翻數字** ***<font color = '#AAAAAA'> Flip </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***

$n = r\ (mod\ a)$
$= s\ (mod\ b)$

請找出 $min(n)$ ， 也就是 $n$ 的最小值，其中 $0 \leq n,n \in Z^{+}$


### ***Input***

$r$ $a$
$s$ $b$

### ***Output***

$n$

若 $n$ 無解，即不存在 $0 \leq n, n \in Z^{+}$ 能夠達成上述條件，則輸出 `-1` 。

### ***Sample Input***

```
3 5
2 7
```

### ***Sample Output***

```
23
```

### ***Note***

* $1 \leq a \leq 10^6$
* $1 \leq b \leq 10^9$
* $0 \leq r < a$
* $0 \leq s < b$

### ***Subtask***

 - ***subtask1***: $10\\%$ $a,b \leq 10$
 - ***subtask2***: $10\\%$ $a,b \leq 100$
 - ***subtask3***: $10\\%$ $a,b \leq 10^3$
 - ***subtask4***: $20\\%$ $a \leq 10^3, b \leq 10^4$
 - ***subtask5***: $20\\%$ $a \leq 10^3,b \leq 10^7$
 - ***subtask6***: $30\\%$ ***As statement***
