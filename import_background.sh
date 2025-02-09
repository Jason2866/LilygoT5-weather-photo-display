#!/bin/sh

function make_dot_h() {
    name=$(basename $1)
    name=${name%.*}

    out="src/$name.png"
    h_out="src/images/$name.h"
    convert "$1" -background white -flatten -alpha off -colors 16 "$out"
    python ./lib/epdiy/epdiy/scripts/imgconvert.py -i "$out" -o "$h_out" -n "$name"
    rm "$out"
}

if [ -z "$1" ]; then

    for fname in images/*.png; do
        echo "$fname..."
        make_dot_h "$fname"
    done
else
    make_dot_h $*
fi
