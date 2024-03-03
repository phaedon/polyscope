load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

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
    deps = [
        "@glfw-3.3.9",
    ],
    linkopts = ["-ldl"],
    includes = ["."],
    include_prefix = "imgui",
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

http_archive(
    name = "glfw-3.3.9",
    build_file_content = """
cc_library(
    name = "glfw-headers",
    hdrs = [
        "include/GLFW/glfw3.h",
    ],
    strip_include_prefix = "include",
    includes = ['.'],
    visibility = [
        "//visibility:private",
    ],
)
cc_library(
    name = "glfw-3.3.9",
    srcs = [
        "src/context.c",
        "src/egl_context.c",
        "src/glx_context.c",
        "src/init.c",
        "src/input.c",
        "src/linux_joystick.c",
        "src/monitor.c",
        "src/osmesa_context.c",
        "src/posix_thread.c",
        "src/posix_time.c",
        "src/vulkan.c",
        "src/window.c",
        "src/x11_init.c",
        "src/x11_monitor.c",
        "src/x11_window.c",
        "src/xkb_unicode.c",
    ],
    hdrs = [
        "include/GLFW/glfw3native.h",
        "src/egl_context.h",
        "src/glx_context.h",
        "src/internal.h",
        "src/linux_joystick.h",
        "src/mappings.h",
        "src/osmesa_context.h",
        "src/posix_thread.h",
        "src/posix_time.h",
        "src/x11_platform.h",
        "src/xkb_unicode.h",
    ],
    deps = [
        ":glfw-headers",
    ],
    defines = ["_GLFW_X11",],
    linkopts = ["-lX11",],
    visibility = ["//visibility:public"],
)
""",
    sha256 = "a7e7faef424fcb5f83d8faecf9d697a338da7f7a906fc1afbc0e1879ef31bd53",
    strip_prefix = "glfw-3.3.9",
    urls = ["https://github.com/glfw/glfw/archive/refs/tags/3.3.9.tar.gz"],
)