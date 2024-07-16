# HARC 第二屆暑訓校內賽-題解

## **A. 黑閃爆炸** ***<font color = '#AAAAAA'> BF explode </font>***

> **出題** 
> ***hamster***

> **首殺** 
> **sh1ng**

> **提交次數** 
> ***50***

### ***subtask1***:  $20\\%$ 
照著題目敘述做2的n次方
順便用同餘處理
### ***subtask2***:  $80\\%$ 
2的n次方次方mode10的規律 -> 2 4 8 6
以n%4 == 0,1,2,3判斷的n次方mode10後的餘數
對於n過大以string储存
但只保留最後2個字元
因為n%4 == (n%100)%4
然後繼續以n%4 ==0,1,2,3判斷的n次方mode10後的餘數


## **B. 找數對** ***<font color = '#AAAAAA'> Find pair </font>***

> **出題** 
> ***hamster***

> **首殺** 
> **薛尹喆**

> **提交次數** 
> ***93***

### ***subtask1***:  $100\\%$ 
2分搜前k小數對的最大值
檢查符合條件數對的數量大於等於小於視情況把2分搜範圍更改
檢查符合條件數對的數量可以用2分搜或滑動視窗


## **C. 翻數字** ***<font color = '#AAAAAA'> Flip </font>***

> **出題** 
> ***ysh***

> **首殺** 
> ~~***MelonHiker***~~ **薛尹喆**

> **提交次數** 
> ***103***

### ***subtask1,2,3***:  $30\\%$ 

窮舉，使用唬爛大法通過(O


### ***subtask4,5,6***:  $70\\%$ 

首先，我們將題敘記錄如下:

 $$\left\\{
    \begin{matrix}
        n \equiv r & (mod\ a)\\
        n \equiv s & (mod\ b)
    \end{matrix}
\right.$$

不失一般性，我們令  $r < s$  ，則

 $$\left\\{
    \begin{matrix}
        n - r \equiv & 0 & (mod\ a)\\
        n - r \equiv & s - r & (mod\ b)
    \end{matrix}
\right.$$

所以我們可以構造

 $n = a \times k, k \in Z^{+}$ 

其中  $n = a \times k \equiv s - r\ (mod\ b)$ 

於是為了找到  $k$  符合上述條件，我們在  $[1,b]$  區間內窮舉  $k$  ，若仍找不到則可斷定 **合理的  $k$  不存在**

故可推知 **合理的  $n$  不存在**

> BTW. 其實 ***subtask6*** 只是讓你開 ***long long***





## **D. 星際旅行** ***<font color = '#AAAAAA'> Interstellar travel </font>***

> **出題** 
> ***MelonWalker***

> **首殺** 
> **Zhenzhe**

> **提交次數** 
> ***56***

### ***subtask1***:  $20\\%$ 
對每筆詢問都跑一遍 dfs 或 bfs 即可

### ***subtask2***:  $80\\%$ 
若將行星看作點，傳送路線看作邊，則可得出有 N 個點，N - 1 個邊的圖，又題目最後提到圖為連通圖，所以不難得出所給的圖是一棵樹，此時就變成樹上路徑問題，詳情請翻閱暑訓簡報 <<[樹演算法](https://docs.google.com/presentation/d/1BzAgCWGVnZeZWuNIVHAJsZ1WUZyzZkOmx3xf5ylLOmc/edit?usp=sharing)>> 裡的 LCA 章節。



## **E. 迴文** ***<font color = '#AAAAAA'> palindrome </font>***

> **出題** 
> ***Willy***

> **首殺** 
> **滅台**
> ****

> **提交次數** 
> ***3***

### ***subtask1 & 2***:  $20\\%$ 

暴力枚舉 $(u, v)$ 然後判斷是否符合條件。
時間複雜度為 $O(N^2)$ 

### ***subtask3***:  $80\\%$ 

- 一個路徑中的字母可以組成迴文若且唯若出現**次數為奇數的字母**不超過一個。

發現到對於任意點對 $(u, v)$ ，我們只在意每個字母出現次數的**奇偶性**，因此我們可以使用一個**26 bits 的整數**去紀錄字母出現次數的奇偶性。

-  $\text{mask[v]} :=$   $0$  到  $v$  路徑中字母奇偶性的 $\text{mask}$ 
-  $\text{mask of path (u, v)} = \text{mask[u]} \oplus \text{mask[v]}$ 

由上述的關係式即可使用  $\text{STL}$  來快速的計算出答案。
時間複雜度為  $O(|\Sigma| \times N logN)$ 



## **F. 鐵軌** ***<font color = '#AAAAAA'> Railway </font>***

> **出題** 
> ***ysh***

> **首殺** 
> **薛尹喆**

> **提交次數** 
> ***16***

### ***subtask1***:  $5\\%$ 

暴力解，對就這樣。


### ***subtask2,3***:  $15\\%$ 

列 ***DP*** 轉移式，也可以是 **暴力解** + ***DP*** **框架**


### ***subtask4,5,6***:  $80\\%$ 

使用矩陣快速冪。

> 其實 ***subtask6*** 也一樣只是讓你記得開 ***long long*** 而已



## **G. 總和** ***<font color = '#AAAAAA'> Sum = 1 </font>***

> **出題** 
> ***Willy***

> **首殺** 
> **楊勝皓想陳威任真打競程的電神**

> **提交次數** 
> ***60***

### ***Solution***:

結論:
- 答案為 $\text{Yes, iff }$  $gcd(a_1, a_2, ..., a_n) = 1$  ； 否則為 $\text{No}$ 




## **H. 火車** ***<font color = '#AAAAAA'> Train </font>***

> **出題** 
> ***MelonWalker***

> **首殺** 
> **薛尹喆**

> **提交次數** 
> ***5***

### ***subtask1***:  $100\\%$ 
將抵達時間當作距離，不難得出為最短路徑問題，此時只要多加上等車時間跑 dijkstra 即可。至於等車時間可以用  $(k - dist[u] \\% k) \\% k$  求得，最後還要再  $mod$  一次  $k$  是因為當抵達時間為  $k$  的倍數時，可以直接上車不用等下一班。
