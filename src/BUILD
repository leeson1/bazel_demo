load("@com_grail_bazel_compdb//:defs.bzl", "compilation_database")

cc_binary(
    name = "demo",
    srcs = ["main.cc"],
      deps = [
    "//src:print",
  ],
)

cc_library(
  name = "print",
  hdrs = glob(["*.h"]),
  visibility = ["//visibility:public"],
)

compilation_database(
    name = "example_compdb",
    # output_base = OUTPUT_BASE,
    targets = [
        ":demo",
        ":print",
    ],
)