## **G. 總和** ***<font color = '#AAAAAA'> Sum = 1 </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***

給定一個由正整數組成的數組$A$。你的任務是從 $A$ 中選擇一些元素的子集，將每個元素乘以一個整數並將所有這些數字相加。如果你可以通過任何可能的**子集**和**乘數**獲得總和為 1，則稱該數組為「好的」。

### ***Input***

$N$
$A_1, A_2, ..., A_N$

### ***Output***

如果存在滿足條件的**子集**和**乘數**，則輸出```Yes```；否則輸出```No```


<div class='page'>


### ***Sample Input 1***

```
4
12 5 7 3
```

### ***Sample Output 1***

```
Yes
```

#### ***Explanation***

- 可以選定```5, 7```兩個數字並分別呈上```3```和```-2```，總和為$5 \times 3 - 7 \times (-2) = 1$

### ***Sample Input 2***

```
3
3 6 9
```

### ***Sample Output 2***

```
No
```

### ***Note***

- $1 \le N \le 10^5$
- $1 \le A_i \le 10^9$

### ***Subtask***

 - ***subtask1***: $1\\%$ $A_i$ 皆為**偶數**
 - ***subtask2***: $99\\%$ ***As statement***
