cc_test(
    name = "fuzz_test",
    srcs = ["fuzz_test.cc"],
    copts = ["-fsanitize=fuzzer,address", "-O1"],
    linkopts = ["-fsanitize=fuzzer,address"],
)