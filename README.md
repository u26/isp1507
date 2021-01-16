# isp1507

Insight SiP ISP1507ピッチ変換基板のArduinoの動作チェックプログラムです。

参考URL
https://mag.switch-science.com/2020/07/07/isp1507-arduino-ide/

<br>
<br>

## Arduino board manager
---
Adafruit uRF52 Board - Adafruuit Feather nRF52832
<br>
<br>


## I/O
---
ピン一覧
```
#define P0_02 2 // A0
#define P0_03 3 // A1
#define P0_06 6 // TX --- SERIAL RX
#define P0_07 7
#define P0_08 8 // RX --- SERIAL TX 

#define P0_04 4
#define P0_05 5

#define P0_11 11 // BoardのLED1赤
#define P0_28 28 // A4
#define P0_29 29 // A5
#define P0_30 30 // A6

```


I2Cのピンは出てません。  
P0.25 SDA  
P0.26 SCL
