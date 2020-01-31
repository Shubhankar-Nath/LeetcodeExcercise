## 453 Explaination

You are to +1 every digit except the last element, arranging the array in such a way that the largest element always stays at the end. You are now to count how many such +1 is needed to make every element equal.

If you solve it to a paper you will see that the iteration is equal to summation of nums[i] - min_nums. You can further solve by taking the commom term as sum of all digit - min_nums*no. of digits
