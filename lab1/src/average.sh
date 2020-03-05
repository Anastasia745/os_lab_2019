#!/bin/bash
for (( i = 0; i < 150; i++ ))
do
    echo $RANDOM
done > numbers.txt

let sum=0
let k=0

while IFS= read -r n;
do
    sum=$((sum + $n))
    k=$((k + 1))
done < numbers.txt
echo $k
echo $((sum / k))
