#!/bin/bash
while read -r line; do
    char3=$(echo "$line" | cut -c2-7)
    echo "$char3"
done
