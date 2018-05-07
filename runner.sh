#!/bin/bash

# command="./graphGenerate 1000 50"
# for (( i = 0; i < 100; i++ )); do
# 	$command > "Graphs/inp$i.txt"
# done

l=1
file=Graphs/inp.txt

gcc -fopenmp bfs_parallel.c -o parallel
for (( k = 0; k < 50; k++ )); do
	#statements
	./parallel < "$file" >> out"$l".txt
done
	awk '{ sum += $1; } END { print sum/50; }' "out$l.txt"
