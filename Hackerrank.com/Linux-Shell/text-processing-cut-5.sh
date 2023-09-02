#!/bin/bash
while read -r line; do
    three_fields=$(echo "$line" | cut -f1-3)
    echo $three_fields
done
