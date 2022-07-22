#!/bin/bash

cRun() {
    name=$1 && clang ${name}.c -o ${name}.o && ./${name}.o
}
