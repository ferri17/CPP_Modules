#!/bin/bash
x=0

while [ $x -le 100 ]
do
  ARG=`seq 1 10 | sort -R | tr "\n" " "`;
  ./PmergeMe $ARG
  x=$(( $x + 1 ))
done
