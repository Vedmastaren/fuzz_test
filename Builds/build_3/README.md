# C++ Header File with Bazel Compilation Example

## Innehåll

Denna övning visar hur du kan använda header-filer för att deklarera funktioner i C++ och använda Bazel som byggverktyg för att kompilera och länka dina C++-filer.

### Struktur

Projektet består av följande filer:
- **main.cpp**: Huvudfilen som körs vid programstart.
- **functions.h**: Header-fil som deklarerar funktionerna.
- **functions.cpp**: Implementation av de funktioner som deklareras i `functions.h`.
- **BUILD**: Bazel build-fil som definierar byggmålen.
- **WORKSPACE**: Behövs för Bazel-projekt, även om den kan vara tom i detta exempel.

