package main

import (
	"fmt"
)

func romanToInt(s string) int {
    valueMap := map[rune]int{
		'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000,
	}
	sum:=0
	var prevC rune
	for i,c:=range s{
		sum+=valueMap[c]
		if i>0{
			prevC=  (rune)(s[i-1])
			if valueMap[c]>valueMap[prevC]{
				sum-=valueMap[prevC]
				sum-=valueMap[prevC]
			}
		}
	}
	return sum
}

func main(){
	var1:="III"
	var2:="IV"
	var4:="LVIII"
	var5:="MCMXCIV"
	fmt.Println("Solution to 1:", romanToInt(var1))
	fmt.Println("Solution to 2:", romanToInt(var2))
	fmt.Println("Solution to 4:", romanToInt(var4))
	fmt.Println("Solution to 5:", romanToInt(var5))
}