#!/bin/bash
awk '{
average = ($2 + $3 + $3)/3;
if (average >= 80)
    print $0, ": A";
else if (average >= 60)
    print $0, ": B";
else if (average >= 50)
    print $0, ": C";
else
    print $0, ": FAIL";
}'
