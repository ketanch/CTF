Write for binary task1:
First condition terminates program if a<0 or a+15>0. So 'a' should be such that a+15 > INT_MAX which results in overflow and sets the sign bit to 1. The line b[i]=b[i] & 0xfffe makes numerical value of b[i] even. So we cannot select i to 10 so that '0' becomes '1'. Then there should be a other way. From assembly code it is clear that 'inp' is placed 16 bytes before 'res' and read function reads 0x20(32) characters in memory of inp instead of 10. So we can overflow the res buffer such that res becomes "FlagValue=1". Then again comes the b[i]=b[i] & 0xfffe condition. In "FlagValue=1", numeric value of 'F','l' and 'V' is even. So we can set z such that i points to either of these.
Hence here is the answer:
2147483640 (Taking the case when i=0)
kkkkkkkkkkkkkkkkFlagValue=1 (First 16 bytes can be any character)
