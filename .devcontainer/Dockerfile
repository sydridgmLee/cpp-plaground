FROM ubuntu:focal

RUN apt-get update && apt-get install -y ca-certificates; \
    aptArch="$(dpkg --print-architecture)"; \
    case "${aptArch}" in \
    amd64)  \
    echo " \
    deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ focal main restricted universe multiverse \n \  
    deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ focal-updates main restricted universe multiverse \n \
    deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ focal-backports main restricted universe multiverse \n \
    deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu/ focal-security main restricted universe multiverse \n \
    " > /etc/apt/sources.list;; \
    arm64) \
    echo " \
    deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu-ports/ focal main restricted universe multiverse \n \  
    deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu-ports/ focal-updates main restricted universe multiverse \n \
    deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu-ports/ focal-backports main restricted universe multiverse \n \
    deb https://mirrors.tuna.tsinghua.edu.cn/ubuntu-ports/ focal-security main restricted universe multiverse \n \
    " > /etc/apt/sources.list;; \
    esac; 

RUN apt update && apt-get install -y \
    ca-certificates build-essential \
    make cmake libssl-dev \
    autoconf automake libtool g++

COPY cpptools-linux-aarch64.vsix /tmp/cpptools-linux-aarch64.vsix
COPY codelldb-aarch64-linux.vsix /tmp/codelldb-aarch64-linux.vsix