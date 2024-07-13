# **2024 彰中資訊夏令營 校內競賽**

## **試場規則**

### **賽制**

 - 本次競賽採`OI`制度，有部分分，無罰時，並取每筆提交的子題聯集為總分。
   - 例如：某題共有兩筆提交，第一筆通過子測資 $\\{1,2\\}$ 、第二筆通過子測資 $\\{2,3\\}$ ，則總分為第 $\\{1,2,3\\}$ 筆子測資的分數相加。
 - 本次為封板賽，記分板將在比賽結束後公布。
 - 競賽結束後會做一次***System test***(系統測試)，所有成績以其為準。
 - 提交的冷卻時間(CD time)為 $15$ 秒，最後 $30$ 分鐘不在此限。
 - 對於每一題，使用者最多可以進行 $100$ 筆提交。

### **系統使用說明**

 - 系統連結: [http://192.168.8.1](http://192.168.8.1/)
 - 競賽將在 ***2024/07/12 9:00 A.M.*** 開始，並於 ***2024/01/26 03:10 P.M.*** 結束，競賽時長為嚴格 **5小時** ，使用者有十分鐘的時間閱讀試場規則，確認讀畢後請按下系統上的開始鈕，以免影響競賽時間。
 - 總題本在第***A***題的題目敘述頁面中。
 - 若結果為***Execution timed out (wall clock limit exceeded)***，則表示系統因為某筆提交繁忙中，請檢查你的程式碼使否有可能超過執行時間，並稍後再試。
 - 對於每筆提交，請確認副檔名符合系統要求，詳見系統頁面。
 - 如有題目問題，請使用系統提供的訊息詢問功能提問。
 - 如有其他問題，如：上廁所、需要計算紙、系統使用問題等，請直接舉手向監考老師發問。

### **資源**

 - 網址：
   - [HARC Discord](https://2120.page.link/HARC)
   - [彰中資訊社Discord](https://2120.page.link/cdc)

<div class='page'>

## **A. 黑閃爆炸** ***<font color = '#AAAAAA'> BF explode </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***
揍術迴戰的主角唬障為了打敗宿攤

需要透過擊出多次黑閃恢復輸出效率

每擊出一次輸出效率就會翻倍

唬障原本的輸出效率會是1點

這時如果打出3發黑閃輸出效率會是8點

唬障共會打出 $n$ 發黑閃

由於唬障與宿攤已經從上次 $HARC$ 線上賽打到現在

n變得極大 $0 \leq n \leq 10^{10^{8}}$

但宿攤在最後打出世界斬 

將其輸出效率模除10

如原本16 -> 6

請你算出唬障最後的輸出效率 $Ans$




### ***Input***
$n$
### ***Output***
$Ans$


<div class='page'>



### ***Sample Input 1***
```
5
```


### ***Sample Output 1***
```
2
```

### ***Sample Input 2***
```
100
```


### ***Sample Output 2***
```
6
```

### ***Note***
$0 \leq n \leq 10^{10^{8}}$
你該不會以為是假的吧.w.


### ***Subtask***

 - ***subtask1***: $20\\%$ $1\leq  n \leq 10^{18}$
 - ***subtask2***: $80\\%$ ***As statement***




<div class='page'>

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

<div class='page'>

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


<div class='page'>

## **D. 星際旅行** ***<font color = '#AAAAAA'> Interstellar Travel </font>***

`time limit` 2s
`memory limit` 256MB

### ***Statement***
在西元 4202 年，人類成功利用傳送門實現星際旅行。由於一次傳送費用不小，所以 $MelonWalker$ 想知道兩顆行星之間所需最少傳送次數。不過因為 $MelonWalker$ 很懶，於是他想寫一個程式來自動得出答案，但他懶到連程式都懶得寫了，所以他將這份工作外包給你。

第一行為兩個整數 $N$ $Q$ 代表行星數目與詢問次數，並且行星以編號 $1,2,\ldots,N$ 表示。

接下來有 $N-1$ 行，每行以 $U_i\ V_i$ 表示，代表行星 $U_i$ 與行星 $V_i$ 之間有一座傳送門連接，傳送門為雙向可通行。

最後有 $Q$ 筆詢問，每筆詢問以 $A_i\ B_i$ 表示，代表詢問行星 $A_i$ 到行星 $B_i$ 最少傳送次數為何？

這裡保證任意兩星球皆可透過一個或多個傳送門到達。

### ***Input***
$N\ Q$
$U_1\ V_1$
$U_2\ V_2$
.
.
.
$U_{N-1}\ V_{N-1}$
$A_1\ B_2$
$A_2\ B_2$
.
.
.
$A_q\ B_q$


### ***Output***
$Ans_1$
$Ans_2$
.
.
.
$Ans_3$

<div class='page'>




### ***Sample Input***
```
5 3
1 2
1 3
3 4
3 5
1 3
2 5
1 4
```

### ***Sample Output***
```
1
3
2
```


### ***Note***
* $1 \leq N,\ Q \leq 2 \times 10^5$
* $1 \leq A_i,\ B_i \leq n$

### ***Subtask***

 - ***subtask1***: $20\\%$ $\ N,\ Q \leq 10$
 - ***subtask2***: $80\\%$ ***As statement***

<div class='page'>

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


<div class='page'>

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

<div class='page'>

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


<div class='page'>

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
