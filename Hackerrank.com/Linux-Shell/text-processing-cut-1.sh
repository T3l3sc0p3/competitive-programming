#!/bin/bash
while read -r line; do
    char3=$(echo "$line" | cut -c3)
    echo "$char3"
done
