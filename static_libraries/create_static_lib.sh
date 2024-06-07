#!/bin/bash
if ls *.c &> /dev/null;
then gcc -c *.c
	ar rcs liball.a *.o
	echo "Yay you did it"
else 
	echo "IT FAILED"
fi
