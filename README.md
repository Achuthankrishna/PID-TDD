# PID-TDD
ENPM808X TDD Project (Fall 2023)

![CICD Workflow status](https://github.com/Achuthankrishna/PID-TDD/actions/workflows/run-unit-test-and-upload-codecov.yml/badge.svg) [![codecov](https://codecov.io/gh/Achuthankrishna/PID-TDD/graph/badge.svg)](https://codecov.io/gh/Achuthankrishna/PID-TDD) [![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

## Part 1 Authors
Driver: Vyshnav Achuthan (Achuthankrishna) <br> 
Navigator: Jerry Pittman, Jr. (jpittma1)

## UML Diagram 
![alt text](/UML/UML1.png)

## Standard install via command-line
```bash
# Download the code:
  git clone https://github.com/Achuthankrishna/PID-TDD.git
  cd PID-TDD
# Configure the project and generate a native build system:
  # Must re-run this command whenever any CMakeLists.txt file has been changed.
  cmake -S ./ -B build/
# Compile and build the project:
  # rebuild only files that are modified since the last build
  cmake --build build/
  # or rebuild everything from scracth
  cmake --build build/ --clean-first
  # to see verbose output, do:
  cmake --build build/ --verbose
# Run program:
  ./build/app/shell-app
# Run tests:
  cd build/; ctest; cd -
  # or if you have newer cmake
  ctest --test-dir build/
# Build docs:
  cmake --build build/ --target docs
  # open a web browser to browse the doc
  open docs/html/index.html
# Clean
  cmake --build build/ --target clean
# Clean and start over:
  rm -rf build/
```
