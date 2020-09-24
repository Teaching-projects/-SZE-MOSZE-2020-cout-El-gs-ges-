#!/bin/bash

IFS = `\n`;
rm $2
for i in `cat input.txt` do;
    echo "$i" | ./$1 >> $2;
done