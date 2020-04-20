## 1248 Explaination

Here we need to store the indexes of all the odd numbers present in the given array. From that we can get how many even number occur in between. So total possible numbers are the count of even numbers before the *1st* odd number multiplied by the number of even number beteween *k* and *k+1*.
Then we simply extend the idead to slide to *2nd* odd number and *k+1*.