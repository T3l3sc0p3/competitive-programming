#!/bin/bash
read x
read y 
read z

if (($x == $y && $y == $z));then
# Equilateral triangle where all sides are equal
echo "EQUILATERAL"
elif (($x == $y || $y == $z || $x == $z ));then
# Isosceles triangle where two sides are equal
echo "ISOSCELES"
else
# Scalene triangle where no sides are equal
echo "SCALENE"
fi
