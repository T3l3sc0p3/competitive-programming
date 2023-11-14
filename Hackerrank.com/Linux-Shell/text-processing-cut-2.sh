#!/bin/bash
while read -r line; do
    char2=$(echo "$line" | cut -c2)
    char7=$(echo "$line" | cut -c7)
    echo "$char2$char7"
done
