#!/bin/sh


touch generated_output.txt

./a.out Units/character1.json Units/character2.json >> generated_output.txt
./a.out Units/character1.json Units/character3.json >> generated_output.txt
./a.out Units/character2.json Units/character1.json >> generated_output.txt
./a.out Units/character2.json Units/character3.json >> generated_output.txt
./a.out Units/character3.json Units/character1.json >> generated_output.txt
./a.out Units/character3.json Units/character2.json >> generated_output.txt
