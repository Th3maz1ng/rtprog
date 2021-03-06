# PIC32MX support

PIC32MX family is the first 32 bits Microchip range. All of them 

This family is spitted into multiple sub-families :

* MX1 / MX2: lower CPU power, USB on MX2xx, low pin count available
* MX3 / MX4: two CPU speed available (105 or 150DMIP)
* MX5: USB and CAN com, large memory
* MX6: USB and ethernet com, large memory
* MX7: USB, 2 CAN and ethernet com, large memory

## Main features

|Feature|MX1 / MX2|MX3 / MX4|MX5|MX6|MX7|
|-------|:-------:|:-------:|:-:|:-:|:-:|
|Core|32 bits|32 bits|32 bits|32 bits|32 bits|
|Performance|83 DMIPS|105-150 DMIPS|105 DMIPS|105 DMIPS|105 DMIPS|
|Program memory|16kb - 512kb|32kb - 512kb|64kb - 512kb|64kb - 512kb|128kb - 512kb|
|Data memory|4kb - 64kb|8kb - 128kb|16kb - 64kb|32kb - 128kb|32kb - 128kb|
|Pins|28-100|64-121|64-100|64-100|64-100|

## Devices list

128 devices on november 2017.

### MX1 / MX2 devices

|MX1 / MX2 Compatible devices|Program|Data|Pins|
|---------|--:|--:|--:|
|[PIC32MX110F016B](http://microchip.com/wwwproducts/en/PIC32MX110F016B)|16 kb | 4 kb| 28|
|[PIC32MX110F016C](http://microchip.com/wwwproducts/en/PIC32MX110F016C)|16 kb | 4 kb| 36|
|[PIC32MX110F016D](http://microchip.com/wwwproducts/en/PIC32MX110F016D)|16 kb | 4 kb| 44|
|[PIC32MX120F032B](http://microchip.com/wwwproducts/en/PIC32MX120F032B)|32 kb | 8 kb| 28|
|[PIC32MX120F032C](http://microchip.com/wwwproducts/en/PIC32MX120F032C)|32 kb | 8 kb| 36|
|[PIC32MX120F032D](http://microchip.com/wwwproducts/en/PIC32MX120F032D)|32 kb | 8 kb| 44|
|[PIC32MX130F064B](http://microchip.com/wwwproducts/en/PIC32MX130F064B)|64 kb |16 kb| 28|
|[PIC32MX130F064C](http://microchip.com/wwwproducts/en/PIC32MX130F064C)|64 kb |16 kb| 36|
|[PIC32MX130F064D](http://microchip.com/wwwproducts/en/PIC32MX130F064D)|64 kb |16 kb| 44|
|[PIC32MX130F256B](http://microchip.com/wwwproducts/en/PIC32MX130F256B)|256 kb|16 kb| 28|
|[PIC32MX130F256D](http://microchip.com/wwwproducts/en/PIC32MX130F256D)|256 kb|16 kb| 44|
|[PIC32MX150F128B](http://microchip.com/wwwproducts/en/PIC32MX150F128B)|128 kb|16 kb| 28|
|[PIC32MX150F128C](http://microchip.com/wwwproducts/en/PIC32MX150F128C)|128 kb|16 kb| 36|
|[PIC32MX150F128D](http://microchip.com/wwwproducts/en/PIC32MX150F128D)|128 kb|16 kb| 44|
|[PIC32MX154F128B](http://microchip.com/wwwproducts/en/PIC32MX154F128B)|128 kb|32 kb| 28|
|[PIC32MX154F128D](http://microchip.com/wwwproducts/en/PIC32MX154F128D)|128 kb|32 kb| 44|
|[PIC32MX155F128B](http://microchip.com/wwwproducts/en/PIC32MX155F128B)|128 kb|32 kb| 28|
|[PIC32MX155F128D](http://microchip.com/wwwproducts/en/PIC32MX155F128D)|128 kb|32 kb| 44|
|[PIC32MX170F256B](http://microchip.com/wwwproducts/en/PIC32MX170F256B)|256 kb|64 kb| 28|
|[PIC32MX170F256D](http://microchip.com/wwwproducts/en/PIC32MX170F256D)|256 kb|64 kb| 44|
|[PIC32MX174F256B](http://microchip.com/wwwproducts/en/PIC32MX174F256B)|256 kb|64 kb| 28|
|[PIC32MX174F256D](http://microchip.com/wwwproducts/en/PIC32MX174F256D)|256 kb|64 kb| 44|
|[PIC32MX175F256B](http://microchip.com/wwwproducts/en/PIC32MX175F256B)|256 kb|64 kb| 28|
|[PIC32MX175F256D](http://microchip.com/wwwproducts/en/PIC32MX175F256D)|256 kb|64 kb| 44|
|[PIC32MX210F016B](http://microchip.com/wwwproducts/en/PIC32MX210F016B)|16 kb | 4 kb| 28|
|[PIC32MX210F016C](http://microchip.com/wwwproducts/en/PIC32MX210F016C)|16 kb | 4 kb| 36|
|[PIC32MX210F016D](http://microchip.com/wwwproducts/en/PIC32MX210F016D)|16 kb | 4 kb| 44|
|[PIC32MX220F032B](http://microchip.com/wwwproducts/en/PIC32MX220F032B)|32 kb | 8 kb| 28|
|[PIC32MX220F032C](http://microchip.com/wwwproducts/en/PIC32MX220F032C)|32 kb | 8 kb| 36|
|[PIC32MX220F032D](http://microchip.com/wwwproducts/en/PIC32MX220F032D)|32 kb | 8 kb| 44|
|[PIC32MX230F064B](http://microchip.com/wwwproducts/en/PIC32MX230F064B)|64 kb |16 kb| 28|
|[PIC32MX230F064C](http://microchip.com/wwwproducts/en/PIC32MX230F064C)|64 kb |16 kb| 36|
|[PIC32MX230F064D](http://microchip.com/wwwproducts/en/PIC32MX230F064D)|64 kb |16 kb| 44|
|[PIC32MX230F256B](http://microchip.com/wwwproducts/en/PIC32MX230F256B)|256 kb|16 kb| 28|
|[PIC32MX230F256D](http://microchip.com/wwwproducts/en/PIC32MX230F256D)|256 kb|16 kb| 44|
|[PIC32MX250F128B](http://microchip.com/wwwproducts/en/PIC32MX250F128B)|128 kb|32 kb| 28|
|[PIC32MX250F128C](http://microchip.com/wwwproducts/en/PIC32MX250F128C)|128 kb|32 kb| 36|
|[PIC32MX250F128D](http://microchip.com/wwwproducts/en/PIC32MX250F128D)|128 kb|32 kb| 44|
|[PIC32MX254F128B](http://microchip.com/wwwproducts/en/PIC32MX254F128B)|128 kb|32 kb| 28|
|[PIC32MX254F128D](http://microchip.com/wwwproducts/en/PIC32MX254F128D)|128 kb|32 kb| 44|
|[PIC32MX255F128B](http://microchip.com/wwwproducts/en/PIC32MX255F128B)|128 kb|32 kb| 28|
|[PIC32MX255F128D](http://microchip.com/wwwproducts/en/PIC32MX255F128D)|128 kb|32 kb| 28|
|[PIC32MX270F256B](http://microchip.com/wwwproducts/en/PIC32MX270F256B)|256 kb|64 kb| 28|
|[PIC32MX270F256D](http://microchip.com/wwwproducts/en/PIC32MX270F256D)|256 kb|64 kb| 44|
|[PIC32MX274F256B](http://microchip.com/wwwproducts/en/PIC32MX274F256B)|256 kb|64 kb| 28|
|[PIC32MX274F256D](http://microchip.com/wwwproducts/en/PIC32MX274F256D)|256 kb|64 kb| 44|
|[PIC32MX275F256B](http://microchip.com/wwwproducts/en/PIC32MX275F256B)|256 kb|64 kb| 28|
|[PIC32MX275F256D](http://microchip.com/wwwproducts/en/PIC32MX275F256D)|256 kb|64 kb| 44|
|[PIC32MX120F064H](http://microchip.com/wwwproducts/en/PIC32MX120F064H)| 64 kb| 8 kb| 64|
|[PIC32MX130F128H](http://microchip.com/wwwproducts/en/PIC32MX130F128H)|128 kb|16 kb| 64|
|[PIC32MX130F128L](http://microchip.com/wwwproducts/en/PIC32MX130F128L)|128 kb|16 kb|100|
|[PIC32MX150F256H](http://microchip.com/wwwproducts/en/PIC32MX150F256H)|256 kb|32 kb| 64|
|[PIC32MX150F256L](http://microchip.com/wwwproducts/en/PIC32MX150F256L)|256 kb|32 kb|100|
|[PIC32MX170F512H](http://microchip.com/wwwproducts/en/PIC32MX170F512H)|512 kb|64 kb| 64|
|[PIC32MX170F512L](http://microchip.com/wwwproducts/en/PIC32MX170F512L)|512 kb|64 kb|100|
|[PIC32MX230F128H](http://microchip.com/wwwproducts/en/PIC32MX230F128H)|128 kb|16 kb| 64|
|[PIC32MX230F128L](http://microchip.com/wwwproducts/en/PIC32MX230F128L)|128 kb|32 kb|100|
|[PIC32MX250F256H](http://microchip.com/wwwproducts/en/PIC32MX250F256H)|256 kb|32 kb| 64|
|[PIC32MX250F256L](http://microchip.com/wwwproducts/en/PIC32MX250F256L)|256 kb|32 kb|100|
|[PIC32MX270F512H](http://microchip.com/wwwproducts/en/PIC32MX270F512H)|512 kb|64 kb| 64|
|[PIC32MX270F512L](http://microchip.com/wwwproducts/en/PIC32MX270F512L)|512 kb|64 kb|100|

### MX3 / MX4 devices

|MX3 / MX4 Compatible devices|Program|Data|Pins|
|---------|--:|--:|--:|
|[PIC32MX320F032H](http://microchip.com/wwwproducts/en/PIC32MX320F032H)| 32 kb|  8 kb| 64|
|[PIC32MX320F064H](http://microchip.com/wwwproducts/en/PIC32MX320F064M)| 64 kb| 16 kb| 64|
|[PIC32MX320F128H](http://microchip.com/wwwproducts/en/PIC32MX320F128M)|128 kb| 16 kb| 64|
|[PIC32MX320F128L](http://microchip.com/wwwproducts/en/PIC32MX320F128L)|128 kb| 16 kb|100|
|[PIC32MX330F064H](http://microchip.com/wwwproducts/en/PIC32MX330F064M)| 64 kb| 32 kb| 64|
|[PIC32MX330F064L](http://microchip.com/wwwproducts/en/PIC32MX330F064L)| 64 kb| 32 kb|100|
|[PIC32MX340F128H](http://microchip.com/wwwproducts/en/PIC32MX340F128M)|128 kb| 32 kb| 64|
|[PIC32MX340F128L](http://microchip.com/wwwproducts/en/PIC32MX340F128L)|128 kb| 32 kb|100|
|[PIC32MX340F256H](http://microchip.com/wwwproducts/en/PIC32MX340F256M)|256 kb| 32 kb| 64|
|[PIC32MX340F512H](http://microchip.com/wwwproducts/en/PIC32MX340F512M)|512 kb| 32 kb| 64|
|[PIC32MX350F128H](http://microchip.com/wwwproducts/en/PIC32MX350F128M)|128 kb| 32 kb| 64|
|[PIC32MX350F128L](http://microchip.com/wwwproducts/en/PIC32MX350F128L)|128 kb| 32 kb|100|
|[PIC32MX350F256H](http://microchip.com/wwwproducts/en/PIC32MX350F256M)|256 kb| 64 kb| 64|
|[PIC32MX350F256L](http://microchip.com/wwwproducts/en/PIC32MX350F256L)|256 kb| 64 kb|100|
|[PIC32MX360F256L](http://microchip.com/wwwproducts/en/PIC32MX360F256L)|256 kb| 32 kb|100|
|[PIC32MX360F512L](http://microchip.com/wwwproducts/en/PIC32MX360F512L)|512 kb| 32 kb|100|
|[PIC32MX370F512H](http://microchip.com/wwwproducts/en/PIC32MX370F512M)|512 kb|128 kb| 64|
|[PIC32MX370F512L](http://microchip.com/wwwproducts/en/PIC32MX370F512L)|512 kb|128 kb|100|
|[PIC32MX420F032H](http://microchip.com/wwwproducts/en/PIC32MX420F032M)| 32 kb|  8 kb| 64|
|[PIC32MX430F064H](http://microchip.com/wwwproducts/en/PIC32MX430F064M)| 64 kb| 32 kb| 64|
|[PIC32MX430F064L](http://microchip.com/wwwproducts/en/PIC32MX430F064L)| 64 kb| 32 kb|100|
|[PIC32MX440F128H](http://microchip.com/wwwproducts/en/PIC32MX440F128M)|128 kb| 32 kb| 64|
|[PIC32MX440F128L](http://microchip.com/wwwproducts/en/PIC32MX440F128L)|128 kb| 32 kb|100|
|[PIC32MX440F256H](http://microchip.com/wwwproducts/en/PIC32MX440F256M)|256 kb| 32 kb| 64|
|[PIC32MX440F512H](http://microchip.com/wwwproducts/en/PIC32MX440F512M)|512 kb| 32 kb| 64|
|[PIC32MX450F128H](http://microchip.com/wwwproducts/en/PIC32MX450F128M)|128 kb| 32 kb| 64|
|[PIC32MX450F128L](http://microchip.com/wwwproducts/en/PIC32MX450F128L)|128 kb| 32 kb|100|
|[PIC32MX450F256H](http://microchip.com/wwwproducts/en/PIC32MX450F256M)|256 kb| 64 kb| 64|
|[PIC32MX450F256L](http://microchip.com/wwwproducts/en/PIC32MX450F256L)|256 kb| 32 kb|100|
|[PIC32MX460F256L](http://microchip.com/wwwproducts/en/PIC32MX460F256L)|256 kb| 32 kb|100|
|[PIC32MX460F512L](http://microchip.com/wwwproducts/en/PIC32MX460F512L)|512 kb| 32 kb|100|
|[PIC32MX470F512H](http://microchip.com/wwwproducts/en/PIC32MX470F512M)|512 kb|128 kb| 64|
|[PIC32MX470F512L](http://microchip.com/wwwproducts/en/PIC32MX470F512L)|512 kb|128 kb|100|

### MX5 devices

|MX5 Compatible devices|Program|Data|Pins|
|---------|--:|--:|--:|
|[PIC32MX530F128H](http://microchip.com/wwwproducts/en/PIC32MX530F128M)|128 kb|16 kb| 64|
|[PIC32MX530F128L](http://microchip.com/wwwproducts/en/PIC32MX530F128L)|128 kb|16 kb|100|
|[PIC32MX534F064H](http://microchip.com/wwwproducts/en/PIC32MX534F064M)| 64 kb|16 kb| 64|
|[PIC32MX534F064L](http://microchip.com/wwwproducts/en/PIC32MX534F064L)| 64 kb|16 kb|100|
|[PIC32MX550F256H](http://microchip.com/wwwproducts/en/PIC32MX550F256M)|256 kb|32 kb| 64|
|[PIC32MX550F256L](http://microchip.com/wwwproducts/en/PIC32MX550F256L)|256 kb|32 kb|100|
|[PIC32MX564F064H](http://microchip.com/wwwproducts/en/PIC32MX564F064M)| 64 kb|32 kb| 64|
|[PIC32MX564F064L](http://microchip.com/wwwproducts/en/PIC32MX564F064L)| 64 kb|32 kb|100|
|[PIC32MX564F128H](http://microchip.com/wwwproducts/en/PIC32MX564F128M)|128 kb|32 kb| 64|
|[PIC32MX564F128L](http://microchip.com/wwwproducts/en/PIC32MX564F128L)|128 kb|32 kb|100|
|[PIC32MX570F512H](http://microchip.com/wwwproducts/en/PIC32MX570F512M)|512 kb|64 kb| 64|
|[PIC32MX570F512L](http://microchip.com/wwwproducts/en/PIC32MX570F512L)|512 kb|64 kb|100|
|[PIC32MX575F256H](http://microchip.com/wwwproducts/en/PIC32MX575F256M)|256 kb|64 kb| 64|
|[PIC32MX575F256L](http://microchip.com/wwwproducts/en/PIC32MX575F256L)|256 kb|64 kb|100|
|[PIC32MX575F512H](http://microchip.com/wwwproducts/en/PIC32MX575F512M)|512 kb|64 kb| 64|
|[PIC32MX575F512L](http://microchip.com/wwwproducts/en/PIC32MX575F512L)|512 kb|64 kb|100|

### MX6 devices

|MX6 Compatible devices|Program|Data|Pins|
|---------|--:|--:|--:|
|[PIC32MX664F064H](http://microchip.com/wwwproducts/en/PIC32MX664F064M)| 64 kb| 32 kb| 64|
|[PIC32MX664F064L](http://microchip.com/wwwproducts/en/PIC32MX664F064L)| 64 kb| 32 kb|100|
|[PIC32MX664F128H](http://microchip.com/wwwproducts/en/PIC32MX664F128M)|128 kb| 32 kb| 64|
|[PIC32MX664F128L](http://microchip.com/wwwproducts/en/PIC32MX664F128L)|128 kb| 32 kb|100|
|[PIC32MX675F256H](http://microchip.com/wwwproducts/en/PIC32MX675F256M)|256 kb| 64 kb| 64|
|[PIC32MX675F256L](http://microchip.com/wwwproducts/en/PIC32MX675F256L)|256 kb| 64 kb|100|
|[PIC32MX675F512H](http://microchip.com/wwwproducts/en/PIC32MX675F512M)|512 kb| 64 kb| 64|
|[PIC32MX675F512L](http://microchip.com/wwwproducts/en/PIC32MX675F512L)|512 kb| 64 kb|100|
|[PIC32MX695F512H](http://microchip.com/wwwproducts/en/PIC32MX695F512M)|512 kb|128 kb| 64|
|[PIC32MX695F512L](http://microchip.com/wwwproducts/en/PIC32MX695F512L)|512 kb|128 kb|100|

### MX7 devices

|MX7 Compatible devices|Program|Data|Pins|
|---------|--:|--:|--:|
|[PIC32MX764F128H](http://microchip.com/wwwproducts/en/PIC32MX764F128M)|128 kb| 32 kb| 64|
|[PIC32MX764F128L](http://microchip.com/wwwproducts/en/PIC32MX764F128L)|128 kb| 32 kb|100|
|[PIC32MX775F256H](http://microchip.com/wwwproducts/en/PIC32MX775F256M)|256 kb| 64 kb| 64|
|[PIC32MX775F256L](http://microchip.com/wwwproducts/en/PIC32MX775F256L)|256 kb| 64 kb|100|
|[PIC32MX775F512H](http://microchip.com/wwwproducts/en/PIC32MX775F512M)|512 kb| 64 kb| 64|
|[PIC32MX775F512L](http://microchip.com/wwwproducts/en/PIC32MX775F512L)|512 kb| 64 kb|100|
|[PIC32MX795F512H](http://microchip.com/wwwproducts/en/PIC32MX795F512M)|512 kb|128 kb| 64|
|[PIC32MX795F512L](http://microchip.com/wwwproducts/en/PIC32MX795F512L)|512 kb|128 kb|100|
