# Authour : Seong Kun Bak <tjdrns27@kribb.re.kr>
# Date : 22-02-19
# Description : for Openannepro QMK compile

FROM ubuntu:20.04

# in korea
RUN sed -i 's/archive.ubuntu.com/mirror.kakao.com/g' /etc/apt/sources.list

# compilers
RUN apt update \
    && apt install -y build-essential ca-certificates less git sudo \
pkg-config libusb-1.0-0-dev cargo gcc-arm-none-eabi libstdc++-arm-none-eabi-newlib

# adduser
RUN adduser --disabled-password --gecos '' dev
RUN adduser dev sudo
RUN cd /home/dev

# annepro2 tool
RUN git clone https://github.com/OpenAnnePro/AnnePro2-Tools.git
RUN cd AnnePro2-Tools \
    && cargo build --release

RUN ln /home/dev/AnnePro2-Tools/target/release/annepro2_tools /usr/bin/annepro2_tools
RUN cd /home/dev

RUN git clone https://github.com/OpenAnnePro/qmk_firmware.git annepro-qmk --recursive --depth 1 \
    && cd annepro2-qmk && ./util/qmk_install.sh 

RUN rm -r ./keyboards/annepro2/keymaps/CarmineCrown \
    && rm -r ./keyboards/annepro2/keymaps/thomazmoura \
    && rm -r ./keyboards/annepro2/keymaps/kdarkhan/
    
RUN make annepro2/c18

RUN cd /home/dev \
    && git clone https://github.com/OpenAnnePro/AnnePro2-Shine.git --recursive --depth 1 \
    && cd Annepro2-Shine && make C18


