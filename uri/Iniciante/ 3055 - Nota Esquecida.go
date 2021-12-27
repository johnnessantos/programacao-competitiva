package main

import (
    "fmt"
)

func main() {
	var a, b, m int 

	fmt.Scan(&a, &m)

	b = 2*m - a
	fmt.Println(b)
}