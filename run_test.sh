#!/bin/bash

IFS = `\n`;
rm $2
for i in `cat input.txt` do;
    echo "$i" | ./$1 >> $2;
done

diff $2 good_output.txt

if [ $? -eq 0 ]
then
echo "Good"
else
echo "Fail"
fi