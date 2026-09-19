savedcmd_t2bce_ave.mod := printf '%s\n'   ave.o protocol.o encoder.o video.o | awk '!x[$$0]++ { print("./"$$0) }' > t2bce_ave.mod
