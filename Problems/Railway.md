## **F. 鐵軌** ***<font color = '#AAAAAA'> Railway </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***

***ysh*** 來到了一個荒涼的都市 -- ***Tanan*** **市**

這個城市竟然沒有捷運!
而且公車從來沒準時過!

在這雙重打擊之下， ***ysh*** 決定來蓋捷運......

首先， ***ysh*** 把這個城市分成 $2 \times n$ 個區塊，
打算使用兩種鐵道來建造捷運：

 - 斜鐵道

![圖片](https://hackmd.io/_uploads/H1HwRY6DC.png)

 - 直鐵道

![圖片](https://hackmd.io/_uploads/SJrF0FpvC.png)


並且制定了以下規則：

 - 每個城市皆必須至少有一條鐵路經過
 - 鐵路不可以斷掉，也不可以分岔
 - 鐵路們不可以交叉
 - 鐵路必須形成一個環，即沿著鐵路走會回到原點
 - 對於每條鐵路路線，只能使用一次斜鐵路

舉個例子，
當 $n = 4$ 時，只有以下共 $6$ 種建造方法是合理的:

![圖片](https://hackmd.io/_uploads/ByHHyq6vC.png)

現在 ***ysh*** 非常好奇總共有幾種方法可以建造鐵路，請你計算出方法數除以 $10^9 + 7$ 的餘數。

### ***Input***

$n$

### ***Output***

$Ans$

其中 $Ans$ 為總方法數除以 $10^9 + 7$ 的餘數。

### ***Sample Input 1***

```
3
```

### ***Sample Output 1***

```
3
```

### ***Sample Input 2***

```
10
```

### ***Sample Output 2***

```
686
```

### ***Sample Input 3***

```
327
```

### ***Sample Output 3***

```
265488547
```

### ***Note***

 - $1 \leq n \leq 10^{18}$

### ***Subtask***

 - ***subtask1***: $5\%$ $n \leq 10$
 - ***subtask2***: $5\%$ $n \leq 10^3$
 - ***subtask3***: $10\%$ $n \leq 10^5$
 - ***subtask4***: $10\%$ $n \leq 10^7$
 - ***subtask5***: $20\%$ $n \leq 10^9$
 - ***subtask6***: $50\%$ ***As statement***