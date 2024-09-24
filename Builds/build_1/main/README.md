# Fuzz Testing with Bazel

## Introduktion
Fuzz testing i C++ med hjälp av Bazel som byggsystem.

## Innehåll
- `fuzz_example.cpp`: C++-koden för fuzz-testet.
- `BUILD`: Bazel-konfigurationsfilen för att bygga projektet.
- `MODULE.bazel`: Dependencies hantering.

## Förutsättningar
Innan du börjar, se till att du har följande installerat på ditt system:

- [Bazel](https://bazel.build/)
- En C++-kompilator (använder själv `clang` men `g++` fungerar också)
- `libFuzzer` (om du använder Clang, bör det ingå)

1. Clona repot: https://github.com/Vedmastaren/fuzz_test.git 
2. skapa en mapp (fuzz_test)
3. skapa en cpp fil: fuzz_example.cpp
4. skapa en BUILD fil: BUILD
5. bygg ihopa med bazel i main mappen: bazel build //main:fuzz_example_test
6. kör fuzz testet i build_1 mappen: bazel-bin/main/fuzz_example_test

