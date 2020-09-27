#!/bin/bash
IFS=$'\n'

./a.out Units/Units/character1.json Units/Units/character2.json >> generated_output.txt
./a.out Units/Units/character1.json Units/Units/character3.json >> generated_output.txt
./a.out Units/Units/character2.json Units/Units/character1.json >> generated_output.txt
./a.out Units/Units/character2.json Units/Units/character3.json >> generated_output.txt
./a.out Units/Units/character3.json Units/Units/character1.json >> generated_output.txt
./a.out Units/Units/character3.json Units/Units/character2.json >> generated_output.txt

cat generated_output.txt
