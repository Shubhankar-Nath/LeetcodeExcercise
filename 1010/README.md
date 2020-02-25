## 1010 Explaination

Have a placeholder array which will strore the frequency of remainder when any number in the array is divisible by 60.
Now the pairs whose sum is 60, that is the remainders sum upto 60 should be counted. There are two cases in this, if the remainders are 30 or 0 then they will make a pair with themselves. So nC2, for the frequency. For the other case the numbers will make pattern in the pattern like 10 with 50, 11 with 49, 12 with 48 and so on..
Sum both of the cases and the return the result