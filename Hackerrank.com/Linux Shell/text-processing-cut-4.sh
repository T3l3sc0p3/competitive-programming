#!/bin/bash
while read -r line; do
    first_four=$(echo "$line" | cut -c-4)
    echo "$first_four"
done
