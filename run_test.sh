#!/bin/bash

IFS=$'\n'

for i in `cat input.txt`; do 
    echo $i | xargs ./a.out >> generated_output.txt
done
