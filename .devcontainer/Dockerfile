FROM ubuntu:24.04

# 'unzip zip' are required by bazel.
# python3 is required by the bazel compile commands generator.
# libxml2 is required by the LLVM toolchain that bazel invokes.
RUN apt-get update -y && \
    if [ "$(uname -m)" = "x86_64" ]; then \
        apt-get install -y unzip zip wget git python3 libxml2; \
    else \
        apt-get install -y unzip zip wget git python3 libxml2; \
    fi

# Please keep the bazel version here in sync with .bazeliskrc
RUN if [ "$(uname -m)" = "x86_64" ]; then \
      wget -O bazel "https://github.com/bazelbuild/bazel/releases/download/7.3.2/bazel-7.3.2-linux-x86_64"; \
    elif [ "$(uname -m)" = "aarch64" -o "$(uname -m)" = "arm64" ]; then \
      wget -O bazel "https://github.com/bazelbuild/bazel/releases/download/7.3.2/bazel-7.3.2-linux-arm64"; \
    fi && \
    chmod 755 bazel && \
    mv bazel /usr/bin/bazel
