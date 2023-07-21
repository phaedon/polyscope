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
    remote = "https://github.com/phaedon/imgui.git",
)

http_archive(
    name = "imgui-1.86",
    build_file_content = """
cc_library(
    name = "imgui-1.86",
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
    includes = ["."],
    visibility = ["//visibility:public"],
)
""",
    strip_prefix = "imgui-1.86",
    urls = ["https://github.com/ocornut/imgui/archive/refs/tags/v1.86.tar.gz"],
)

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

# To get this to work on linux, you have to run:
#     sudo apt install libglfw3-dev
# TODO: replace with a proper rule using
#     urls = ["https://github.com/glfw/glfw/archive/refs/tags/3.3.6.tar.gz"],
new_local_repository(
    name = "libglfw3",
    build_file_content =
        """
cc_import(
    name = "libglfw3",
    hdrs = glob(["include/GLFW/*.h"]),
    shared_library = "lib/x86_64-linux-gnu/libglfw.so",
    visibility = ["//visibility:public"],
)
""",
    path = "/usr",
)
