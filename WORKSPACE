load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

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

http_archive(
    name = "imgui",
    build_file_content = """
cc_library(
    name = "imgui",
    srcs = [
        "backends/imgui_impl_glfw.cpp",
        "backends/imgui_impl_opengl3.cpp",
        "imgui.cpp",
        "imgui_draw.cpp",
        "imgui_tables.cpp",
        "imgui_widgets.cpp",
    ],
    hdrs = [
        "backends/imgui_impl_glfw.h",
        "backends/imgui_impl_opengl3.h",
        "backends/imgui_impl_opengl3_loader.h",
        "imconfig.h",
        "imgui.h",
        "imgui_internal.h",
        "imstb_rectpack.h",
        "imstb_textedit.h",
        "imstb_truetype.h",
    ],
    deps = [
        "@glfw",
    ],
    linkopts = select({
        "@rules_cc//cc/compiler:msvc-cl": [
            "/DEFAULTLIB:opengl32",
        ],
        "@rules_cc//cc/compiler:clang-cl": [
            "/DEFAULTLIB:opengl32",
        ],
        "@bazel_tools//src/conditions:linux_x86_64": [
            "-lGL",
            "-ldl",
            "-lpthread",
        ],
        "//conditions:default": [],
    }),
    includes = ["."],
    include_prefix = "imgui",
    visibility = ["//visibility:public"],
)
""",
    strip_prefix = "imgui-1.91.3",
    urls = ["https://github.com/ocornut/imgui/archive/refs/tags/v1.91.3.tar.gz"],
)
