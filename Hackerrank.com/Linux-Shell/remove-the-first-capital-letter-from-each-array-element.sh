#!/bin/bash
while IFS= read -r line; do
    echo -n $line '' | sed 's/[A-Z]/./'
done
