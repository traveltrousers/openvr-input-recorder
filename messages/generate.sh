#!/bin/bash
cd "${0%/*}"
rm -f ../src/generated/*
../thirdparty/protobuf/cmake/build/x64-Release/Release/protoc.exe -I. -I../thirdparty/protobuf/src/ --cpp_out=../src/generated ./*.proto