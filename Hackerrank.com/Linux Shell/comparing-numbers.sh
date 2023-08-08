#!/bin/bash
read x
read y
# -lt is an acronym for less than
if [ $x -lt $y ];then
echo "X is less than Y"
# -gt is an acronym for greater than (-eq is an acronym for equal btw)
elif [ $x -gt $y ];then
echo "X is greater than Y"
else
echo "X is equal to Y"
fi
