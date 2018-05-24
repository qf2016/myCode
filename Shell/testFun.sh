#!/bin/bash
while getopts ivh name
do
  case $name in
    i)iopt=1;;
    v)vopt=1;;
    h)hopt=1;;
    *)echo "Invalid arg"
  esac
done

fun1(){
    echo "is fun1"
}

fun2(){
    echo "is fun2"
}

if [ ! -z $iopt ]
then
    fun1
fi

if [ ! -z $vopt ]
then 
    fun2
fi
