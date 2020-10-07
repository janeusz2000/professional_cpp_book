load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_test")

# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_binary(
    name = "pointers",
    srcs = ["chapter_10/main.cpp"],
    copts = ["/std:c++17"],
)

cc_test(
    name = "my_test",
    srcs = ["test.cpp"],
    copts = ["-Iexternal/gtest/include"],
    deps = ["@com_google_googletest//:gtest_main"],
)
