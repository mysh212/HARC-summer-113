## **B. 找數對** ***<font color = '#AAAAAA'>Find pair</font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***
給定兩個由小到大的整數陣列 $nums1$ 和 $nums2$ ($num1\space num2 有相同陣列大小 n )$

以及一個整數 $k$ 

定義數對 $(num_i , num_j)$ 其中第一個元素来自 $nums1$，第二個元素来自 $nums2$

$(0\leq i\leq num1.size()-1)$ 且
$(0\leq j\leq num2.size()-1)$

總共會有 $n^2$ 個數對

數對的大小判斷標準如下:

1. 兩數對 $num_i+num_j$和 較小的視為較小的數對

2. 若兩數對 $num_i+num_j$和 相同，則 $i$ 較小的視為較小的數對

3. 若兩數對 $num_i+num_j$和 相同，且 $i$ 相同，則 $j$ 較小的視為較小的數對

請找到$num_i+num_j$第 $k$ 小的數對 

並輸出Ans = $num_i+num_j$ 



範例

$n=3$

$num1=[1,7,11]$

$nums2=[2,4,6]$

$k=3$

共有9個數對 $(1,2) (1,4) (1,6) (7,2) (7,4) (7,6) (11,2) (11,4) (11,6)$

取 $u,v$ 和第 $k$ 小 $(1,6)$

則$Ans=7$
### ***Input***
$n\space k$
$num1_0 \sim num1_{n-1}$
$num2_0 \sim num2_{n-1}$
### ***Output***
$Ans$

<div class='page'>




### ***Sample Input 1***
```
3 3
1 7 11
2 4 6
```


### ***Sample Output 1***
```
7
```

### ***Sample Input 2***
```
2 2
1 2
1 2
```


### ***Sample Output 2***
```
3
```

### ***Note***
$1 \leq n \leq 10^4$
$0 \leq nums1[i], nums2[i] \leq 10^{9}$
$1 \leq k \leq min(n*n,10^4)$


### ***Subtask***

 - ***subtask***: $100\\%$ ***As statement***