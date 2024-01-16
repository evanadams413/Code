#!/bin/bash

read -p "123: " text 

echo $text
if [ $text = 1 ] || [ $text = 2 ]; then
    echo q
fi
