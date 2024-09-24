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
5. ändra compiler till clang: export CC=clang
5. bygg ihopa med bazel: bazel build //:fuzz_example_test
6. kör fuzz testet: bazel-bin/fuzz_example_test

