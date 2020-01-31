## 190 Explaination

You are to find the the number that is represented by binary opposite(sequence) of the given number.

We need to only swap number from both ends until middle (16th position here).
We need no swap if the corresponding positions hold same number.
'1' is right shifted to get incremental powers of 2 (2^1,2^2, 2^3...).
'2147483648' is left shifted to get decremental power of 2 from 2^31.

Powers of 2 are chosen as in binary form, thy reporesent the following patern
 * ...0000001 = 1
 * ...0000010 = 2
 * ...0000100 = 4
 * ...0001000 = 8

 If you perform AND operation and the product are both 1 or 0 (in sequence) then no change is needed. If not, a swap is done using addition and subtraction in powers of 2.