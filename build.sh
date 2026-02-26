#!/bin/bash

echo "Compiling project..."

gcc main.c -o game $(pkg-config --cflags --libs raylib)

if [ $? -eq 0 ]; then
    echo "Build successful!"
    echo "Running game..."
    ./game
else
    echo "Build failed."
fi