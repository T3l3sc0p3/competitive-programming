#!/bin/bash
s=0; read n
for ((i=0;i<$n;i++)); do
    read tmp
    s=$((s+tmp))
done
printf %.3f $(echo $s/$n | bc -l)
