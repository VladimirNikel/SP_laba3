FROM ubuntu

RUN apt update && apt install git -y && apt install build-essential -y && apt install bash -y && apt-get install gcc-multilib -y

WORKDIR /home/app/

RUN git clone https://github.com/VladimirNikel/SP_laba3.git \
	&& cd SP_laba3/ \
	&& gcc -fno-pie -no-pie 3laba.cpp -o lab3 -g -lstdc++

WORKDIR /home/app/SP_laba3/
