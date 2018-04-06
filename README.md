# LCM-and-GCD
這次作業是算出兩數的最大公因數和最小公倍數，然而在尋找公式時，發現最大公因數，必須先解出來才可以計算出最小公倍數。

最大公因數是利用短除法

最小公倍數

第一個，兩個數相乘後除以最大公因數
![image](https://github.com/HaoWeiChang/LCM-and-GCD/blob/master/1.JPG)
第二個，兩個數短除法後剩餘的值相乘再乘上最大公因數
![image](https://github.com/HaoWeiChang/LCM-and-GCD/blob/master/2.JPG)
--------------------------------------------------------
問題

這次遇到的問題是不知道如何只用一個副程式將剩餘值提出而不用再從新寫一次GCD程式，減少程式碼。

而我的解決方式是因只需算兩數的最小公倍數，所以使用公式來快速算出程式不需要重新再複製一次GCD程式。
