FROM ubuntu:24.04

# unzip, zip required by bazel.
# python3 required by the bazel compile commands generator.
# libc6-dev, libxml2 required by the LLVM toolchain that bazel invokes.
RUN apt-get update -y && apt-get install -y unzip zip wget git python3 libc6-dev libxml2

# Please keep the bazel version here in sync with .bazeliskrc
RUN if [ "$(uname -m)" = "x86_64" ]; then \
      wget -O bazel "https://github.com/bazelbuild/bazel/releases/download/7.3.2/bazel-7.3.2-linux-x86_64"; \
    elif [ "$(uname -m)" = "aarch64" -o "$(uname -m)" = "arm64" ]; then \
      wget -O bazel "https://github.com/bazelbuild/bazel/releases/download/7.3.2/bazel-7.3.2-linux-arm64"; \
    fi && \
    chmod 755 bazel && \
    mv bazel /usr/bin/bazel
