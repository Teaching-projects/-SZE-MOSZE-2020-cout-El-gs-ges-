#!/bin/bash

IFS=$'\n'

rm generated_output.txt

for i in `cat input.txt`; do 
    echo $i | ./$1 >> generated_output.txt
done
