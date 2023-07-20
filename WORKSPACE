load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

http_archive(
    name = "com_google_googletest",
    strip_prefix = "googletest-5ab508a01f9eb089207ee87fd547d290da39d015",
    urls = ["https://github.com/google/googletest/archive/5ab508a01f9eb089207ee87fd547d290da39d015.zip"],
)

git_repository(
    name = "imgui",
    branch = "master",
    remote = "https://github.com/phaedon/imgui.git"
,)

git_repository(
    name = "happly",
    branch = "master",
    build_file_content = """
cc_library(
    name = "happly",
    srcs = [],
    includes = ['.'],
    hdrs = ["happly.h"],
    visibility = ["//visibility:public"],
)
""",
    remote = "https://github.com/nmwsharp/happly.git",
)

git_repository(
    name = "stb",
    branch = "master",
    build_file_content = """
cc_library(
    name = 'stb',
    srcs = [],
    includes = ['.'],
    hdrs = glob(['*.h']),
    visibility = ['//visibility:public'],
)
""",
    remote = "https://github.com/nothings/stb.git",
)

git_repository(
    name = "glm",
    branch = "master",
    build_file_content = """
cc_library(
    name = 'glm',
    srcs = [],
    includes = ['.'],
    hdrs = glob(['glm/**/*.hpp', 'glm/**/*.h', 'glm/**/*.inl']),
    visibility = ['//visibility:public'],
)
""",
    remote = "https://github.com/g-truc/glm.git",
)
