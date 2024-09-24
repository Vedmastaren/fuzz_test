cc_library(
    name = "fuzz_example",
    srcs = ["fuzz_example.cpp"],
)

cc_binary(
    name = "fuzz_example_test",
    srcs = ["fuzz_example.cpp"],
    deps = [":fuzz_example"],
    copts = ["-fsanitize=fuzzer", "-g"],  # Aktiverar fuzzing och debug information
    linkopts = ["-fsanitize=fuzzer"],  # Länka mot libFuzzer
)